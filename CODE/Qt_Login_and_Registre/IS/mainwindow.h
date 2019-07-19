#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <system.h>
#include <form.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Button_Register_clicked();

    void on_Button_Sign_clicked();

private:
    Ui::MainWindow *ui;
    system32 SystemValidator;
    Form *Information_User;
};

#endif // MAINWINDOW_H
