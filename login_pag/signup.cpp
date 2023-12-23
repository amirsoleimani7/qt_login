#include "signup.h"
#include "ui_signup.h"
#include <QFile>
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <QTextStream>
#include <QFileDialog>
#include <QFile>
#include <QCryptographicHash>

using namespace std;
signup::signup(MainWindow *mainWindow, QWidget *parent)
    : QDialog(parent),
    ui(new Ui::signup),
    mainWindow(mainWindow) // Store the pointer to MainWindow
{
    ui->setupUi(this);
    ui->comboBox_gender->addItem("male");
    ui->comboBox_gender->addItem("female");
    file_name_sign_up = mainWindow->get_name(); // Access the file_path from MainWindow
    // file_name_sign_up = file_name_12; // You might not need this line anymore
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
        //QString fileNameDir = static_cast<MainWindow*>(MainWindow)->file_name_dir;
        //QString name_file = file_name_dir;
        QFile my_file(file_name_sign_up);
        if (my_file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&my_file);

            // Read the file line by line
            while (!in.atEnd()) {
                QString line = in.readLine();

                // Split the line by "|"
                QStringList fields = line.split('|');

                // Ensure there are enough fields

                QString user_name_1 = fields[0];
                //QString password_1 = fields[1];
                if(user_name_1 == user_name){
                    QMessageBox::warning(this,"title","there is user with the same username!!");
                    return;
                }
                my_file.close();
            }
        }

        QFile my_file_1(file_name_sign_up);
        if (!my_file_1.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
            //qDebug() << "Could not open file";
            QMessageBox::warning(this,"title","could not open file");

            return;
        }
        else {
            QCryptographicHash hash(QCryptographicHash::Sha256);
            hash.addData(password.toUtf8());
            QByteArray hashedResult = hash.result();
            QString hashedHex = hashedResult.toHex();
            QTextStream out(&my_file_1);
            out << user_name << '|' << hashedHex << '|' << name << '|' << email << '|' << age << '|' << gender << Qt::endl;

            my_file_1.flush();
            my_file_1.close();
            //qDebug() << "added!";
            QMessageBox::information(this,"title","added sucesfully");

        }

    }

    //QMessageBox::information(this,"geder",ui->comboBox_gender->currentText());
}

