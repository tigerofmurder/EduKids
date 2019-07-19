#include "selection.h"
#include "ui_selection.h"

Selection::Selection(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Selection)
{
    ui->setupUi(this);

    QPixmap bkgnd("Resources/silver.jpg");
        bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
        QPalette palette;
        palette.setBrush(QPalette::Background, bkgnd);
        this->setPalette(palette);


        QPalette pal = ui->pushButton_3->palette();
        pal.setColor(QPalette::Button, QColor(Qt::blue));
        ui->pushButton_3->setAutoFillBackground(true);
        ui->pushButton_3->setPalette(pal);
        ui->pushButton_3->update();

        QPalette pal1 = ui->pushButton_2->palette();
        pal.setColor(QPalette::Button, QColor(Qt::blue));
        ui->pushButton_2->setAutoFillBackground(true);
        ui->pushButton_2->setPalette(pal);
        ui->pushButton_2->update();
        QPalette pal2 = ui->pushButton->palette();
        pal.setColor(QPalette::Button, QColor(Qt::blue));
        ui->pushButton->setAutoFillBackground(true);
        ui->pushButton->setPalette(pal);
        ui->pushButton  ->update();

}

Selection::~Selection()
{
    delete ui;
}
