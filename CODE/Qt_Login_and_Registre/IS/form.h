#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <record.h>

using namespace std;

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(string user,string pass,QWidget *parent = nullptr);
    ~Form();
    void Actualizar();
    string read(string dir);

private slots:
    void on_Button_Logout_clicked();

    void on_Button_Start_clicked();

private:
    Ui::Form *ui;
    QPixmap *image_User;
    string UserLogin;
    string PassLogin;
    int newcoins;
};

#endif // FORM_H
