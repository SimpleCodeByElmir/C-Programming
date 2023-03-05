/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *string_line;
    QPushButton *clear;
    QPushButton *backspace;
    QPushButton *brace_open;
    QPushButton *brace_close;
    QPushButton *power;
    QPushButton *sin;
    QPushButton *one;
    QPushButton *two;
    QPushButton *three;
    QPushButton *divide;
    QPushButton *mult;
    QPushButton *cos;
    QPushButton *four;
    QPushButton *five;
    QPushButton *six;
    QPushButton *minus;
    QPushButton *plus;
    QPushButton *tan;
    QPushButton *seven;
    QPushButton *eight;
    QPushButton *nine;
    QPushButton *sqrt;
    QPushButton *ln;
    QPushButton *asin;
    QPushButton *dot;
    QPushButton *zero;
    QPushButton *equals;
    QPushButton *mod;
    QPushButton *log;
    QPushButton *acos;
    QPushButton *graph;
    QPushButton *setx;
    QPushButton *justx;
    QPushButton *atan;
    QPushButton *showhide;
    QLabel *info_line;
    QCustomPlot *widget;
    QLineEdit *lineEdit_x_max;
    QLineEdit *lineEdit_x_min;
    QLineEdit *lineEdit_y_max;
    QLineEdit *lineEdit_y_min;
    QLabel *last_exprsn;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(388, 430);
        MainWindow->setMinimumSize(QSize(388, 430));
        MainWindow->setMaximumSize(QSize(992, 485));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	color: white;\n"
"	background-color: rgb(39, 39, 39)\n"
"}"));
        MainWindow->setIconSize(QSize(24, 24));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        string_line = new QLineEdit(centralwidget);
        string_line->setObjectName(QString::fromUtf8("string_line"));
        string_line->setGeometry(QRect(11, 30, 366, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        string_line->setFont(font);
        string_line->setFocusPolicy(Qt::StrongFocus);
        string_line->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"	border: 2px solid rgb(96, 105, 93);\n"
"}"));
        string_line->setMaxLength(255);
        string_line->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        string_line->setClearButtonEnabled(false);
        clear = new QPushButton(centralwidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(11, 100, 61, 51));
        QFont font1;
        font1.setPointSize(12);
        clear->setFont(font1);
        clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        backspace = new QPushButton(centralwidget);
        backspace->setObjectName(QString::fromUtf8("backspace"));
        backspace->setGeometry(QRect(72, 100, 61, 51));
        backspace->setFont(font1);
        backspace->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        brace_open = new QPushButton(centralwidget);
        brace_open->setObjectName(QString::fromUtf8("brace_open"));
        brace_open->setGeometry(QRect(133, 100, 61, 51));
        brace_open->setFont(font1);
        brace_open->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        brace_close = new QPushButton(centralwidget);
        brace_close->setObjectName(QString::fromUtf8("brace_close"));
        brace_close->setGeometry(QRect(194, 100, 61, 51));
        brace_close->setFont(font1);
        brace_close->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        power = new QPushButton(centralwidget);
        power->setObjectName(QString::fromUtf8("power"));
        power->setGeometry(QRect(255, 100, 61, 51));
        power->setFont(font1);
        power->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        sin = new QPushButton(centralwidget);
        sin->setObjectName(QString::fromUtf8("sin"));
        sin->setGeometry(QRect(316, 100, 61, 51));
        sin->setFont(font1);
        sin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        one = new QPushButton(centralwidget);
        one->setObjectName(QString::fromUtf8("one"));
        one->setGeometry(QRect(11, 151, 61, 51));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        one->setFont(font2);
        one->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(154, 153, 150)\n"
"}"));
        two = new QPushButton(centralwidget);
        two->setObjectName(QString::fromUtf8("two"));
        two->setGeometry(QRect(72, 151, 61, 51));
        two->setFont(font2);
        two->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(154, 153, 150)\n"
"}"));
        three = new QPushButton(centralwidget);
        three->setObjectName(QString::fromUtf8("three"));
        three->setGeometry(QRect(133, 151, 61, 51));
        three->setFont(font2);
        three->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(154, 153, 150)\n"
"}"));
        divide = new QPushButton(centralwidget);
        divide->setObjectName(QString::fromUtf8("divide"));
        divide->setGeometry(QRect(194, 151, 61, 51));
        divide->setFont(font1);
        divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        mult = new QPushButton(centralwidget);
        mult->setObjectName(QString::fromUtf8("mult"));
        mult->setGeometry(QRect(255, 151, 61, 51));
        mult->setFont(font1);
        mult->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        cos = new QPushButton(centralwidget);
        cos->setObjectName(QString::fromUtf8("cos"));
        cos->setGeometry(QRect(316, 151, 61, 51));
        cos->setFont(font1);
        cos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        four = new QPushButton(centralwidget);
        four->setObjectName(QString::fromUtf8("four"));
        four->setGeometry(QRect(11, 202, 61, 51));
        four->setFont(font2);
        four->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(154, 153, 150)\n"
