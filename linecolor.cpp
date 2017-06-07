#include<GL/glut.h>
#include<GL/glu.h>
#include<GL/gl.h>
void display(void);
void init(void);
int main(int argc,char**argv)
{ glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutCreateWindow("500038046");
  glutInitWindowPosition(10,10);
  glutInitWindowSize(760,540);
  init();
  glutDisplayFunc(display);
  glutMainLoop();
  return 0;
}
void init(void)
{ glClearColor(1.0,1.0,1.0,1.0);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
}
void display(void)
{glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(0,0,0);
 glBegin(GL_LINES);
 glColor3f(1,0,0);
 glVertex2f(0,0.8);
 glColor3f(0,1,0);
 glVertex2f(-0.4,0.4);
 glColor3f(0,0,1);
 glVertex2f(-0.4,-0.4);
 glColor3f(1,1,0);
 glVertex2f(0,-0.8);
 glColor3f(1,0,1);
 glVertex2f(0.4,-0.4);
 glColor3f(0,1,1);
 glVertex2f(0.4,0.4);

 glEnd(); 
 glFlush();
}

