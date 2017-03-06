#ifndef GAME_GL_WINDOW_H
#define GAME_GL_WINDOW_H
#include <QtOpenGL\qglwidget>

class GlWindow : public QGLWidget
{
	GLuint vertexBufferID;
protected:
	void initializeGL();
	void paintGL();
};

#endif