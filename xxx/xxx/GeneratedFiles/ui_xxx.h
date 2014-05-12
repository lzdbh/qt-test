/********************************************************************************
** Form generated from reading UI file 'xxx.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XXX_H
#define UI_XXX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_xxxClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *xxxClass)
    {
        if (xxxClass->objectName().isEmpty())
            xxxClass->setObjectName(QStringLiteral("xxxClass"));
        xxxClass->resize(600, 400);
        centralWidget = new QWidget(xxxClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(450, 220, 93, 28));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 30, 113, 21));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 220, 93, 28));
        xxxClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(xxxClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        xxxClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(xxxClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        xxxClass->setStatusBar(statusBar);

        retranslateUi(xxxClass);

        QMetaObject::connectSlotsByName(xxxClass);
    } // setupUi

    void retranslateUi(QMainWindow *xxxClass)
    {
        xxxClass->setWindowTitle(QApplication::translate("xxxClass", "xxx", 0));
        pushButton->setText(QApplication::translate("xxxClass", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("xxxClass", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class xxxClass: public Ui_xxxClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XXX_H
