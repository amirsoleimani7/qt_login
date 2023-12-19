/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_3;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_user_name;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_email;
    QLineEdit *lineEdit_age;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox_gender;
    QPushButton *pushButton;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(554, 458);
        signup->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #d8d8d8; /* Set your desired background color for the whole page */\n"
"}\n"
""));
        widget = new QWidget(signup);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(140, 40, 253, 376));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/icons8-sign-up-100.png")));

        verticalLayout_4->addWidget(label_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: Arial, sans-serif; /* Set your desired font family for labels */\n"
"    font-size: 12pt; /* Set your desired font size for labels */\n"
"    font-weight: bold; /* Set font weight to bold if desired */\n"
"    color: #333; /* Set your desired text color for labels */\n"
"}"));

        verticalLayout_2->addWidget(label);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: Arial, sans-serif; /* Set your desired font family for labels */\n"
"    font-size: 12pt; /* Set your desired font size for labels */\n"
"    font-weight: bold; /* Set font weight to bold if desired */\n"
"    color: #333; /* Set your desired text color for labels */\n"
"}"));

        verticalLayout_2->addWidget(label_6);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: Arial, sans-serif; /* Set your desired font family for labels */\n"
"    font-size: 12pt; /* Set your desired font size for labels */\n"
"    font-weight: bold; /* Set font weight to bold if desired */\n"
"    color: #333; /* Set your desired text color for labels */\n"
"}"));

        verticalLayout_2->addWidget(label_5);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: Arial, sans-serif; /* Set your desired font family for labels */\n"
"    font-size: 12pt; /* Set your desired font size for labels */\n"
"    font-weight: bold; /* Set font weight to bold if desired */\n"
"    color: #333; /* Set your desired text color for labels */\n"
"}"));

        verticalLayout_2->addWidget(label_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    font-family: Arial, sans-serif; /* Set your desired font family for labels */\n"
"    font-size: 12pt; /* Set your desired font size for labels */\n"
"    font-weight: bold; /* Set font weight to bold if desired */\n"
"    color: #333; /* Set your desired text color for labels */\n"
"}"));

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEdit_user_name = new QLineEdit(widget);
        lineEdit_user_name->setObjectName("lineEdit_user_name");
        lineEdit_user_name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout->addWidget(lineEdit_user_name);

        lineEdit_password = new QLineEdit(widget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout->addWidget(lineEdit_password);

        lineEdit_name = new QLineEdit(widget);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout->addWidget(lineEdit_name);

        lineEdit_email = new QLineEdit(widget);
        lineEdit_email->setObjectName("lineEdit_email");
        lineEdit_email->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout->addWidget(lineEdit_email);

        lineEdit_age = new QLineEdit(widget);
        lineEdit_age->setObjectName("lineEdit_age");
        lineEdit_age->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout->addWidget(lineEdit_age);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        comboBox_gender = new QComboBox(widget);
        comboBox_gender->setObjectName("comboBox_gender");
        comboBox_gender->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #808080; /* Set your desired gray background color */\n"
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
"    background-color: #a0a0a0; /* Change background color on hover */\n"
"}\n"
"\n"
"/* Change button appearance on press */\n"
"QPushButton:p"
                        "ressed {\n"
"    background-color: #7a7a7a; /* Change background color when pressed */\n"
"    border: 2px solid #636363; /* Change border color when pressed */\n"
"    transform: scale(0.95); /* Apply a scale transform when pressed */\n"
"    box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1); /* Adjust the values for the shadow effect on press */\n"
"}\n"
""));

        horizontalLayout_2->addWidget(comboBox_gender);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #808080; /* Set your desired gray background color */\n"
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
"    background-color: #a0a0a0; /* Change background color on hover */\n"
"}\n"
"\n"
"/* Change button appearance on press */\n"
"QPushButton:p"
                        "ressed {\n"
"    background-color: #7a7a7a; /* Change background color when pressed */\n"
"    border: 2px solid #636363; /* Change border color when pressed */\n"
"    transform: scale(0.95); /* Apply a scale transform when pressed */\n"
"    box-shadow: 0 2px 4px rgba(0, 0, 0, 0.1); /* Adjust the values for the shadow effect on press */\n"
"}\n"
""));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Dialog", nullptr));
        label_4->setText(QString());
        label->setText(QCoreApplication::translate("signup", "user name", nullptr));
        label_6->setText(QCoreApplication::translate("signup", "password", nullptr));
        label_5->setText(QCoreApplication::translate("signup", "name", nullptr));
        label_3->setText(QCoreApplication::translate("signup", "email", nullptr));
        label_2->setText(QCoreApplication::translate("signup", "age", nullptr));
        pushButton->setText(QCoreApplication::translate("signup", "sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
