#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    QString file_name_dir;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QString get_name();

private slots:

    void on_sign_up_clicked();
    void on_pushButton_login_clicked();

private:
    Ui::MainWindow *ui;
    QString file_path;
};
#endif // MAINWINDOW_H
