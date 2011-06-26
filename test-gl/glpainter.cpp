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
using namespace gl;


class glpainter : public opengl {
public:
	enum menuitems {
		MI_CH_CM_RED,
		MI_CH_CM_GREEN,
		MI_CH_CM_BLUE,
		MI_CH_CM_YELLOW,
		MI_CH_CM_WHITE,
		MI_CH_CM_BLACK,
		
		MI_CH_PM_POINT,
		MI_CH_PM_LINE,
		MI_CH_PM_RECT,
		MI_CH_PM_CIRCLE,
		MI_FILL_ON,
		MI_FILL_OFF,
		MI_FULL_SCREEN,
		MI_EXIT_FULL_SCREEN,
		MI_QUIT
	};
	
	enum paintmode {
		PM_POINT,
		PM_LINE,
		PM_RECT,
		PM_CIRCLE
	};
	
	enum colormode {
		CM_RED,
		CM_GREEN,
		CM_BLUE,
		CM_YELLOW,
		CM_WHITE,
		CM_BLACK,
	};

	glpainter(): opengl(800, 600, "glpainter") {
		pmode=PM_POINT;
		pen.forecolor(pal.red);
		glPointSize(3);
	}

	void buildmenu() {
		glutAddMenuEntry("change red color", MI_CH_CM_RED);
		glutAddMenuEntry("change green color", MI_CH_CM_GREEN);
		glutAddMenuEntry("change blue color", MI_CH_CM_BLUE);
		glutAddMenuEntry("change yellow color", MI_CH_CM_YELLOW);
		glutAddMenuEntry("change white color", MI_CH_CM_WHITE);
		glutAddMenuEntry("change black color", MI_CH_CM_BLACK);
		
		
		glutAddMenuEntry("change point mode", MI_CH_PM_POINT);
		glutAddMenuEntry("change line mode", MI_CH_PM_LINE);
		glutAddMenuEntry("change rect mode", MI_CH_PM_RECT);
		glutAddMenuEntry("change circle mode", MI_CH_PM_CIRCLE);
		
		glutAddMenuEntry("turn fill on", MI_FILL_ON);
		glutAddMenuEntry("turn fill off", MI_FILL_OFF);
		
		glutAddMenuEntry("full screen", MI_FULL_SCREEN);
		glutAddMenuEntry("exit full screen", MI_EXIT_FULL_SCREEN);
		glutAddMenuEntry("quit", MI_QUIT);
	}
	
	void menuclick(int item) {
		if (item==MI_CH_PM_POINT) {
			pmode=PM_POINT;
		} else if (item==MI_CH_PM_LINE) {
			pmode=PM_LINE;
		} else if (item==MI_CH_PM_RECT) {
			pmode=PM_RECT;
		} else if (item==MI_CH_PM_CIRCLE) {
			pmode=PM_CIRCLE;
		} else if (item==MI_FILL_ON) {
		} else if (item==MI_FILL_OFF) {
		} else if (item==MI_CH_CM_RED) {
			c=pal.red;
		} else if (item==MI_CH_CM_GREEN) {
			c=pal.green;
		} else if (item==MI_CH_CM_BLUE) {
			c=pal.blue;
		} else if (item==MI_CH_CM_YELLOW) {
			c=pal.yellow;
		} else if (item==MI_CH_CM_WHITE) {
			c=pal.white;
		} else if (item==MI_CH_CM_BLACK) {
			c=pal.black;
		} else if (item==MI_FULL_SCREEN) {
			glutFullScreen();
		} else if (item==MI_EXIT_FULL_SCREEN) {
		} else if (item==MI_QUIT) {
			exit(0);
		}
	}
	
	void display() {
		log("in glpainter display");
		glClear(GL_COLOR_BUFFER_BIT);
		glShadeModel(GL_SMOOTH);
		glLoadIdentity();
		
		glTranslatef(world.x, world.y, world.z);
		
		// glRotatef(rotation.angle, rotation.x, rotation.y, rotation.z);
		
		pen_t p1(pal.white, 1);
		p1.draw(rect(point(0, 0), point(800, 600)));
		
		pen_t p(pal.red, 2);
		
		p.draw(rect(point(400-10, 300-10), point(400+10, 300+10)));
		p.draw(rect(point(400-10, 300-10), point(400+10, 300+10)));
		p.draw(rect(point(0, 0), point(100, 100)));
		
		p.draw(line(point(0, 0), point(800, 600)));
		p.draw(line(point(0, 150), point(800, 450)));
		
		pen.forecolor(c);
		
		pen.draw(ps);
		pen.draw(ls);
		pen.draw(cs);
		pen.draw(rs);
		
		if (old!=now) {
			if (pmode==PM_LINE) {
				pen.draw(line(old, now));
			} else if (pmode==PM_RECT) {
				pen.draw(rect(old, now));
			} else if (pmode==PM_CIRCLE) {
				pen.draw(circle(old, now.distance(old)));
			}
		}
		
		
		flush();
	}
	
	void leftmousedown(const point& down) {
		log("leftmousedown");
		old=down;
	}
	
	void leftmouseup(const point& up, const point& down) {
		log("leftmouseup");
		if (pmode==PM_LINE) {
			if (up!=down) ls.push_back(line(up, down));
		} else if (pmode==PM_RECT) {
			if (up!=down) rs.push_back(rect(up, down));
		} else if (pmode==PM_CIRCLE) {
			if (up!=down) cs.push_back(circle(down, up.distance(down)));
		}
		
		refresh();
	}
	
	void leftmouseclick(const point& p) {
		log("leftmouseclick");
		if (pmode==PM_POINT) {
			ps.push_back(p);
		}
		refresh();
	}
	
	void leftmousemove(const point& p, const point& last, const point& down) {
		// log("leftmousemove : form (%f, %f) to (%f, %f) : mouse down in (%f, %f)", last.x, last.y, p.x, p.y, down.x, down.y);
		now=p;
		refresh();
	}
	
	void middlemousemove(const point& p, const point& last, const point& down) {
		if (p==last && p==down) return;
		// log("middlemousemove : form (%f, %f) to (%f, %f) : mouse down in (%f, %f)", last.x, last.y, p.x, p.y, down.x, down.y);
		world.x-=last.x-p.x;
		world.y-=last.y-p.y;
		reshape();
		refresh();
	}
	
	// void idlefunc() {
		// rotation.angle+=0.1;
		// refresh();
	// }
private:
	paintmode pmode;
	color c;
	point now;
	point old;
	rects rs;
	lines ls;
	points ps;
	circles cs;
};

int main() {
	gl_main<glpainter>();
}
