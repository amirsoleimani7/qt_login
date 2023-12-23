#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "signup.h"
#include <QDebug>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QDir>
#include <QCryptographicHash>

//#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString file_name_path_1 = QFileDialog::getOpenFileName(this,"choose directory!!",QDir::homePath());
    file_name_dir = file_name_path_1;
}

MainWindow::~MainWindow()
{
    delete ui;
}
QString MainWindow::get_name()
{
    return file_name_dir;
}

void MainWindow::on_sign_up_clicked()
{
    signup *sign = new signup(this,this);
    sign->exec();
}

void MainWindow::on_pushButton_login_clicked()
{
    QString user_name_input = ui->lineEdit_user_log->text();
    QString user_pass_input = ui->lineEdit_pass_log->text();
    QCryptographicHash hash(QCryptographicHash::Sha256);
    hash.addData(user_pass_input.toUtf8());
    QByteArray hashedResult = hash.result();
    QString hashedHex = hashedResult.toHex();

    QFile my_file(file_name_dir);
    if (my_file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&my_file);

        while (!in.atEnd()) {
            QString line = in.readLine();

            QStringList fields = line.split('|');


            if (fields.size() >= 2) {
                QString user_name_12 = fields[0];
                QString password_12 = fields[1];

                if (user_name_12 == user_name_input && password_12 == hashedHex) {
                    QMessageBox::information(this, "title", "Your in!!");
                    my_file.close();
                    return;
                } else if (user_name_12 == user_name_input && password_12 != hashedHex) {
                    QMessageBox::warning(this, "title", "wrong pass");
                    my_file.close();
                    return;
                }
            }
        }

        my_file.close();

        QMessageBox::warning(this, "title", "user not found!!");
    }
}

