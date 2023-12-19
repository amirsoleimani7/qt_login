#ifndef SIGNUP_H
#define SIGNUP_H
#include <QDialog>
#include "mainwindow.h" // Include the header of the MainWindow class
namespace Ui {
class signup;
}

class signup : public QDialog
{
    Q_OBJECT

public:
    signup(MainWindow *mainWindow, QWidget *parent);
    ~signup();
    QString file_name_sign_up;

private slots:
    void on_pushButton_clicked();

private:
    Ui::signup *ui;
    MainWindow *mainWindow; // Pointer to MainWindow instance

};

#endif // SIGNUP_H
