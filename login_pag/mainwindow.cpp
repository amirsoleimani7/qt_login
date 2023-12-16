#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "signup.h"
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

