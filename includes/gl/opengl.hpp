#ifndef OPENGL_HPP_BY_JADESOUL
#define OPENGL_HPP_BY_JADESOUL
/**
 * File: opengl.hpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-06-17 04:23:24.682000
 * Written In: Peking University, beijing, China
 */

#include "jade.hpp"
#include <gl/glut.h>

namespace gl {

struct color {
	color(float R=1, float G=1, float B=1):r(R), g(G), b(B){}
	float r, g, b;
	bool operator ==(const color& c) const {
		return this->r==c.r && this->g==c.g && this->b==c.b;
	}
	bool operator !=(const color& c) const {
		return !(*this == c);
	}
	friend ostream& operator << (ostream& os, const color& c){
		return os<<"[color : r="<<c.r<<" g="<<c.g<<" b="<<c.b<<"]"<<endl;
	}
};

struct palette {
	const color red, green, blue, yellow, white, black, gray, pink, cyan, orange, grass;
	palette(): red(1,0,0), green(0, 1, 0), blue(0, 0, 1), yellow(1, 1, 0), white(1, 1, 1),black(0, 0, 0), gray(0.5, 0.5, 0.5), pink(1, 0, 1), cyan(0, 1, 1), orange(1, 0.5, 0), grass(0, 1, 0.5){}
} pal;

enum all_colors {
	C_RED,
	C_GREEN,
	C_BLUE,
	C_YELLOW,
	C_WHITE,
	C_BLACK,
	C_GRAY,
	C_PINK,
	C_CYAN,
	C_ORANGE,
	C_GRASS,
	C_TATAL
};

static color colors[]={
	pal.red,
	pal.green,
	pal.blue,
	pal.yellow,
	pal.white,
	pal.black,
	pal.gray,
	pal.pink,
	pal.cyan,
	pal.orange,
	pal.grass
};


class point {
public:
	float x;
	float y;
	
	point() {}
	point(float x, float y):x(x), y(y) {}
	
	void zero() {
		x=y=0;
	}
	
	bool operator ==(const point& p) const {
		return this->x==p.x && this->y==p.y;
	}
	
	bool operator !=(const point& p) const {
		return !(*this == p);
	}
	
	float distance(const point& p) const {
		return sqrt(pow(p.x-x, 2)+pow(p.y-y, 2));
	}
	
	void render() const {
		glBegin(GL_POINTS);
			glVertex2f(x, y);
		glEnd();
	}
};

typedef vector<point> points;

class line {
public:
	point a;
	point b;
	
	line() {}
	line(const point& a, const point& b):a(a), b(b) {}
	
	bool operator ==(const line& l) const {
		return this->a==l.a && this->b==l.b;
	}
	
	bool operator !=(const line& l) const {
		return !(*this == l);
	}
	
	void render() const {
		glBegin(GL_LINES);
			glVertex2f(a.x, a.y);
			glVertex2f(b.x, b.y);
		glEnd();
	}
};

typedef vector<line> lines;

class size2d {
public:
	float width;
	float height;
	
	size2d() {}
	size2d(float w, float h):width(w), height(h) {}
	
	bool operator ==(const size2d& s) const {
		return this->width==s.width && this->height==s.height;
	}
	
	bool operator !=(const size2d& s) const {
		return !(*this == s);
	}
};

class rect {
public:
	point p;
	size2d size;
	
	rect() {}
	rect(const point& p, const size2d& s):p(p), size(s) {}
	rect(const point& a, const point& b) {
		float minx=a.x, miny=a.y, maxx=b.x, maxy=b.y;
		if (minx>maxx) swap(minx, maxx);
		if (miny>maxy) swap(miny, maxy);
		p=point(minx, miny);
		size=size2d(maxx-minx, maxy-miny);
	}
	
	void notmalize() {
		if (size.width>=0 && size.height>=0) return;
		if (size.width<0) {
			p.x += size.width;
			size.width *= -1;
		}
		if (size.height<0) {
			p.y += size.height;
			size.height *= -1;
		}
	}
	
	bool operator ==(const rect& r) {
		notmalize();
		return this->p==r.p && this->size==r.size;
	}
	
