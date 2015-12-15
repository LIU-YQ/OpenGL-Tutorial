#include "../CommonLib/common.h"
#include <stdio.h>
#include <GL/glew.h>
#include <GL/freeglut.h>

static void 
RenderSceneCB()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glutSwapBuffers();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("tutorial 01");


	GLenum res = glewInit();
	if (GLEW_OK != res)
	{
		fprintf(stderr, "Error:%s", glewGetErrorString(res));
		return 1;
	}

	glutDisplayFunc(RenderSceneCB);
	glutIdleFunc(RenderSceneCB);

	glClearColor(0.0f, 1.0f, 0.0f, 0.0f);
	glutMainLoop();
	 
	return 0;
}