"}"));
        five = new QPushButton(centralwidget);
        five->setObjectName(QString::fromUtf8("five"));
        five->setGeometry(QRect(72, 202, 61, 51));
        five->setFont(font2);
        five->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(154, 153, 150)\n"
"}"));
        six = new QPushButton(centralwidget);
        six->setObjectName(QString::fromUtf8("six"));
        six->setGeometry(QRect(133, 202, 61, 51));
        six->setFont(font2);
        six->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(154, 153, 150)\n"
"}"));
        minus = new QPushButton(centralwidget);
        minus->setObjectName(QString::fromUtf8("minus"));
        minus->setGeometry(QRect(194, 202, 61, 51));
        minus->setFont(font1);
        minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        plus = new QPushButton(centralwidget);
        plus->setObjectName(QString::fromUtf8("plus"));
        plus->setGeometry(QRect(255, 202, 61, 51));
        plus->setFont(font1);
        plus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        tan = new QPushButton(centralwidget);
        tan->setObjectName(QString::fromUtf8("tan"));
        tan->setGeometry(QRect(316, 202, 61, 51));
        tan->setFont(font1);
        tan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        seven = new QPushButton(centralwidget);
        seven->setObjectName(QString::fromUtf8("seven"));
        seven->setGeometry(QRect(11, 253, 61, 51));
        seven->setFont(font2);
        seven->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(154, 153, 150)\n"
"}"));
        eight = new QPushButton(centralwidget);
        eight->setObjectName(QString::fromUtf8("eight"));
        eight->setGeometry(QRect(72, 253, 61, 51));
        eight->setFont(font2);
        eight->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(154, 153, 150)\n"
"}"));
        nine = new QPushButton(centralwidget);
        nine->setObjectName(QString::fromUtf8("nine"));
        nine->setGeometry(QRect(133, 253, 61, 51));
        nine->setFont(font2);
        nine->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(154, 153, 150)\n"
"}"));
        sqrt = new QPushButton(centralwidget);
        sqrt->setObjectName(QString::fromUtf8("sqrt"));
        sqrt->setGeometry(QRect(194, 253, 61, 51));
        sqrt->setFont(font1);
        sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        ln = new QPushButton(centralwidget);
        ln->setObjectName(QString::fromUtf8("ln"));
        ln->setGeometry(QRect(255, 253, 61, 51));
        ln->setFont(font1);
        ln->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        asin = new QPushButton(centralwidget);
        asin->setObjectName(QString::fromUtf8("asin"));
        asin->setGeometry(QRect(316, 253, 61, 51));
        asin->setFont(font1);
        asin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        dot = new QPushButton(centralwidget);
        dot->setObjectName(QString::fromUtf8("dot"));
        dot->setGeometry(QRect(11, 304, 61, 51));
        dot->setFont(font1);
        dot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(154, 153, 150)\n"
"}"));
        zero = new QPushButton(centralwidget);
        zero->setObjectName(QString::fromUtf8("zero"));
        zero->setGeometry(QRect(72, 304, 61, 51));
        zero->setFont(font2);
        zero->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(154, 153, 150)\n"
"}"));
        equals = new QPushButton(centralwidget);
        equals->setObjectName(QString::fromUtf8("equals"));
        equals->setGeometry(QRect(133, 304, 61, 51));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        equals->setFont(font3);
        equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(104, 100, 100);\n"