	bool operator !=(const rect& r) {
		notmalize();
		return !(*this == r);
	}
	
	void topoints(point& a, point& b) {
		notmalize();
		a=p;
		b=point(p.x+size.width, p.y+size.height);
	}
	
	void render(bool fill=false) {
		notmalize();
		point& m=p;
		point n(p.x+size.width, p.y+size.height);
		// log("draw rect between (%f, %f) and (%f, %f)", m.x, m.y, n.x, n.y);
		glBegin(fill?GL_QUADS:GL_LINE_LOOP);
			glVertex2f(n.x, n.y);
			glVertex2f(m.x, n.y);
			glVertex2f(m.x, m.y);
			glVertex2f(n.x, m.y);
		glEnd();
	}
};

typedef vector<rect> rects;

class circle {
public:
	point center;
	float radius;
	
	circle() {}
	circle(const point c, float r):center(c), radius(r) {}
	
	bool operator ==(const circle& r) const {
		return this->center==r.center && this->radius==r.radius;
	}
	
	bool operator !=(const circle& r) const {
		return !(*this == r);
	}
	
	void render(bool fill=false) const {
		int numCut=36;
		float angle=360.0*3.1415926/180/numCut;
		glBegin(fill?GL_POLYGON:GL_LINE_LOOP);
			for (int i=0; i<numCut; ++i) glVertex2f(radius*cos(i*angle)+center.x , radius*sin(i*angle)+center.y);
		glEnd();
	}
};

typedef vector<circle> circles;

class pen_t {
public:
	color c;
	float width;
	float size;
	bool fill;
	
	pen_t():c(pal.black), width(1), fill(false) {
		glColor3f(c.r, c.g, c.b);
		glLineWidth(width);
	}
	
	pen_t(const color& c, int width=1, bool fill=false):c(c), width(width), fill(fill) {
		glColor3f(c.r, c.g, c.b);
		glLineWidth(width);
	}
	
	void forecolor(const color& cl) {
		c=cl;
		glColor3f(c.r, c.g, c.b);
	}
	
	void bgcolor(const color& cl) {
	}
	
	void linewidth(float w) {
		width=w;
		glLineWidth(w);
	}
	
	void filled(bool f=true) {
		fill=f;
	}
	
	void pointsize(float s) {
		size=s;
		glPointSize(s);
	}
	
	void draw(const point& p) {
		p.render();
	}
	
	void draw(const points& ps) {
		for_citer(it, points, ps) it->render();
	}
	
	void draw(const line& l) {
		l.render();
	}
	
	void draw(const lines& ls) {
		for_citer(it, lines, ls) it->render();
	}
	
	void draw(rect& r) {
		r.render(fill);
	}
	
	void draw(rects& rs) {
		for_iter(it, rects, rs) it->render(fill);
	}
	
	void draw(const circle& cc) {
		cc.render(fill);
	}
	
	void draw(const circles& cs) {
		for_citer(it, circles, cs) it->render(fill);
	}
};

static void gl_display();
static void gl_menuclick(int value);
static void gl_idlefunc();
static void gl_reshape(int w,  int h);
static void gl_specialkey(int key, int x, int y );
static void gl_mouseclick(int button, int state, int x, int y);
static void gl_mousemove(int x, int y);
static void gl_keyboard(unsigned char key, int x, int y);

class mouse_t {
public:
	struct button {
		bool down;
		point last_down_pos;
		point last_move_pos;
		button():down(false) {}
	} left, middle, right;
};

class keyboard_t {
	struct {
		bool down;
	} keys[256];
public:
	keyboard_t() {
		clear();
	}
	
	void clear() {
		for(int i=0; i<256; ++i) {
			keys[i].down=false;
		}
	}
	
