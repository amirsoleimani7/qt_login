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
        widget = new QWidget(signup);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(110, 70, 301, 301));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");

        verticalLayout_2->addWidget(label_6);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        verticalLayout_2->addWidget(label_5);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEdit_user_name = new QLineEdit(widget);
        lineEdit_user_name->setObjectName("lineEdit_user_name");

        verticalLayout->addWidget(lineEdit_user_name);

        lineEdit_password = new QLineEdit(widget);
        lineEdit_password->setObjectName("lineEdit_password");

        verticalLayout->addWidget(lineEdit_password);

        lineEdit_name = new QLineEdit(widget);
        lineEdit_name->setObjectName("lineEdit_name");

        verticalLayout->addWidget(lineEdit_name);

        lineEdit_email = new QLineEdit(widget);
        lineEdit_email->setObjectName("lineEdit_email");

        verticalLayout->addWidget(lineEdit_email);

        lineEdit_age = new QLineEdit(widget);
        lineEdit_age->setObjectName("lineEdit_age");

        verticalLayout->addWidget(lineEdit_age);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        comboBox_gender = new QComboBox(widget);
        comboBox_gender->setObjectName("comboBox_gender");

        horizontalLayout_2->addWidget(comboBox_gender);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Dialog", nullptr));
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
