/**
 * File: main.cpp
 * Description:
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 *
 * Date: 2011-06-17 04:24:49.940000
 * Written In: Peking University, beijing, China
 */

#define debug
#include "jade.hpp"
#include "opengl.hpp"
using namespace gl;


class glvisualdata : public opengl {
public:
	glvisualdata(): opengl(800, 600, "glvisualdata") {
		pen.forecolor(pal.red);
		pen.pointsize(10);
		pen.filled(true);
		c=C_RED;
		c_all=C_BLUE+1;
	}
	
	enum menuitems {
		MI_CLUSTER_BY_KMEANS,
		MI_CLUSTER_BY_KMEDIOS,
		MI_SET_CLASS_CNT_2,
		MI_SET_CLASS_CNT_3,
		MI_SAVE_DATA,
		MI_LOAD_DATA,
		MI_FULL_SCREEN,
		MI_EXIT_FULL_SCREEN,
		MI_QUIT
	};
	
	void buildmenu() {
		glutAddSubMenu("cluster by k-means", MI_CLUSTER_BY_KMEANS);
		glutAddSubMenu("cluster by k-medios", MI_CLUSTER_BY_KMEDIOS);
		glutAddSubMenu("set cluster class count k=2", MI_SET_CLASS_CNT_2);
		glutAddSubMenu("set cluster class count k=3", MI_SET_CLASS_CNT_3);
		glutAddMenuEntry("save data", MI_SAVE_DATA);
		glutAddMenuEntry("load data", MI_LOAD_DATA);
		glutAddMenuEntry("full screen", MI_FULL_SCREEN);
		glutAddMenuEntry("exit full screen", MI_EXIT_FULL_SCREEN);
		glutAddMenuEntry("quit", MI_QUIT);
	}
	
	void menuclick(int item) {
		if (item==MI_SAVE_DATA) {
			ofstream f("glvisualdata.txt");
			for_n(i, 3) {
				uint l=cs[i].size();
				f<<l<<endl;
				for_n(j, l) {
					f<<cs[i][j].center.x<<"\t"<<cs[i][j].center.y<<endl;
				}
			}
			f.close();
			log("successfully saved");
		} else if (item==MI_LOAD_DATA) {
			for_n(i, 4) cs[i].clear();
			ifstream f("glvisualdata.txt");
			for_n(i, 3) {
				uint l;
				f>>l;
				for_n(j, l) {
					float x, y;
					f>>x>>y;
					circle cc(point(x, y), 6);
					cs[i].push_back(cc);
					cs[3].push_back(cc);
				}
			}
			f.close();
			log("successfully loaded");
			refresh();
		} else if (item==MI_FULL_SCREEN) {
			glutFullScreen();
		} else if (item==MI_CLUSTER_BY_KMEANS) {
			
		} else if (item==MI_CLUSTER_BY_KMEDIOS) {
			
		} else if (item==MI_EXIT_FULL_SCREEN) {
		} else if (item==MI_SET_CLASS_CNT_2) {
			k=2;
		} else if (item==MI_SET_CLASS_CNT_3) {
			k=3;
		} else if (item==MI_QUIT) {
			exit(0);
		}
	}
	
	void display() {
		glClear(GL_COLOR_BUFFER_BIT);
		glShadeModel(GL_SMOOTH);
		glLoadIdentity();
		glTranslatef(world.x, world.y, world.z);
		
		pen_t pbox(pal.white, 1);
		pbox.draw(rect(point(0, 0), point(800, 600)));
		
		for (int i=C_RED; i<=C_BLUE; ++i) {
			pen_t p(colors[i], 1, true);
			for_iter(it, circles, cs[i]) p.draw(*it);
		}
		flush();
	}

	void keyboard(unsigned char key, int x, int y) {
		transform2worldcord(x, y);
		switch (key) {
			case 27: exit (0); break;
			case 'r': c=C_RED; break;
			case 'g': c=C_GREEN; break;
			case 'b': c=C_BLUE; break;
		}
		glutPostRedisplay();
	}

	void leftmouseclick(const point& p) {
		log("leftmouseclick");
		circle cc(p, 6);
		cs[c_all].push_back(cc);
		cs[c].push_back(cc);
		refresh();
	}
	
	void leftmousemove(const point& p, const point& last, const point& down) {
		if (p==last && p==down) return;
		if (p.distance(last)>2 && rand()%5==0) {
			circle cc(point(p.x-20+rand()%40, p.y-20+rand()%40), 6);
			cs[c_all].push_back(cc);
			cs[c].push_back(cc);
			refresh();
		}
	}
	
	void middlemousemove(const point& p, const point& last, const point& down) {
		if (p==last && p==down) return;
		world.x-=last.x-p.x;
		world.y-=last.y-p.y;
		reshape();
		refresh();
	}
	
	void f2pressed() {}
	void f3pressed() {}
	void f4pressed() {}
	
	void f5pressed() {
		log("refresh");
		reshape();
		refresh();
	}
	
	void f6pressed() {
		log("clear all");
		for_n(i, 4) cs[i].clear();
		refresh();
	}
	
private:
	int k;
	int c;
	circles cs[4];
	int c_all;
};

int main() {
	gl_main<glvisualdata>();
}
