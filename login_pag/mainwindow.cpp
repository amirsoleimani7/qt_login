#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "signup.h"
#include <QFile>
#include <QDebug>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_sign_up_clicked()
{
    signup *sign = new signup;
    sign->show();
}



void MainWindow::on_pushButton_login_clicked()
{

    QString user_name_input = ui->lineEdit_user_log->text();
    QString user_pass_input = ui->lineEdit_pass_log->text();

    QFile my_file("C:/Users/amir_1/Desktop/cpp/kargah_9/loginpage/qt_login/login_pag/accounts.txt");
    if (my_file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&my_file);

        // Read the file line by line
        while (!in.atEnd()) {
            QString line = in.readLine();

            // Split the line by "|"
            QStringList fields = line.split('|');

            // Ensure there are enough fields

            QString user_name_12 = fields[0];
            QString password_12 = fields[1];

            if(user_name_12 == user_name_input && password_12 == user_pass_input){
                QMessageBox::information(this,"title","Your in!!");
                return;
            }
            if(user_name_12 == user_name_input && password_12 != user_pass_input){
                QMessageBox::warning(this,"title","wrong pass");
                return;
            }
            else{
                QMessageBox::warning(this,"title","user not found!!");
                return;
            }

            my_file.close();
        }
    }
}

