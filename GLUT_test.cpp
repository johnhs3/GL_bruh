#include <GL/glut.h>
#include <stdio.h>
#include <stdlib.h>

void render(void);

int main(int argc, char** argv){
	glutInit(&argc, argv);				//????
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);	//????
	glutInitWindowPosition(100,100);		//sets window start pos
	glutInitWindowSize(640,480);			//sets window size 
	glutCreateWindow("Color Interpolated Triangle");
	
	glutDisplayFunc(render);
	
	glutMainLoop();
	
}


void render(void){
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	//--Using Immediate Mode here... unfortunately this is deprecated.
	//Find an alternative later!!!
	glBegin(GL_TRIANGLES);
		glColor3f(1,0,0);
		glVertex2f(-0.5,-0.5);
		glColor3f(0,1,0);
		glVertex2f(0.5,-0.5);
		glColor3f(0,0,1);
		glVertex2f(0.0,0.5);
	glEnd();
	
	
	glutSwapBuffers();
}
