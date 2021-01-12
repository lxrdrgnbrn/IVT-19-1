/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *Info;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *EditResult;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *LblLayout;
    QHBoxLayout *LblLayoutM1;
    QSpacerItem *horizontalSpacer_2;
    QLabel *LblM1;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *LblLayoutM2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *LblM2;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *LblLayoutR;
    QSpacerItem *horizontalSpacer_3;
    QLabel *LblR;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget1;
    QVBoxLayout *EditLayout;
    QLineEdit *EditM1;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *EditM2;
    QSpacerItem *verticalSpacer_4;
    QLineEdit *EditR;
    QSpacerItem *verticalSpacer_6;
    QWidget *widget2;
    QHBoxLayout *ButtonLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *resultBtn;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(624, 324);
        MainWindow->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	font-size: 14px;\n"
"	font-family:Georgia;\n"
"	color: rgb(255, 94, 0);\n"
"}\n"
"QMainWindow\n"
"{\n"
"	background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(94, 199, 255, 255), stop:1 rgba(183, 255, 253, 255));\n"
"}"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        Info = new QAction(MainWindow);
        Info->setObjectName(QString::fromUtf8("Info"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(330, 30, 281, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        EditResult = new QTextEdit(verticalLayoutWidget);
        EditResult->setObjectName(QString::fromUtf8("EditResult"));

        verticalLayout->addWidget(EditResult);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(450, 250, 151, 21));
        label->setStyleSheet(QString::fromUtf8("QLabel#label\n"
"{\n"
"	background-color;\n"
"	font-size:20px;\n"
"}"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 40, 225, 201));
        LblLayout = new QVBoxLayout(widget);
        LblLayout->setObjectName(QString::fromUtf8("LblLayout"));
        LblLayout->setContentsMargins(0, 0, 0, 0);
        LblLayoutM1 = new QHBoxLayout();
        LblLayoutM1->setObjectName(QString::fromUtf8("LblLayoutM1"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LblLayoutM1->addItem(horizontalSpacer_2);

        LblM1 = new QLabel(widget);
        LblM1->setObjectName(QString::fromUtf8("LblM1"));

        LblLayoutM1->addWidget(LblM1);


        LblLayout->addLayout(LblLayoutM1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        LblLayout->addItem(verticalSpacer);

        LblLayoutM2 = new QHBoxLayout();
        LblLayoutM2->setObjectName(QString::fromUtf8("LblLayoutM2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LblLayoutM2->addItem(horizontalSpacer_5);

        LblM2 = new QLabel(widget);
        LblM2->setObjectName(QString::fromUtf8("LblM2"));

        LblLayoutM2->addWidget(LblM2);


        LblLayout->addLayout(LblLayoutM2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        LblLayout->addItem(verticalSpacer_5);

        LblLayoutR = new QHBoxLayout();
        LblLayoutR->setObjectName(QString::fromUtf8("LblLayoutR"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        LblLayoutR->addItem(horizontalSpacer_3);

        LblR = new QLabel(widget);
        LblR->setObjectName(QString::fromUtf8("LblR"));

        LblLayoutR->addWidget(LblR);


        LblLayout->addLayout(LblLayoutR);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        LblLayout->addItem(verticalSpacer_3);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(230, 40, 91, 201));
        EditLayout = new QVBoxLayout(widget1);
        EditLayout->setObjectName(QString::fromUtf8("EditLayout"));
        EditLayout->setContentsMargins(0, 0, 0, 0);
        EditM1 = new QLineEdit(widget1);
        EditM1->setObjectName(QString::fromUtf8("EditM1"));

        EditLayout->addWidget(EditM1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        EditLayout->addItem(verticalSpacer_2);

        EditM2 = new QLineEdit(widget1);
        EditM2->setObjectName(QString::fromUtf8("EditM2"));

        EditLayout->addWidget(EditM2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        EditLayout->addItem(verticalSpacer_4);

        EditR = new QLineEdit(widget1);
        EditR->setObjectName(QString::fromUtf8("EditR"));

        EditLayout->addWidget(EditR);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        EditLayout->addItem(verticalSpacer_6);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(0, 250, 271, 25));
        ButtonLayout = new QHBoxLayout(widget2);
        ButtonLayout->setObjectName(QString::fromUtf8("ButtonLayout"));
        ButtonLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        ButtonLayout->addItem(horizontalSpacer_4);

        resultBtn = new QPushButton(widget2);
        resultBtn->setObjectName(QString::fromUtf8("resultBtn"));
        resultBtn->setStyleSheet(QString::fromUtf8(""));
        resultBtn->setAutoDefault(false);

        ButtonLayout->addWidget(resultBtn);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 624, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(Info);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Force of Gravity", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260", nullptr));
        Info->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        EditResult->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\274\320\265\320\275\321\201\320\272\320\270\320\271 \320\220.\320\220.", nullptr));
        LblM1->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\201\320\260 \320\277\320\265\321\200\320\262\320\276\320\263\320\276 \321\202\320\265\320\273\320\260(m1):", nullptr));
        LblM2->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\321\201\320\260 \320\277\320\265\321\200\320\262\320\276\320\263\320\276 \321\202\320\265\320\273\320\260(m1):", nullptr));
        LblR->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\274\320\265\320\266\320\264\321\203 \321\202\320\265\320\273\320\260\320\274\320\270(r):", nullptr));
        resultBtn->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\201\320\273\320\270\321\202\321\214", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
