#ifndef GAME_GL_WINDOW_H
#define GAME_GL_WINDOW_H
#include <QtOpenGL\qglwidget>
#include <Qt\qtimer.h>

class GlWindow : public QGLWidget
{
	Q_OBJECT

	GLuint vertexBufferID;
	QTimer timer;
protected:
	void initializeGL();
	void paintGL();
private slots:
	void myUpdate();

};

#endif