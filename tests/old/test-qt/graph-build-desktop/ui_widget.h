/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Tue Jul 5 12:51:43 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *btnA;
    QPushButton *btnB;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        btnA = new QPushButton(Widget);
        btnA->setObjectName(QString::fromUtf8("btnA"));
        btnA->setGeometry(QRect(40, 40, 75, 23));
        btnB = new QPushButton(Widget);
        btnB->setObjectName(QString::fromUtf8("btnB"));
        btnB->setGeometry(QRect(120, 190, 75, 23));

        retranslateUi(Widget);
        QObject::connect(btnA, SIGNAL(clicked()), Widget, SLOT(update()));
        QObject::connect(btnB, SIGNAL(clicked()), Widget, SLOT(update()));
        QObject::connect(Widget, SIGNAL(mousemove()), Widget, SLOT(onmousemove()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        btnA->setText(QApplication::translate("Widget", "PushButton", 0, QApplication::UnicodeUTF8));
        btnB->setText(QApplication::translate("Widget", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
