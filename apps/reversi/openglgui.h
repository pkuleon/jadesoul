int numChessLine=BORDER_LEN;

char temps[50];
static char* stime=temps;
static const char* fmt="%Y年%m月%d日 %H时%M分%S秒";
float l=2.0/numChessLine;

int winWidth=600;
int winHeight=600;
float perWidth=float(winWidth)/numChessLine;
float perHeight=float(winHeight)/numChessLine;

HANDLE handle;


struct color{
	color(float R=1, float G=1, float B=1):r(R), g(G), b(B){}
	float r, g, b;
	friend ostream& operator << (ostream& os, const color& c){
		return os<<"[color : r="<<c.r<<" g="<<c.g<<" b="<<c.b<<"]"<<endl;
	}
};


struct palette{
	const color red, green, blue, yellow, white, black, gray, pink, cyan, orange, grass;
	palette(): red(1,0,0), green(0, 1, 0), blue(0, 0, 1), yellow(1, 1, 0), white(1, 1, 1),black(0, 0, 0), gray(0.2, 0.2, 0.2), pink(1, 0, 1), cyan(0, 1, 1), orange(1, 0.5, 0), grass(0, 1, 0.5){}
} pal;

enum MenuItem {
	MI_A ,
	MI_B ,
	MI_C ,
	MI_FULL_SCREEN ,
	MI_EXIT_FULL_SCREEN ,
	MI_QUIT
};




void showTime(){
	time_t t=time(NULL);
	strftime(stime,50,fmt,localtime(&t));
	cout<<endl<<stime<<" : ";
}

void drawRec(float x1, float y1, float x2, float y2, color c){
	glBegin(GL_QUADS);
		glColor3f(c.r, c.g, c.b);
		glVertex2f(x2, y2);
		glVertex2f(x1, y2);
		glVertex2f(x1, y1);
		glVertex2f(x2, y1);
	glEnd();
}

void drawCircle(float x, float y, float r, color c) {
	static const int numCut=36;//cut a circle from its center into numCut parts
	static const float angle=360.0*3.1415926/180/numCut;
	int i;
	glBegin(GL_POLYGON);
		glColor3f(c.r, c.g, c.b);
		for (i=0; i<numCut; ++i) {
			glVertex2f(r*cos(i*angle)+x , r*sin(i*angle)+y);
		}
	glEnd();
}

void drawMap(){
	glLoadIdentity();
	glTranslatef(-1, -1, 0);
	int i, j;
	for (i=0; i<numChessLine; i++)
		for (j=0; j<numChessLine; j++)
			if((i + j) % 2 == 0)drawRec(j * l, i * l, (j + 1) * l, (i + 1) * l, color(0.7, 0.7, 0.2));
}


void drawChessMan(){
	if (!theGame)
		return;
	glLoadIdentity();
	glTranslatef(-1, -1, 0);
	int i, j;
	Grid * t;
	for (i=0; i<numChessLine; i++)
		for (j=0; j<numChessLine; j++){
			t=theGame->map[i][j];
			if (t->state!=EMPTY){
				drawCircle(j * l+0.5*l, (numChessLine - 1 - i) * l+0.5*l, l/2.1, t->state==BLACK ? pal.black : pal.white);
			}
		}
}

void drawAvails(){
	if (!theGame || !theGame->nowPlayer)
		return;
	
	glLoadIdentity();
	glTranslatef(-1, -1, 0);
	float gx, gy, dl;
	gridset& avails=theGame->nowPlayer->getAvails();
	bool isBlack=(theGame->nowPlayer->getColor()==BLACK);
	Grid * t;
	gridset::iterator it, end=avails.end();
	for (it=avails.begin(); it!=end; ++it){
		t=*it;
		gx=l*(t->y-1);
		gy=l*(8-(t->x));
		dl=0.1*l;
		if (isBlack)
			glColor3f(0.0, 0.0, 0.0);
			//glColor3f(1.0, 0.0, 0.0);
		else
			glColor3f(1.0, 1.0, 1.0);
			//glColor3f(0.0, 1.0, 0.0);
		glLineWidth(2.0);
		glBegin(GL_LINE_STRIP);
			glVertex2f(gx+dl, gy+2*dl);
			glVertex2f(gx+dl, gy+dl);
			glVertex2f(gx+2*dl, gy+dl);
		glEnd();
		glBegin(GL_LINE_STRIP);
			glVertex2f(gx+l-2*dl, gy+l-dl);
			glVertex2f(gx+l-dl, gy+l-dl);
			glVertex2f(gx+l-dl, gy+l-2*dl);
		glEnd();
		glBegin(GL_LINE_STRIP);
			glVertex2f(gx+2*dl, gy+l-dl);
			glVertex2f(gx+dl, gy+l-dl);
			glVertex2f(gx+dl, gy+l-2*dl);
		glEnd();
		glBegin(GL_LINE_STRIP);
			glVertex2f(gx+l-2*dl, gy+dl);
			glVertex2f(gx+l-dl, gy+dl);
			glVertex2f(gx+l-dl, gy+2*dl);
		glEnd();
		glLineWidth(1.0);
	}
}

