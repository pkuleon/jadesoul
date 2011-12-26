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
#include "gl.hpp"
#include "ml.hpp"

using namespace gl;

class glvisualdata : public opengl {
public:
	enum modes {
		MD_DRAW,
		MD_KMEANS_DEMO
	};
	
	glvisualdata(): opengl(800, 600, "Opengl Visual Machine Learning Demo By Jadesoul") {
		pen.forecolor(pal.white);
		pen.pointsize(10);
		pen.filled(true);
		c=C_RED;
		c_all=C_BLUE+1;
		k=3;
		mode=MD_DRAW;
		distype=2;
	}
	
	
	
	enum menuitems {
		MI_CLUSTER_BY_KMEANS,
		MI_CLUSTER_BY_KMEDIOS,
		MI_CLASSIFY_BY_NAIVE_BAYES,
		MI_SET_CLASS_CNT_2,
		MI_SET_CLASS_CNT_3,
		MI_SAVE_DATA,
		MI_LOAD_DATA,
		MI_FULL_SCREEN,
		MI_EXIT_FULL_SCREEN,
		MI_QUIT
	};
	
	void buildmenu() {
		glutAddMenuEntry("cluster by k-means", MI_CLUSTER_BY_KMEANS);
		glutAddMenuEntry("cluster by k-medios", MI_CLUSTER_BY_KMEDIOS);
		glutAddMenuEntry("classify by naive bayes", MI_CLASSIFY_BY_NAIVE_BAYES);
		glutAddMenuEntry("set cluster class count k=2", MI_SET_CLASS_CNT_2);
		glutAddMenuEntry("set cluster class count k=3", MI_SET_CLASS_CNT_3);
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
			cluster_demo();
		} else if (item==MI_CLUSTER_BY_KMEDIOS) {
		} else if (item==MI_CLASSIFY_BY_NAIVE_BAYES) {
			circles2datatable_for_classify();
		} else if (item==MI_EXIT_FULL_SCREEN) {
		} else if (item==MI_SET_CLASS_CNT_2) {
			if (mode==MD_DRAW) k=2;
		} else if (item==MI_SET_CLASS_CNT_3) {
			if (mode==MD_DRAW) k=3;
		} else if (item==MI_QUIT) {
			exit(0);
		}
	}
	
	void circles2datatable_for_cluster() {
		circles& all=cs[c_all];
		uint l=all.size();
		dt_for_cluster.resize(l, 2);
		for_n(i, l) {
			dt_for_cluster.at(i, 0)=all[i].center.x;
			dt_for_cluster.at(i, 1)=all[i].center.y;
		}
	}
	
	void circles2datatable_for_classify() {
		uint l=0;
		for (int i=0; i<c_all; ++i) l+=cs[i].size();
		dt_for_classify.resize(l, 3);
		uint k=0;
		for (int i=0; i<c_all; ++i) {
			uint ll=cs[i].size();
			for_n(j, ll) {
				dt_for_classify.at(k, 0)=cs[i][j].center.x;
				dt_for_classify.at(k, 1)=cs[i][j].center.y;
				dt_for_classify.at(k, 2)=i;
				++k;
			}
		}
	}
	
	class visualkmeans : public kmeans<float> {
	public:
		friend class glvisualdata;
		visualkmeans(data_t& data, uint k=2, int distype=0):kmeans<float>(data, k, distype) {}
	};
	
	void cluster_demo() {
		circles2datatable_for_cluster();
		if (dt_for_cluster.row()==0) return;
		mode=MD_KMEANS_DEMO;
		
		for_n(i, c_all) cs[i].clear();
		
		vk=new visualkmeans(dt_for_cluster, k, distype);
		vk->generate_random_centers();
		
		kmcenters.clear();
		for_n(i, k) kmcenters.push_back(circle(point(vk->centers[i][0], vk->centers[i][1]), 12));
		
		for_n(i, c_all) cs[i].clear();
		vk->assign_samples_to_clusters();
		for_n(i, k) {
			uint l=vk->clusters[i].samples.size();
			log("class %d with %d samples", i, l);
			for_n(j, l) {
				cs[i].push_back(circle(point(vk->clusters[i].samples[j][0], vk->clusters[i].samples[j][1]), 6));
			}
		}
		
		refresh();
	}
	
	void km_next_iteration() {
		if (mode!=MD_KMEANS_DEMO) return;
		if (vk->is_centers_nearly_not_change()) {
			vk->assign_samples_to_clusters();
			refresh();
			delete vk;
			mode=MD_DRAW;
			return;
		}
		
		for_n(i, c_all) cs[i].clear();
		vk->assign_samples_to_clusters();
		for_n(i, k) {
			uint l=vk->clusters[i].samples.size();
			log("class %d with %d samples", i, l);
			for_n(j, l) {
				cs[i].push_back(circle(point(vk->clusters[i].samples[j][0], vk->clusters[i].samples[j][1]), 6));
			}
		}
		
		vk->caculate_new_centers();
		for_n(i, k) kmcenters[i]=circle(point(vk->centers[i][0], vk->centers[i][1]), 12);
		refresh();
	}
	
	void display() {
		glClear(GL_COLOR_BUFFER_BIT);
		glShadeModel(GL_SMOOTH);
		glLoadIdentity();
		glTranslatef(world.x, world.y, world.z);
		
		pen_t pbox(pal.white, 1);
		pbox.draw(rect(point(0, 0), point(800, 600)));
		
		if (mode==MD_DRAW) {
			for (int i=0; i<c_all; ++i) {
				pen_t p(colors[i], 1, true);
				for_iter(it, circles, cs[i]) p.draw(*it);
			}
		} else if (mode==MD_KMEANS_DEMO) {
		
			if (cs[0].size()==0 && cs[1].size()==0 && cs[2].size()==0) pen.draw(cs[c_all]);
			
			for_n(i, k) {
				pen_t p(colors[i], 1, true);
				for_iter(it, circles, cs[i]) p.draw(*it);
			}

			for_n(i, k) {
				pen_t pc(color(colors[i].deeper(0.3)), 1, true);
				pc.draw(kmcenters[i]);
			}
			
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
			case 't': distype=(distype+1) % ML_DIST_TOTAL_COUNT; log("distance type %d", distype); break;
		}
		glutPostRedisplay();
	}

	void leftmouseclick(const point& p) {
		log("leftmouseclick");
		if (mode!=MD_DRAW) return;
		circle cc(p, 6);
		cs[c_all].push_back(cc);
		cs[c].push_back(cc);
		refresh();
	}
	
	void leftmousemove(const point& p, const point& last, const point& down) {
		if (mode!=MD_DRAW) return;
		if (p==last && p==down) return;
		if (p.distance(last)>2 && rand()%5==0) {
			circle cc(point(p.x-20+rand()%40, p.y-20+rand()%40), 6);
			cs[c_all].push_back(cc);
			cs[c].push_back(cc);
			refresh();
		}
	}
	
	void middlemousemove(const point& p, const point& last, const point& down) {
		if (mode!=MD_DRAW) return;
		if (p==last && p==down) return;
		world.x-=last.x-p.x;
		world.y-=last.y-p.y;
		reshape();
		refresh();
	}
	
	void f2pressed() {
		resetworld();
		reshape();
		refresh();
	}
	
	void f3pressed() {
		if (mode==MD_KMEANS_DEMO) km_next_iteration();
		else cluster_demo();
	}
	
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
	int mode;
	int k;
	datatable<float> dt_for_cluster;
	datatable<float> dt_for_classify;
	int c;
	circles cs[4];
	int c_all;
	visualkmeans* vk;
	//for kmeans
	circles kmcenters;
	int distype;
};

int main() {
	gl_main<glvisualdata>();
}

