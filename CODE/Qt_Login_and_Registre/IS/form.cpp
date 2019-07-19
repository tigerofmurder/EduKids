#include "form.h"
#include "ui_form.h"
#include <qpixmap.h>
#include <QPixmap>
#include <mainwindow.h>

Form::Form(string user,string pass,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form),
    UserLogin(user),
    PassLogin(pass)
{
    ui->setupUi(this);
    setWindowTitle("Perfil de Usuario");
    Actualizar();
    newcoins=0;
}

Form::~Form()
{
    delete ui;
}

void Form::Actualizar(){
    ifstream nnnn;
    nnnn.open("USUARIOS/"+UserLogin+"/"+PassLogin+".txt",ios::binary);
    record p;
    while(nnnn.read(reinterpret_cast<char *>(&p),sizeof(record)));
    nnnn.close();


    string get="<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">"
            +read("USUARIOS/"+UserLogin+"//Score.txt")+
            "</span></p></body></html>";

    int value=stoi(read("USUARIOS/"+UserLogin+"//Score.txt"))/100;
    string getL="<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">"
            +to_string(value)+
            "</span></p></body></html>";

    ui->label->setText(QString::fromStdString(get));
    ui->text_Level->setText(QString::fromStdString(getL));

    image_User=new QPixmap(QString::fromStdString("PERSONAJES/"+string(p.gender)+"/"+to_string(value)+".jpeg"));
    ui->Image_User->setPixmap(*image_User);
    ui->Image_User->setScaledContents(true);
}

void Form::on_Button_Logout_clicked()
{
    MainWindow * login = new MainWindow();
    login->show();
    close();
}

/////////////////////////
/// \brief Form::read
/// \param dir
/// \return
///
string Form::read(string dir){
    string line;
    ifstream myfile (dir);
    if (myfile.is_open()){
        getline (myfile,line);
    }myfile.close();
    return line;
}

void Form::on_Button_Start_clicked()
{
    close();
    system("./INTERFAz/IS");

    newcoins=stoi(read("Coin.txt"));
    int value1=stoi(read("USUARIOS/"+UserLogin+"/"+"Score.txt"));
    int aux=newcoins+value1;

    cout<<"total: "<<aux<<endl;
    ofstream newval("USUARIOS/"+UserLogin+"/"+"Score.txt");
    newval<<aux;
    newval.close();

    this->show();
    this->Actualizar();

}