void display() {
	glClear( GL_COLOR_BUFFER_BIT );
	glLoadIdentity();
	glShadeModel( GL_SMOOTH );
	
	drawMap();
	drawChessMan();
	drawAvails();
	glLoadIdentity();
	
	glFlush();
	glutSwapBuffers();
	assert( glGetError() == GL_NO_ERROR );
}


static void reshape( int w, int h )
{	
	winWidth=w;
	winHeight=h;
	perWidth=float(winWidth)/numChessLine;
	perHeight=float(winHeight)/numChessLine;
	
	glViewport( 0, 0, w, h );
	glMatrixMode( GL_PROJECTION );
	glLoadIdentity();
	gluPerspective( 50., (double)w/(double)h, 1., 10. );
	assert( glGetError() == GL_NO_ERROR );
}

static void mainmenu( int value )
{
	showTime();
	if (value == MI_QUIT){
		cout<<"退出程序"<<endl;
		exit(0);
	}else if (value == MI_A){
		cout<<"glutPushWindow"<<endl;
		glutPushWindow();
	}else if (value == MI_B){
		cout<<"b"<<endl;
	}else if (value == MI_C){
		cout<<"c"<<endl;
	}else if (value == MI_FULL_SCREEN){
		cout<<"切换到全屏"<<endl;
		glutFullScreen();
	}else if (value == MI_EXIT_FULL_SCREEN){
		cout<<"退出全屏"<<endl;
	}
}



void keyboard( unsigned char key, int x, int y) {
	showTime();
	cout<<"("<<x<<","<<y<<") ";
	switch (key) {
		case 27:
			exit (0);break;
		case 'a':
		case 'A':
			break;
		default:
			if (key<='z' && key>='a' || key<='Z' && key>='A' || key<='9' && key>='0'){
				cout<<char(key);
			}else{
				showTime();
				cout<<"字符码为 "<<static_cast<int>(key);
				glutPostRedisplay();
			}
	}
}


void mouseclick( int button, int state, int x, int y ){
	if (!theGame)
		return;
	showTime();
	//cout<<"button="<<button<<" state="<<state<<" x="<<x<<" y="<<y;
	cout<<"("<<x<<","<<y<<")";
	switch ( button ) {
		case GLUT_LEFT_BUTTON: 
			if ( state == GLUT_DOWN ) {
				cout<<"左键被按下";
			}else if ( state == GLUT_UP ) {
				float t=winWidth/numChessLine;
				int gx=static_cast<int>(x/perWidth), gy=static_cast<int>(y/perHeight);
				cout<<"左键被释放"<< gx <<","<< gy;
				
				//if(gameover)gameOver();
				
				if(gx>=0 && gx<numChessLine && gy>=0 && gx<numChessLine){
					cout<<"坐标合法 ";
					Grid* t=theGame->map[gy][gx];
					int state=t->state;
					if (state==EMPTY) {
						theGame->mx=gy+1;
						theGame->my=gx+1;
						cout<<"可以下子"<<endl;
					} else if (state==BLACK) {
						cout<<"已经有黑子了";
					} else if (state==WHITE) {
						cout<<"已经有白子了";
					}
					glutPostRedisplay();
				}
			}
			break;
		case GLUT_MIDDLE_BUTTON: 
			if ( state == GLUT_DOWN ) {
				cout<<"中键被按下";
			}else if ( state == GLUT_UP ) {
				cout<<"中键被释放";
			}
			break;
		case GLUT_RIGHT_BUTTON: 
			if ( state == GLUT_DOWN ) {
				cout<<"右键被按下";
			}else if ( state == GLUT_UP ) {
				cout<<"右键被释放";
			}
			break;
	}
}


static void init()
{
	glClearColor(0.4, 0.4, 0, 0.0);
	glMatrixMode(GL_PROJECTION);
	//gluOrtho2D(-10.0, 10.0, -10.0, 10.0);

	glutDisplayFunc( display );
	glutReshapeFunc( reshape );
	glutKeyboardFunc( keyboard );
	glutMouseFunc( mouseclick );
	int mainMenu = glutCreateMenu( mainmenu );
	glutAddMenuEntry( "隐藏窗口", MI_A );
	glutAddMenuEntry( "显示B", MI_B );
	glutAddMenuEntry( "显示C", MI_C );
	glutAddMenuEntry( "全屏", MI_FULL_SCREEN );
	glutAddMenuEntry( "退出全屏", MI_EXIT_FULL_SCREEN );
	glutAddMenuEntry( "退出程序", MI_QUIT );
	glutAttachMenu( GLUT_RIGHT_BUTTON );
}

int main( int argc, char** argv )
{
	
	#ifdef GUI
	if (!GUI)
		return mainConsole((LPVOID)0);
	#else
		return mainConsole((LPVOID)0);
	#endif
	
	glutInit( &argc, argv );
	glutInitDisplayMode( GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH );
	glutInitWindowSize( winWidth, winHeight );
	glutCreateWindow( argv[0] );
	init();
	handle=CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)mainConsole,(LPVOID)0,0,0); 
	glutMainLoop();
	CloseHandle(handle); 
	return 0;
}


