/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *Button_Start;
    QLabel *label;
    QLabel *Image_User;
    QLabel *Points;
    QPushButton *Button_Logout;
    QLabel *text_Level;
    QLabel *Level;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(531, 391);
        Form->setStyleSheet(QString::fromUtf8(""));
        gridLayoutWidget = new QWidget(Form);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 20, 491, 341));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);

        Button_Start = new QPushButton(gridLayoutWidget);
        Button_Start->setObjectName(QString::fromUtf8("Button_Start"));

        gridLayout->addWidget(Button_Start, 6, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 1, 1, 1);

        Image_User = new QLabel(gridLayoutWidget);
        Image_User->setObjectName(QString::fromUtf8("Image_User"));

        gridLayout->addWidget(Image_User, 0, 0, 7, 1);

        Points = new QLabel(gridLayoutWidget);
        Points->setObjectName(QString::fromUtf8("Points"));

        gridLayout->addWidget(Points, 0, 1, 1, 1);

        Button_Logout = new QPushButton(gridLayoutWidget);
        Button_Logout->setObjectName(QString::fromUtf8("Button_Logout"));

        gridLayout->addWidget(Button_Logout, 7, 1, 1, 1);

        text_Level = new QLabel(gridLayoutWidget);
        text_Level->setObjectName(QString::fromUtf8("text_Level"));

        gridLayout->addWidget(text_Level, 4, 1, 1, 1);

        Level = new QLabel(gridLayoutWidget);
        Level->setObjectName(QString::fromUtf8("Level"));

        gridLayout->addWidget(Level, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        Button_Start->setText(QCoreApplication::translate("Form", "Comenzar", nullptr));
        label->setText(QCoreApplication::translate("Form", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">0</span></p></body></html>", nullptr));
        Image_User->setText(QString());
        Points->setText(QCoreApplication::translate("Form", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">PUNTOS</span></p></body></html>", nullptr));
        Button_Logout->setText(QCoreApplication::translate("Form", "Cerrar Sesion", nullptr));
        text_Level->setText(QCoreApplication::translate("Form", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600;\">0</span></p></body></html>", nullptr));
        Level->setText(QCoreApplication::translate("Form", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; font-weight:600; text-decoration: underline;\">NIVEL</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
