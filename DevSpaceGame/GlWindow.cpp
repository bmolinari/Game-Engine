#include <gl\glew.h>
#include <cassert>
#include "GlWindow.h"

#include <iostream>



void GlWindow::initializeGL()
{
	GLenum errorCode = glewInit();
	assert(errorCode == 0);

	glGenBuffers(1, &vertexBufferID);
	glBindBuffer(GL_ARRAY_BUFFER, vertexBufferID);

	float verts[] =
	{
		+0.0f, +0.1f,
		-0.1f, -0.1f,
		+0.1f, -0.1f,
	};

	glBufferData(GL_ARRAY_BUFFER, sizeof(verts),
		verts, GL_STATIC_DRAW);

	connect(&timer, SIGNAL(timeout()), this, SLOT(myUpdate()));
	timer.start(0);
}

void GlWindow::paintGL()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, 0, 0);
	glDrawArrays(GL_TRIANGLES, 0, 3);
}

void GlWindow::myUpdate()
{
	std::cout << "Test" << std::endl;
}