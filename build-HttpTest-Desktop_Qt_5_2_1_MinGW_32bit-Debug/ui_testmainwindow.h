/********************************************************************************
** Form generated from reading UI file 'testmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTMAINWINDOW_H
#define UI_TESTMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TestMainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *btnLoginOut;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TestMainWindow)
    {
        if (TestMainWindow->objectName().isEmpty())
            TestMainWindow->setObjectName(QStringLiteral("TestMainWindow"));
        TestMainWindow->resize(800, 600);
        centralwidget = new QWidget(TestMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 230, 401, 151));
        btnLoginOut = new QPushButton(centralwidget);
        btnLoginOut->setObjectName(QStringLiteral("btnLoginOut"));
        btnLoginOut->setGeometry(QRect(450, 120, 75, 23));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 120, 75, 23));
        TestMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TestMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        TestMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(TestMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        TestMainWindow->setStatusBar(statusbar);

        retranslateUi(TestMainWindow);

        QMetaObject::connectSlotsByName(TestMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TestMainWindow)
    {
        TestMainWindow->setWindowTitle(QApplication::translate("TestMainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("TestMainWindow", "TextLabel", 0));
        btnLoginOut->setText(QApplication::translate("TestMainWindow", "\351\200\200\345\207\272", 0));
        pushButton->setText(QApplication::translate("TestMainWindow", "\347\231\273\345\205\245", 0));
    } // retranslateUi

};

namespace Ui {
    class TestMainWindow: public Ui_TestMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTMAINWINDOW_H
