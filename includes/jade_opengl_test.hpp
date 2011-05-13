#ifndef OPENGLTEST_HPP
#define OPENGLTEST_HPP


#include <GL/glu.h>
#include <GL/glut.h>
#include <string>
#include <assert.h>
#include <cmath>
#include <iostream>

namespace opengltest {

using namespace std;
double r=0;

int old_x, old_y, spin_x, spin_y,base_x=0, base_y=0;
int old_r_x, old_r_y, spin_r_x, spin_r_y,base_r_x=0, base_r_y=0;

int mouse_type=0;
GLfloat light_position[] = {1.0, 1.0, 1.0, 0.0};
GLfloat mat_specular[] = {1.0, 1.0, 0.0, 1.0};
GLfloat mat_shininess[] = {50.0};
GLfloat white_light[] = {1.0, 1.0, 1.0, 1.0};
GLfloat lmodel_ambient[] = {0.1, 0.1, 0.1, 1.0};

static void draw();
static void idlefunc();
static void init();
void keyboard(unsigned char, int, int);

static void display() {
	glClear( GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
	glLoadIdentity();
	glRotatef(spin_r_y, 1.0, 0.0, 0.0);
	glRotatef(spin_r_x, 0.0, 1.0, 0.0);
	glRotatef(r, 0.0, 1.0, 0.0);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glLoadIdentity();
	glRotatef(spin_y, 1.0, 0.0, 0.0);
	glRotatef(spin_x, 0.0, 1.0, 0.0);
	draw();
	glutSwapBuffers();
}

static void reshape( int w, int h ) {
	glViewport( 0, 0, w, h );
	glMatrixMode( GL_PROJECTION );
	glLoadIdentity();
	/* if(w <= h)
	        glOrtho(-1.5, 1.5, -1.5*(GLfloat)h/(GLfloat)w, 1.5*(GLfloat)h/(GLfloat)w, -10.0, 10.0);
	else
	        glOrtho(-1.5*(GLfloat)w/(GLfloat)h, 1.5*(GLfloat)w/(GLfloat)h, -1.5, 1.5, -10.0, 10.0); */
	gluPerspective(45.0, (GLfloat)w/(GLfloat)h, 1, 20);
	gluLookAt(0.0, 0.0, 10.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
	glMatrixMode( GL_MODELVIEW );
	glLoadIdentity();
}

static void screenmouse(int button, int state, int x, int y) {
	if (button==GLUT_LEFT_BUTTON && state==GLUT_DOWN) {
		old_x = x;
		old_y = y;
		mouse_type = 1;
	} else if (button==GLUT_LEFT_BUTTON && state==GLUT_UP) {
		base_x = spin_x;
		base_y = spin_y;
		mouse_type = 0;
	} else if (button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN) {
		old_r_x = x;
		old_r_y = y;
		mouse_type = 2;
	} else if (button==GLUT_RIGHT_BUTTON && state==GLUT_UP) {
		base_r_x = spin_r_x;
		base_r_y = spin_r_y;
		mouse_type = 0;
	}
}

void screenmotion(int x, int y) {
	if (mouse_type == 1) {
		spin_x = base_x + x - old_x;
		spin_y = base_y + y - old_y;
	} else if (mouse_type == 2) {
		spin_r_x = base_r_x + x - old_r_x;
		spin_r_y = base_r_y + y - old_r_y;
	}
	glutPostRedisplay();
}

static void init0() {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glShadeModel(GL_SMOOTH);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, white_light);
	glLightfv(GL_LIGHT0, GL_SPECULAR, white_light);
	glLightfv(GL_LIGHT0, GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_DEPTH_TEST);
	init();
}

int opengltest_main( int argc, char** argv ) {
	glutInit( &argc, argv );
	//glutInitDisplayMode( GLUT_RGB | GLUT_DOUBLE );
	glutInitDisplayMode( GLUT_RGB | GLUT_DOUBLE | GLUT_MULTISAMPLE);
	glutInitWindowSize( 500, 500 );
	glutInitWindowPosition( 100, 100 );
	glutCreateWindow( "Jadesoul's Program" );
	init0();
	glutDisplayFunc( display );
	glutReshapeFunc( reshape );
	glutKeyboardFunc ( keyboard );
	glutIdleFunc(idlefunc);
	glutMotionFunc(screenmotion);
	glutMouseFunc(screenmouse);
	glutMainLoop();
	return 0;
}


float white[]={1.0, 1.0, 1.0};
float black[]={0.0, 0.0, 0.0};
float red[]={1.0, 0.0, 0.0};
float green[]={0.0, 1.0, 0.0};
float blue[]={0.0, 0.0, 1.0};
float yellow[]={1.0, 1.0, 0.0};
float purple[]={1.0, 0.0, 1.0};
float cyan[]={0.0, 1.0, 1.0};

double l=2.0, ll=2.0;


static void draw() {
	glPushMatrix();					//front side
	glTranslatef(0.0, 0.0, ll);
	glBegin(GL_QUADS);
	glColor3fv(white);
	glVertex2f(l, l);
	glColor3fv(cyan);
	glVertex2f(-l, l);
	glColor3fv(blue);
	glVertex2f(-l, -l);
	glColor3fv(purple);
	glVertex2f(l, -l);
	glEnd();
	glPopMatrix();

	glPushMatrix();					//back side
	glTranslatef(0.0, 0.0, -ll);
	glRotatef(180.0, 0.0, 1.0, 0.0);
	glBegin(GL_QUADS);
	glColor3fv(green);
	glVertex2f(l, l);
	glColor3fv(yellow);
	glVertex2f(-l, l);
	glColor3fv(red);
	glVertex2f(-l, -l);
	glColor3fv(black);
	glVertex2f(l, -l);
	glEnd();
	glPopMatrix();

	glPushMatrix();					//right side
	glTranslatef(ll, 0.0, 0.0);
	glRotatef(90.0, 0.0, 1.0, 0.0);
	glBegin(GL_QUADS);
	glColor3fv(yellow);
	glVertex2f(l, l);
	glColor3fv(white);
	glVertex2f(-l, l);
	glColor3fv(purple);
	glVertex2f(-l, -l);
	glColor3fv(red);
	glVertex2f(l, -l);
	glEnd();
	glPopMatrix();

	glPushMatrix();					//left side
	glTranslatef(-ll, 0.0, 0.0);
	glRotatef(270.0, 0.0, 1.0, 0.0);
	glBegin(GL_QUADS);
	glColor3fv(cyan);
	glVertex2f(l, l);
	glColor3fv(green);
	glVertex2f(-l, l);
	glColor3fv(black);
	glVertex2f(-l, -l);
	glColor3fv(blue);
	glVertex2f(l, -l);
	glEnd();
	glPopMatrix();

	glPushMatrix();					//up side
	glTranslatef(0.0, ll,  0);
	glRotatef(270.0, 1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glColor3fv(yellow);
	glVertex2f(l, l);
	glColor3fv(green);
	glVertex2f(-l, l);
	glColor3fv(cyan);
	glVertex2f(-l, -l);
	glColor3fv(white);
	glVertex2f(l, -l);
	glEnd();
	glPopMatrix();

	glPushMatrix();					//bottom side
	glTranslatef(0.0, -ll,  0);
	glRotatef(90.0, 1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glColor3fv(purple);
	glVertex2f(l, l);
	glColor3fv(blue);
	glVertex2f(-l, l);
	glColor3fv(black);
	glVertex2f(-l, -l);
	glColor3fv(red);
	glVertex2f(l, -l);
	glEnd();
	glPopMatrix();
}
static void init() {
	glClearColor(0.1, 0.1, 0.1, 0.0);
	glDisable(GL_LIGHTING);

	// glEnable(GL_LINE_SMOOTH);
	// glEnable(GL_BLEND);
	// glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	// glHint(GL_LINE_SMOOTH_HINT, GL_DONT_CARE);
	// glLineWidth(2);
}

static void idlefunc() {
	spin_r_x+=1;
	spin_r_y+=1;
}

void keyboard ( unsigned char key, int x, int y) {
	switch (key) {
	case 27:
	case ' ':
		exit ( 0 );
	}
	glutPostRedisplay();
}

}

#endif // OPENGLTEST_HPP
