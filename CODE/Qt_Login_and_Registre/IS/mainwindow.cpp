#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Iniciar Sesion & Registrar");
    ui->toolBox->setItemText(0,"INICIAR SESION");
    ui->toolBox->setItemText(1,"REGISTRARTE");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Button_Register_clicked()
{
    bool stateR=false;
    if(ui->Button_Famale->isChecked()){
        stateR=SystemValidator.registre(ui->Text_User->text().toStdString(),
                                 ui->Text_Password->text().toStdString(),
                                 ui->Text_Age->text().toStdString(),
                                 "Femenino");
    }
    else if (ui->Button_male->isChecked()){
        stateR=SystemValidator.registre(ui->Text_User->text().toStdString(),
                                 ui->Text_Password->text().toStdString(),
                                 ui->Text_Age->text().toStdString(),
                                 "Masculino");
    }
    if(stateR){
        Information_User = new Form(ui->Text_User->text().toStdString(),ui->Text_Password->text().toStdString());
        Information_User->show();
        close();
        //this->setVisible(false);
        //Information_User->setVisible(true);
    }
    else{
        QMessageBox::information(this,"ERROR DE REGISTRO","USUARIO YA ESTA EN USO");
    }
}

void MainWindow::on_Button_Sign_clicked()
{
    if(SystemValidator.login(ui->Edit_User->text().toStdString(),ui->Edit_Pass->text().toStdString())){
        Information_User = new Form(ui->Edit_User->text().toStdString(),ui->Edit_Pass->text().toStdString());

        Information_User->show();
        close();
        //this->setVisible(false);
        //Information_User->setVisible(true);
    }
    else{
        QMessageBox::information(this,"ERROR","USUARIO Y CONTRASEÑA NO COINCIDEN");
    }

}
