/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_user_log;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_pass_log;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_login;
    QPushButton *sign_up;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(554, 539);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #d8d8d8; /* Set your desired background color for the whole page */\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 130, 321, 221));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: Arial, sans-serif; /* Set your desired font family for labels */\n"
"    font-size: 12pt; /* Set your desired font size for labels */\n"
"    font-weight: bold; /* Set font weight to bold if desired */\n"
"    color: #333; /* Set your desired text color for labels */\n"
"}"));

        horizontalLayout_2->addWidget(label);

        lineEdit_user_log = new QLineEdit(layoutWidget);
        lineEdit_user_log->setObjectName("lineEdit_user_log");
        lineEdit_user_log->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: white; /* Set your desired background color for line edits */\n"
"    border: 2px solid #636363; /* Set your desired border color and thickness */\n"
"    border-radius: 5px; /* Adjust this value to control the curvature */\n"
"    padding: 5px; /* Set padding inside the line edits */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border: 2px solid #a0a0a0; /* Change border color on hover */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #4CAF50; /* Change border color when line edit is focused */\n"
"}\n"
""));

        horizontalLayout_2->addWidget(lineEdit_user_log);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: Arial, sans-serif; /* Set your desired font family for labels */\n"
"    font-size: 12pt; /* Set your desired font size for labels */\n"
"    font-weight: bold; /* Set font weight to bold if desired */\n"
"    color: #333; /* Set your desired text color for labels */\n"
"}"));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_pass_log = new QLineEdit(layoutWidget);
        lineEdit_pass_log->setObjectName("lineEdit_pass_log");
        lineEdit_pass_log->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: white; /* Set your desired background color for line edits */\n"
"    border: 2px solid #636363; /* Set your desired border color and thickness */\n"
"    border-radius: 5px; /* Adjust this value to control the curvature */\n"
"    padding: 5px; /* Set padding inside the line edits */\n"
"}\n"
"\n"
"QLineEdit:hover {\n"
"    border: 2px solid #a0a0a0; /* Change border color on hover */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #4CAF50; /* Change border color when line edit is focused */\n"
"}\n"
""));

        horizontalLayout_3->addWidget(lineEdit_pass_log);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_login = new QPushButton(layoutWidget);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(128, 128, 128, 0.7); /* Set your desired gray transparent background color */\n"
"    border: 2px solid #636363; /* Set your desired border color and thickness */\n"
"    color: white; /* Set the text color */\n"
"    padding: 10px 20px; /* Set padding around the text */\n"
"    font-weight: bold; /* Make the font bold */\n"
"\n"
"    /* Set border-radius for curvature */\n"
"    border-radius: 10px; /* Adjust this value to control the curvature */\n"
"\n"
"    /* Add a transition for a smooth animation */\n"
"    transition: background-color 0.3s, border 0.3s, transform 0.3s, box-shadow 0.3s;\n"
"}\n"
"\n"
"/* Add a subtle box shadow for a classy look */\n"
"QPushButton:hover {\n"
"    box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1); /* Adjust the values for the shadow effect */\n"
"}\n"
"\n"
"/* Change button appearance on hover */\n"
"QPushButton:hover {\n"
"    background-color: rgba(160, 160, 160, 0.7); /* Change background color on hover with transparency */\n"
"}\n"
""
                        "\n"
"/* Change button appearance on press */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(122, 122, 122, 0.7); /* Change background color when pressed with transparency */\n"
"    border: 2px solid #636363; /* Change border color when pressed */\n"
"    transform: scale(0.95); /* Apply a scale transform when pressed */\n"
"    box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1); /* Adjust the values for the shadow effect on press */\n"
"}\n"
""));

        horizontalLayout->addWidget(pushButton_login);

        sign_up = new QPushButton(layoutWidget);
        sign_up->setObjectName("sign_up");
        sign_up->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgba(128, 128, 128, 0.7); /* Set your desired gray transparent background color */\n"
"    border: 2px solid #636363; /* Set your desired border color and thickness */\n"
"    color: white; /* Set the text color */\n"
"    padding: 10px 20px; /* Set padding around the text */\n"
"    font-weight: bold; /* Make the font bold */\n"
"\n"
"    /* Set border-radius for curvature */\n"
"    border-radius: 10px; /* Adjust this value to control the curvature */\n"
"\n"
"    /* Add a transition for a smooth animation */\n"
"    transition: background-color 0.3s, border 0.3s, transform 0.3s, box-shadow 0.3s;\n"
"}\n"
"\n"
"/* Add a subtle box shadow for a classy look */\n"
"QPushButton:hover {\n"
"    box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1); /* Adjust the values for the shadow effect */\n"
"}\n"
"\n"
"/* Change button appearance on hover */\n"
"QPushButton:hover {\n"
"    background-color: rgba(160, 160, 160, 0.7); /* Change background color on hover with transparency */\n"
"}\n"
""
                        "\n"
"/* Change button appearance on press */\n"
"QPushButton:pressed {\n"
"    background-color: rgba(122, 122, 122, 0.7); /* Change background color when pressed with transparency */\n"
"    border: 2px solid #636363; /* Change border color when pressed */\n"
"    transform: scale(0.95); /* Apply a scale transform when pressed */\n"
"    box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1); /* Adjust the values for the shadow effect on press */\n"
"}\n"
""));

        horizontalLayout->addWidget(sign_up);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 554, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "user name ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "pass word ", nullptr));
        pushButton_login->setText(QCoreApplication::translate("MainWindow", "log in", nullptr));
        sign_up->setText(QCoreApplication::translate("MainWindow", "sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