	void set_pressed(int key) {
		clear();
		log("keys set_pressed");
		keys[key].down=true;
	}
};

class worldcenter_t {
public:
	float x, y, z;
	worldcenter_t():x(0), y(0), z(0) {}
	void reset() { x=y=z=0; }
};

class rotation_t {
public:
	float angle, x, y, z;
	rotation_t():angle(0), x(0), y(1), z(0) {}
};

class perspective_t {
public:
	float angle, near, far;
	perspective_t():angle(46.4), near(0), far(500) {}
};
		
class window_t {
public:
	int winid;
	int width;
	int height;
	int x;
	int y;
	int menuid;
	bool fullscreen;
	color bgcolor;
	window_t():bgcolor(pal.gray) {}
};

class opengl {
private:
	window_t win;
	enum menuitems {
		MI_FULL_SCREEN,
		MI_EXIT_FULL_SCREEN,
		MI_QUIT
	};

protected:
	pen_t pen;
	mouse_t mouse;
	keyboard_t keys;
	
	worldcenter_t world;
	rotation_t rotation;
	perspective_t persp;
	

public:


	opengl(int w=800, int h=600, char* name="gl window", bool fullscreen=false, int x=1000, int y=50) {
		win.width=w;
		win.height=h;
		win.x=x;
		win.y=y;
		world.x=-w/2;
		world.y=-h/2;
		world.z=-700;
		win.fullscreen=fullscreen;
		int argc=0;
		char * argv[]={""};
		glutInit(&argc, argv);
		glutInitWindowSize(w, h);
		
		glutInitWindowPosition(x, y);
		win.winid=glutCreateWindow(name);
		glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
		win.menuid=glutCreateMenu(gl_menuclick);
		
		init(w, h);
		glutDisplayFunc(gl_display);
		glutReshapeFunc(gl_reshape);
		glutKeyboardFunc(gl_keyboard);
		glutMouseFunc(gl_mouseclick);
		glutMotionFunc(gl_mousemove);
		glutSpecialFunc(gl_specialkey);
		// glutIdleFunc(gl_idlefunc);
		
		if (fullscreen) glutFullScreen();
	}

	virtual void buildmenu() {
		glutAddMenuEntry("full screen", MI_FULL_SCREEN);
		glutAddMenuEntry("exit full screen", MI_EXIT_FULL_SCREEN);
		glutAddMenuEntry("quit", MI_QUIT);
	}
	
	virtual void menuclick(int item) {
		if (item==MI_FULL_SCREEN) {
			glutFullScreen();
		} else if (item==MI_EXIT_FULL_SCREEN) {
		} else if (item==MI_QUIT) {
			exit(0);
		}
	}
	
	
	void mainloop() {
		buildmenu();
		glutAttachMenu(GLUT_RIGHT_BUTTON);
		glutMainLoop();
	}
	
	virtual void init(int w, int h) {
		// glClearColor(win.bgcolor.r, win.bgcolor.g, win.bgcolor.b, 0.0);

		// glShadeModel(GL_SMOOTH);
		// glMatrixMode(GL_PROJECTION);
		// glLoadIdentity();
		// gluPerspective(45.0, float(w)/float(h), 0.1, 100.0);
		// glMatrixMode(GL_MODELVIEW);
		
		// glMatrixMode(GL_PROJECTION);
		// gluOrtho2D(1.0, 600, 1.0, 600);
	}
	
	virtual void display() {
		log("in opengl display");
		// glClear(GL_COLOR_BUFFER_BIT);
		// glLoadIdentity();
		// glShadeModel(GL_SMOOTH);
		// glLoadIdentity();
		// glFlush();
		// glutSwapBuffers();
	}

	virtual void reshape(int w, int h) {
		win.width=w;
		win.height=h;
		glViewport(0, 0, w, h);
		glMatrixMode(GL_PROJECTION);
		glLoadIdentity();
		gluPerspective(persp.angle, float(w)/float(h), persp.near, persp.far);
		glMatrixMode(GL_MODELVIEW);
		background(win.bgcolor);
		gluOrtho2D(0, w, 0, h);
		log("after reshape: (%d, %d)", w, h);
	}
	
	void reshape() {
		reshape(win.width, win.height);
	}
	
	void background(const color& c=color(0.4, 0.4, 0)) {
		glClearColor(c.r, c.g, c.b, 0.0);
	}
	
	void refresh() {
		glutPostRedisplay();
	}
	
