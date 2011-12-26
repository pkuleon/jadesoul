/**
 * File: test.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-06-25 01:09:02.953000
 * Written In: Peking University, beijing, China
 */

#define debug
#include "jade.hpp"
#include "opengl.hpp"

void init() {
	glClearColor(0.4, 0.4, 0, 0.0);

	// glShadeModel(GL_SMOOTH);
	// glMatrixMode(GL_PROJECTION);
	// glLoadIdentity();
	// gluPerspective(45.0, float(w)/float(h), 0.1, 100.0);
	// glMatrixMode(GL_MODELVIEW);
	
	// glMatrixMode(GL_PROJECTION);
	// gluOrtho2D(1.0, 600, 1.0, 600);
}

void display() {
	log("in opengl display");
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	glShadeModel(GL_SMOOTH);
	
	
	glTranslatef(-400, -300, -1000);
	pen_t p1(pal.white, 1);
	p1.draw(rect(point(0, 0), point(800, 600)));
	
	pen_t p(pal.red, 2);
	
	p.draw(rect(point(400-10, 300-10), point(400+10, 300+10)));
	p.draw(rect(point(400-10, 300-10), point(400+10, 300+10)));
	p.draw(rect(point(0, 0), point(100, 100)));
	
	p.draw(line(point(0, 0), point(800, 600)));
	p.draw(line(point(0, 150), point(800, 450)));
	// glLoadIdentity();
	glFlush();
	glutSwapBuffers();
}

void reshape( int w, int h ) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, float(w)/float(h), 0.0, 10000.0);
	glMatrixMode(GL_MODELVIEW);
	glClearColor(0.4, 0.4, 0, 0.0);
	// gluOrtho2D(0, w, 0, h);
	log("after reshape: (%d, %d)", w, h);
}



int main () {
	int argc=0;
	char * argv[]={""};
	glutInit(&argc, argv);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(1000, 50);
	glutCreateWindow("hi");
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	// glutKeyboardFunc(gl_keyboard);
	// glutMouseFunc(gl_mouseclick);
	// glutMotionFunc(gl_mousemove);
	// glutSpecialFunc(gl_specialkey);
	// glutIdleFunc(gl_idlefunc);
	
	glutMainLoop();
}
