#include <qt\qapplication.h>
#include <Qt\qwidget.h>
#include "GlWindow.h"

int main(int argc, char* argv[])
{
	QApplication application(argc, argv);
	GlWindow myWindow;
	
	myWindow.show();
	return application.exec();
}