	void flush() {
		glFlush();
		glutSwapBuffers();
	}
	
	void transform2worldcord(int& x, int& y) {
		// x=win.width-x;
		y=win.height-y;
	}
	
	

	
	virtual void keyboard( unsigned char key, int x, int y) {
		transform2worldcord(x, y);
		log("keyboard (%d, %d)", x, y);
		switch (key) {
			case 27:
				exit (0);break;
			case 'a':
			case 'A':
				break;
			default:
				if (key<='z' && key>='a' || key<='Z' && key>='A' || key<='9' && key>='0'){
					log("%c", key); 
				}else{
					log("keyboard %d", key); 
				}
		}
		glutPostRedisplay();
	}

	void mouseclick( int button, int state, int x, int y ) {
		transform2worldcord(x, y);
		log("mouseclick (%d, %d)", x, y);
		point p(x, y);
		switch (button) {
			case GLUT_LEFT_BUTTON:
				if (state==GLUT_DOWN) {
					log("left mouse button down");
					mouse.left.down=true;
					mouse.left.last_down_pos=p;
					mouse.left.last_move_pos=p;
					leftmousedown(p);
				} else if (state==GLUT_UP) {
					log("left mouse button up");
					leftmouseup(p, mouse.left.last_down_pos);
					if (mouse.left.down && p==mouse.left.last_down_pos) {
						log("left mouse button click");
						mouse.left.down=false;
						leftmouseclick(p);
					}
					mouse.left.down=false;
				}
				break;
			case GLUT_MIDDLE_BUTTON:
				if (state==GLUT_DOWN) {
					log("middle mouse button down");
					mouse.middle.down=true;
					mouse.middle.last_down_pos=p;
					mouse.middle.last_move_pos=p;
					middlemousedown(p);
				} else if ( state == GLUT_UP ) {
					log("middle mouse button up");
					middlemouseup(p, mouse.middle.last_down_pos);
					if (mouse.middle.down && p==mouse.middle.last_down_pos) {
						log("middle mouse button click");
						mouse.middle.down=false;
						middlemouseclick(p);
					}
					mouse.middle.down=false;
				}
				break;
			case GLUT_RIGHT_BUTTON:
				if (state==GLUT_DOWN) {
					log("right mouse button down");
					mouse.right.down=true;
					mouse.right.last_down_pos=p;
					mouse.right.last_move_pos=p;
					rightmousedown(p);
				} else if (state==GLUT_UP) {
					log("right mouse button up");
					rightmouseup(p, mouse.right.last_down_pos);
					if (mouse.right.down && p==mouse.right.last_down_pos) {
						log("right mouse button click");
						mouse.right.down=false;
						rightmouseclick(p);
					}
					mouse.right.down=false;
				}
				break;
			// case GLUT_WHEEL_UP:
				// log("GLUT_WHEEL_UP");
				// break;
			// case GLUT_WHEEL_DOWN:
				// log("GLUT_WHEEL_UP");
				// break;
			// default:
				// log("mouseclick: UNKNOWN_BUTTON");
				// break;
		}
		
		
	}

	virtual void leftmousedown(const point& down) {}
	virtual void leftmouseup(const point& up, const point& down) {}
	virtual void leftmouseclick(const point& p) {}

	virtual void middlemousedown(const point& down) {}
	virtual void middlemouseup(const point& up, const point& down) {}
	virtual void middlemouseclick(const point& p) {}
	
	virtual void rightmousedown(const point& down) {}
	virtual void rightmouseup(const point& up, const point& down) {}
	virtual void rightmouseclick(const point& p) {}

	void mousemove(int x, int y) {
		transform2worldcord(x, y);
		point p(x, y);
		if (mouse.left.down) {
			leftmousemove(p, mouse.left.last_move_pos, mouse.left.last_down_pos);
			mouse.left.last_move_pos=p;
		} else if (mouse.middle.down) {
			middlemousemove(p, mouse.middle.last_move_pos, mouse.middle.last_down_pos);
			mouse.middle.last_move_pos=p;
		} else if (mouse.right.down) {
			rightmousemove(p, mouse.right.last_move_pos, mouse.right.last_down_pos);
			mouse.right.last_move_pos=p;
		} else {
			// mousehover(p);
		}
	}
	
