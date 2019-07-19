/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QToolBox *toolBox;
    QWidget *Section_Login;
    QPushButton *Button_Sign;
    QLineEdit *Edit_User;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Edit_Pass;
    QWidget *Section_Register;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *Text_Password;
    QRadioButton *Button_Famale;
    QLabel *label_4;
    QLabel *label_6;
    QRadioButton *Button_male;
    QSpinBox *Text_Age;
    QLabel *label_5;
    QPushButton *Button_Register;
    QLabel *label_7;
    QLineEdit *Text_User;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(405, 345);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        toolBox = new QToolBox(centralWidget);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolBox->setGeometry(QRect(20, 30, 351, 291));
        Section_Login = new QWidget();
        Section_Login->setObjectName(QString::fromUtf8("Section_Login"));
        Section_Login->setGeometry(QRect(0, 0, 351, 229));
        Button_Sign = new QPushButton(Section_Login);
        Button_Sign->setObjectName(QString::fromUtf8("Button_Sign"));
        Button_Sign->setGeometry(QRect(120, 110, 91, 23));
        Edit_User = new QLineEdit(Section_Login);
        Edit_User->setObjectName(QString::fromUtf8("Edit_User"));
        Edit_User->setGeometry(QRect(80, 20, 241, 20));
        label = new QLabel(Section_Login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 61, 20));
        label_2 = new QLabel(Section_Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 61, 20));
        Edit_Pass = new QLineEdit(Section_Login);
        Edit_Pass->setObjectName(QString::fromUtf8("Edit_Pass"));
        Edit_Pass->setGeometry(QRect(80, 50, 241, 20));
        Edit_Pass->setEchoMode(QLineEdit::Password);
        toolBox->addItem(Section_Login, QString::fromUtf8("Page 1"));
        Section_Register = new QWidget();
        Section_Register->setObjectName(QString::fromUtf8("Section_Register"));
        Section_Register->setGeometry(QRect(0, 0, 351, 229));
        layoutWidget = new QWidget(Section_Register);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(6, 10, 341, 221));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Text_Password = new QLineEdit(layoutWidget);
        Text_Password->setObjectName(QString::fromUtf8("Text_Password"));

        gridLayout->addWidget(Text_Password, 3, 1, 1, 2);

        Button_Famale = new QRadioButton(layoutWidget);
        Button_Famale->setObjectName(QString::fromUtf8("Button_Famale"));

        gridLayout->addWidget(Button_Famale, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        Button_male = new QRadioButton(layoutWidget);
        Button_male->setObjectName(QString::fromUtf8("Button_male"));

        gridLayout->addWidget(Button_male, 0, 2, 1, 1);

        Text_Age = new QSpinBox(layoutWidget);
        Text_Age->setObjectName(QString::fromUtf8("Text_Age"));

        gridLayout->addWidget(Text_Age, 1, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        Button_Register = new QPushButton(layoutWidget);
        Button_Register->setObjectName(QString::fromUtf8("Button_Register"));

        gridLayout->addWidget(Button_Register, 4, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        Text_User = new QLineEdit(layoutWidget);
        Text_User->setObjectName(QString::fromUtf8("Text_User"));

        gridLayout->addWidget(Text_User, 2, 1, 1, 2);

        toolBox->addItem(Section_Register, QString::fromUtf8("Page 2"));
        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(Edit_User, Edit_Pass);
        QWidget::setTabOrder(Edit_Pass, Button_Sign);
        QWidget::setTabOrder(Button_Sign, Button_Famale);
        QWidget::setTabOrder(Button_Famale, Button_male);
        QWidget::setTabOrder(Button_male, Text_Age);
        QWidget::setTabOrder(Text_Age, Text_User);
        QWidget::setTabOrder(Text_User, Text_Password);
        QWidget::setTabOrder(Text_Password, Button_Register);

        retranslateUi(MainWindow);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Button_Sign->setText(QCoreApplication::translate("MainWindow", "&Iniciar Sesion", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Usuario:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Contrase\303\261a:", nullptr));
        toolBox->setItemText(toolBox->indexOf(Section_Login), QCoreApplication::translate("MainWindow", "Page 1", nullptr));
        Button_Famale->setText(QCoreApplication::translate("MainWindow", "Femenino", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Genero :", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Usuario :", nullptr));
        Button_male->setText(QCoreApplication::translate("MainWindow", "Masculino", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Edad :", nullptr));
        Button_Register->setText(QCoreApplication::translate("MainWindow", "Register", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        toolBox->setItemText(toolBox->indexOf(Section_Register), QCoreApplication::translate("MainWindow", "Page 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
