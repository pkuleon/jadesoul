#include "widget.h"
#include "ui_widget.h"
#include <QTextStream>
#include <QPainter>

#define log(...) {QString msg;QTextStream(&msg) << #__VA_ARGS__ <<" = "<< __VA_ARGS__ ;qDebug(msg.toAscii());}do{}while(0)

int a=0;

Widget::Widget(QWidget *parent) :
		QWidget(parent),
		ui(new Ui::Widget)
{
	ui->setupUi(this);

	log(sizeof(ui));
	log(sizeof(*ui));
	log(sizeof(*this));



}

void Widget::paintEvent(QPaintEvent * /* event */)
{
	log("in paint event"<< a++);
	QPainter painter(this);
	painter.setPen(Qt::blue);
	painter.setPen(QPen(QBrush(), 2));
	painter.setBrush(QBrush(Qt::red));
	painter.drawLine(0, 0, 200, 100);
}

Widget::~Widget()
{
	delete ui;
}