	virtual void leftmousemove(const point& p, const point& last, const point& down) {}
	virtual void middlemousemove(const point& p, const point& last, const point& down) {}
	virtual void rightmousemove(const point& p, const point& last, const point& down) {}
	virtual void mousehover(const point& p) {}
	
	void specialkey(int key, int x, int y ) {
		transform2worldcord(x, y);
		keys.set_pressed(key);
		log("on (%d, %d) specialkey %d", x, y, key);
		
		color* p=const_cast<color*>(&pal.red);
		color* end=const_cast<color*>(&pal.grass);
		
		switch ( key ) {
			case GLUT_KEY_F1:
				for (; (*p)!=win.bgcolor && p!=end; ++p);
				if (p==end) win.bgcolor=pal.red;
				else win.bgcolor=*(p+1);
				log("F1");
				background(win.bgcolor);
				refresh();
				break;
			case GLUT_KEY_F2:
				log("F2"); f2pressed(); break;
			case GLUT_KEY_F3:
				log("F3"); f3pressed(); break;
			case GLUT_KEY_F4:
				log("F4"); f4pressed(); break;
			case GLUT_KEY_F5:
				log("F5"); f5pressed(); break;
			case GLUT_KEY_F6:
				log("F6"); f6pressed(); break;
			case GLUT_KEY_F7: 
				log("F7"); break;
			case GLUT_KEY_F8: 
				log("F8"); break;
			case GLUT_KEY_F9: 
				log("F9"); break;
			case GLUT_KEY_F10: 
				log("F10"); break;
			case GLUT_KEY_F11: 
				log("F11"); break;
			case GLUT_KEY_F12: 
				log("F12"); break;
			case GLUT_KEY_UP: 
				log("GLUT_KEY_UP"); break;
			case GLUT_KEY_DOWN: 
				log("GLUT_KEY_DOWN"); break;
			case GLUT_KEY_LEFT: 
				persp.angle-=0.1;
				log("new persp angle=%f", persp.angle);
				reshape(win.width, win.height);
				refresh();
				log("GLUT_KEY_LEFT"); break;
			case GLUT_KEY_RIGHT:
				persp.angle+=0.1;
				log("new persp angle=%f", persp.angle);
				reshape(win.width, win.height);
				refresh();
				log("GLUT_KEY_RIGHT"); break;
			case GLUT_KEY_PAGE_UP: 
				log("PAGE UP"); break;
			case GLUT_KEY_PAGE_DOWN: 
				log("PAGE DOWN"); break;
			case GLUT_KEY_HOME: 
				log("HOME"); break;
			case GLUT_KEY_END: 
				log("END"); break;
			case GLUT_KEY_INSERT: 
				log("GLUT_KEY_INSERT"); break;
			case 127: 
				log("delete"); break;
			case 27: 
				log("escape"); break;
			default : 
				log("UNKOWN KEY"); 
		}
	}
	
	virtual void f2pressed() {}
	virtual void f3pressed() {}
	virtual void f4pressed() {}
	virtual void f5pressed() {}
	virtual void f6pressed() {}
	
	virtual void idlefunc() {
	}
} *gl=NULL;

static void gl_display() { gl->display(); }
static void gl_menuclick(int value) { gl->menuclick(value); }
static void gl_idlefunc() { gl->idlefunc(); }
static void gl_reshape(int w,  int h) { gl->reshape(w, h); }
static void gl_specialkey(int key, int x, int y ) { gl->specialkey(key, x, y); }
static void gl_mouseclick(int button, int state, int x, int y) { gl->mouseclick(button, state, x, y); }
static void gl_mousemove(int x, int y) { gl->mousemove(x, y); }
static void gl_keyboard(unsigned char key, int x, int y) { gl->keyboard(key, x, y); }

template<class type>
void gl_main() {
	type tmp;
	gl=&tmp;
	gl->mainloop();
}

}	//end of namespace gl

#endif /* OPENGL_HPP_BY_JADESOUL */
