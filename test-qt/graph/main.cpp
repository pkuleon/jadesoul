#include <QtGui/QApplication>
#include "widget.h"

#include <vector>
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Widget w;
	w.show();
	return a.exec();
}
