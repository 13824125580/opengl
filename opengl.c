#include <GL/glut.h>
void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glOrtho(-5, 5, -5, 5, 5, 15);
    glMatrixMode(GL_MODELVIEW);
    gluLookAt(0, 0, 10, 0, 0, 0, 0, 1, 0);
    return;
}
 
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0, 0);
    glutWireTeapot(3);
    glFlush();
    return;
}

void display_dot(void)
{
    glClear( GL_COLOR_BUFFER_BIT );
    glBegin(GL_POINTS);
    		glVertex2f( 0.0f, 0.0f );
    glEnd();
    glFinish();
}

void display_line(void)
{
	glClear( GL_COLOR_BUFFER_BIT);
	glBegin( GL_LINES);
		glVertex2f( 0.0f, 0.0f);
		glVertex2f( -0.3f, 0.1f);
		glVertex2f( 0.1f, 0.3f);
		glVertex2f( 0.4f, 0.6f);
		glVertex2f( 0.4f, 0.3f);
		glVertex2f( 0.2f, 0.1f);
	glEnd();
	glFinish();
}

void display_poly(void)
{
	glClear( GL_COLOR_BUFFER_BIT);
	glBegin( GL_LINE_LOOP);
		glVertex2f( 0.0f, 0.0f);
		glVertex2f( -0.3f, 0.1f);
		glVertex2f( 0.1f, 0.3f);
		glVertex2f( 0.4f, 0.6f);
		/*glVertex2f( -0.6f, 0.9f);*/
	glEnd();
	glFinish();
}
 
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(300, 300);
    glutCreateWindow("OpenGL 3D View");
    init();
    /*glutDisplayFunc(display);*/
    /*glutDisplayFunc(display_dot);*/
    /*glutDisplayFunc(display_line);*/
    glutDisplayFunc(display_poly);
    glutMainLoop();
    return 0;
}
