#include "VortexClientV11.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	VortexClientV11 w;
	w.show();
	return a.exec();
}
