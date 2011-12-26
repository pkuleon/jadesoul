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

class glpainter : public opengl {
public:
	enum paintmode {
		PM_POINT,
		PM_LINE,
		PM_RECT,
		PM_CIRCLE
	};

	glpainter(): opengl(800, 600, "glpainter") {
		mode=PM_LINE;
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
		
		for(int i=0; i<ls.size(); ++i) {
			line l=ls[i];
			p.draw(l);
		}
		// p.draw(ls);
		
		pen.draw(line(mouse.left.last_down_pos, now));
		flush();
	}
	
	void leftmousedown(const point& down) {
		log("leftmousedown");
	}
	
	void leftmouseup(const point& up, const point& down) {
		log("leftmouseup");
		if (up!=down) ls.push_back(line(up, down));
		refresh();
	}
	
	void leftmouseclick(const point& p) {
		log("leftmouseclick");
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
	paintmode mode;
	point now;
	point old;
	rects rs;
	lines ls;
};

int main() {
	gl_main<glpainter>();
}
