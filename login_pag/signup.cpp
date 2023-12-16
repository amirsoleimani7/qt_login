#include "signup.h"
#include "ui_signup.h"
#include <QFile>
#include <QMessageBox>
signup::signup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}

void signup::on_pushButton_clicked()
{
    if(ui->lineEdit_user_name->text().isEmpty()){
        QMessageBox::warning(this,"user name","user name is empty");
    }

    if(ui->lineEdit_password->text().isEmpty()){
        QMessageBox::warning(this,"password","password is empty");
    }

    if(ui->lineEdit_name->text().isEmpty()){
        QMessageBox::warning(this,"name","name is empty");
    }

    if(ui->lineEdit_email->text().isEmpty()){
        QMessageBox::warning(this,"email","email is empty");
    }

    if(ui->lineEdit_age->text().isEmpty()){
        QMessageBox::warning(this,"age","age is empty");
    }
    else{
        QMessageBox::information(this,"reausalt","all good!!");
    }


}

