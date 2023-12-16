#include "signup.h"
#include "ui_signup.h"
#include <QFile>
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <QTextStream>

using namespace std;
signup::signup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);
    ui->comboBox_gender->addItem("male");
    ui->comboBox_gender->addItem("female");

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
        QString user_name = ui->lineEdit_user_name->text();
        QString password = ui->lineEdit_password->text();
        QString name = ui->lineEdit_name->text();
        QString email = ui->lineEdit_email->text();
        QString age = ui->lineEdit_age->text();
        QString gender = ui->comboBox_gender->currentText();

        QFile my_file("C:/Users/amir_1/Desktop/cpp/kargah_9/loginpage/qt_login/login_pag/accounts.txt");
        if (my_file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&my_file);

            // Read the file line by line
            while (!in.atEnd()) {
                QString line = in.readLine();

                // Split the line by "|"
                QStringList fields = line.split('|');

                // Ensure there are enough fields

                QString user_name_1 = fields[0];
                QString password_1 = fields[1];
                if(user_name_1 == user_name && password_1 == password){
                    QMessageBox::warning(this,"title","alraedy added!!");
                    return;
                }
                my_file.close();
            }
        }

        QFile my_file_1("C:/Users/amir_1/Desktop/cpp/kargah_9/loginpage/qt_login/login_pag/accounts.txt");
        if (!my_file_1.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
            //qDebug() << "Could not open file";
            QMessageBox::warning(this,"title","could not open file");

            return;
        }
        else {
            QTextStream out(&my_file_1);
            out << user_name << '|' << password << '|' << name << '|' << email << '|' << age << '|' << gender << Qt::endl;

            my_file_1.flush();
            my_file_1.close();
            //qDebug() << "added!";
            QMessageBox::information(this,"title","added sucesfully");

        }

    }

    //QMessageBox::information(this,"geder",ui->comboBox_gender->currentText());
}

