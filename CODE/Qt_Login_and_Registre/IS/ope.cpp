#include "ope.h"
#include "ui_ope.h"

OPE::OPE(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OPE)
{
    ui->setupUi(this);
    QPixmap bkgnd("Resources/back.jpeg");
        bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
        QPalette palette;
        palette.setBrush(QPalette::Background, bkgnd);
        this->setPalette(palette);

}

OPE::~OPE()
{
    delete ui;
}
