/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *clear;
    QPushButton *modulo;
    QPushButton *plusMinus;
    QPushButton *divide;
    QPushButton *eight;
    QPushButton *seven;
    QPushButton *nine;
    QPushButton *multiply;
    QPushButton *five;
    QPushButton *four;
    QPushButton *six;
    QPushButton *subtract;
    QPushButton *two;
    QPushButton *one;
    QPushButton *three;
    QPushButton *add;
    QPushButton *equal;
    QPushButton *dot;
    QPushButton *zero;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(241, 361);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 30, 241, 61));
        QFont font;
        font.setPointSize(19);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(0, 90, 61, 61));
        clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        modulo = new QPushButton(centralwidget);
        modulo->setObjectName("modulo");
        modulo->setGeometry(QRect(120, 90, 61, 61));
        modulo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        plusMinus = new QPushButton(centralwidget);
        plusMinus->setObjectName("plusMinus");
        plusMinus->setGeometry(QRect(60, 90, 61, 61));
        plusMinus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        divide = new QPushButton(centralwidget);
        divide->setObjectName("divide");
        divide->setGeometry(QRect(180, 90, 61, 61));
        divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        eight = new QPushButton(centralwidget);
        eight->setObjectName("eight");
        eight->setGeometry(QRect(60, 150, 61, 61));
        eight->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        seven = new QPushButton(centralwidget);
        seven->setObjectName("seven");
        seven->setGeometry(QRect(0, 150, 61, 61));
        seven->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        nine = new QPushButton(centralwidget);
        nine->setObjectName("nine");
        nine->setGeometry(QRect(120, 150, 61, 61));
        nine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        multiply = new QPushButton(centralwidget);
        multiply->setObjectName("multiply");
        multiply->setGeometry(QRect(180, 150, 61, 61));
        multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        five = new QPushButton(centralwidget);
        five->setObjectName("five");
        five->setGeometry(QRect(60, 210, 61, 51));
        five->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        four = new QPushButton(centralwidget);
        four->setObjectName("four");
        four->setGeometry(QRect(0, 210, 61, 51));
        four->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        six = new QPushButton(centralwidget);
        six->setObjectName("six");
        six->setGeometry(QRect(120, 210, 61, 51));
        six->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        subtract = new QPushButton(centralwidget);
        subtract->setObjectName("subtract");
        subtract->setGeometry(QRect(180, 210, 61, 51));
        subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        two = new QPushButton(centralwidget);
        two->setObjectName("two");
        two->setGeometry(QRect(60, 260, 61, 51));
        two->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        one = new QPushButton(centralwidget);
        one->setObjectName("one");
        one->setGeometry(QRect(0, 260, 61, 51));
        one->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        three = new QPushButton(centralwidget);
        three->setObjectName("three");
        three->setGeometry(QRect(120, 260, 61, 51));
        three->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        add = new QPushButton(centralwidget);
        add->setObjectName("add");
        add->setGeometry(QRect(180, 260, 61, 51));
        add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        equal = new QPushButton(centralwidget);
        equal->setObjectName("equal");
        equal->setGeometry(QRect(180, 310, 61, 51));
        equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        dot = new QPushButton(centralwidget);
        dot->setObjectName("dot");
        dot->setGeometry(QRect(120, 310, 61, 51));
        dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        zero = new QPushButton(centralwidget);
        zero->setObjectName("zero");
        zero->setGeometry(QRect(0, 310, 121, 51));
        zero->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        modulo->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        plusMinus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        divide->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        multiply->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        subtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