"}"));
        mod = new QPushButton(centralwidget);
        mod->setObjectName(QString::fromUtf8("mod"));
        mod->setGeometry(QRect(194, 304, 61, 51));
        mod->setFont(font1);
        mod->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        log = new QPushButton(centralwidget);
        log->setObjectName(QString::fromUtf8("log"));
        log->setGeometry(QRect(255, 304, 61, 51));
        log->setFont(font1);
        log->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        log->setAutoDefault(false);
        log->setFlat(false);
        acos = new QPushButton(centralwidget);
        acos->setObjectName(QString::fromUtf8("acos"));
        acos->setGeometry(QRect(316, 304, 61, 51));
        acos->setFont(font1);
        acos->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        graph = new QPushButton(centralwidget);
        graph->setObjectName(QString::fromUtf8("graph"));
        graph->setGeometry(QRect(10, 355, 184, 30));
        graph->setFont(font2);
        graph->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        setx = new QPushButton(centralwidget);
        setx->setObjectName(QString::fromUtf8("setx"));
        setx->setGeometry(QRect(194, 355, 61, 51));
        setx->setFont(font1);
        setx->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        justx = new QPushButton(centralwidget);
        justx->setObjectName(QString::fromUtf8("justx"));
        justx->setGeometry(QRect(255, 355, 61, 51));
        justx->setFont(font1);
        justx->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        atan = new QPushButton(centralwidget);
        atan->setObjectName(QString::fromUtf8("atan"));
        atan->setGeometry(QRect(316, 355, 61, 51));
        atan->setFont(font1);
        atan->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        showhide = new QPushButton(centralwidget);
        showhide->setObjectName(QString::fromUtf8("showhide"));
        showhide->setGeometry(QRect(10, 385, 184, 21));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        showhide->setFont(font4);
        showhide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        info_line = new QLabel(centralwidget);
        info_line->setObjectName(QString::fromUtf8("info_line"));
        info_line->setGeometry(QRect(11, 70, 366, 31));
        info_line->setFont(font1);
        info_line->setMouseTracking(false);
        info_line->setFocusPolicy(Qt::NoFocus);
        info_line->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(246, 245, 244);\n"
"}"));
        info_line->setMargin(0);
        info_line->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        widget = new QCustomPlot(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(440, 30, 541, 375));
        lineEdit_x_max = new QLineEdit(centralwidget);
        lineEdit_x_max->setObjectName(QString::fromUtf8("lineEdit_x_max"));
        lineEdit_x_max->setGeometry(QRect(484, 412, 51, 25));
        lineEdit_x_max->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        lineEdit_x_min = new QLineEdit(centralwidget);
        lineEdit_x_min->setObjectName(QString::fromUtf8("lineEdit_x_min"));
        lineEdit_x_min->setGeometry(QRect(484, 441, 51, 25));
        lineEdit_x_min->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        lineEdit_y_max = new QLineEdit(centralwidget);
        lineEdit_y_max->setObjectName(QString::fromUtf8("lineEdit_y_max"));
        lineEdit_y_max->setGeometry(QRect(595, 412, 51, 25));
        lineEdit_y_max->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        lineEdit_y_min = new QLineEdit(centralwidget);
        lineEdit_y_min->setObjectName(QString::fromUtf8("lineEdit_y_min"));
        lineEdit_y_min->setGeometry(QRect(595, 441, 51, 25));
        lineEdit_y_min->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	color: white;\n"
"	background-color: rgb(57, 57, 57);\n"
"}"));
        last_exprsn = new QLabel(centralwidget);
        last_exprsn->setObjectName(QString::fromUtf8("last_exprsn"));
        last_exprsn->setGeometry(QRect(11, 0, 366, 30));
        last_exprsn->setFont(font1);
        last_exprsn->setMouseTracking(false);
        last_exprsn->setFocusPolicy(Qt::NoFocus);
        last_exprsn->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: rgb(190, 190, 190);\n"
"	background-color: rgb(39, 39, 39)\n"
"}"));
        last_exprsn->setIndent(1);
        last_exprsn->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(440, 415, 41, 17));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(440, 444, 41, 17));
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(551, 415, 41, 17));
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(551, 444, 41, 17));
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        clear->setDefault(false);
        equals->setDefault(false);
        log->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SmartCalc", nullptr));
        string_line->setInputMask(QString());
        string_line->setText(QString());
        string_line->setPlaceholderText(QString());
        clear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
#if QT_CONFIG(shortcut)
        clear->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        backspace->setText(QCoreApplication::translate("MainWindow", "<--", nullptr));
        brace_open->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        brace_close->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        power->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        one->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        two->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        three->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        mult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        four->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        five->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        six->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        seven->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        eight->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        nine->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        zero->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
#if QT_CONFIG(shortcut)
        equals->setShortcut(QCoreApplication::translate("MainWindow", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
        mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        graph->setText(QCoreApplication::translate("MainWindow", "draw graph", nullptr));
#if QT_CONFIG(shortcut)
        graph->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        setx->setText(QCoreApplication::translate("MainWindow", "set x", nullptr));
        justx->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        showhide->setText(QCoreApplication::translate("MainWindow", "show      /      hide", nullptr));
#if QT_CONFIG(shortcut)
        showhide->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+D", nullptr));
#endif // QT_CONFIG(shortcut)
        info_line->setText(QString());
        last_exprsn->setText(QCoreApplication::translate("MainWindow", "Created by Elmir Musaev               *funcs - in radians", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "x max", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "x min", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "y max", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "y min", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
