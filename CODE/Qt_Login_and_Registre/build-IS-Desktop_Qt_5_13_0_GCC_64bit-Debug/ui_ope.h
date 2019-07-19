/********************************************************************************
** Form generated from reading UI file 'ope.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPE_H
#define UI_OPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OPE
{
public:
    QPushButton *upLeft;
    QPushButton *upLeft_2;
    QPushButton *upLeft_3;
    QPushButton *upLeft_4;
    QLabel *label;

    void setupUi(QWidget *OPE)
    {
        if (OPE->objectName().isEmpty())
            OPE->setObjectName(QString::fromUtf8("OPE"));
        OPE->resize(710, 457);
        upLeft = new QPushButton(OPE);
        upLeft->setObjectName(QString::fromUtf8("upLeft"));
        upLeft->setGeometry(QRect(160, 300, 141, 91));
        upLeft->setStyleSheet(QString::fromUtf8("#upLeft {\n"
"background-color: transparent;\n"
"border-image: url(:box_3.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#upLeft:pressed\n"
"{\n"
"   border-image: url(:box_3.png);\n"
"}"));
        upLeft_2 = new QPushButton(OPE);
        upLeft_2->setObjectName(QString::fromUtf8("upLeft_2"));
        upLeft_2->setGeometry(QRect(380, 300, 141, 91));
        upLeft_2->setStyleSheet(QString::fromUtf8("#upLeft_2 {\n"
"background-color: transparent;\n"
"border-image: url(:box_3.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#upLeft_2:pressed\n"
"{\n"
"   border-image: url(:box_3.png);\n"
"}"));
        upLeft_3 = new QPushButton(OPE);
        upLeft_3->setObjectName(QString::fromUtf8("upLeft_3"));
        upLeft_3->setGeometry(QRect(380, 180, 141, 91));
        upLeft_3->setStyleSheet(QString::fromUtf8("#upLeft_3 {\n"
"background-color: transparent;\n"
"border-image: url(:box_3.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#upLeft_3:pressed\n"
"{\n"
"   border-image: url(:box_3.png);\n"
"}"));
        upLeft_4 = new QPushButton(OPE);
        upLeft_4->setObjectName(QString::fromUtf8("upLeft_4"));
        upLeft_4->setGeometry(QRect(150, 170, 141, 91));
        upLeft_4->setStyleSheet(QString::fromUtf8("#upLeft_4 {\n"
"background-color: transparent;\n"
"border-image: url(:box_3.png);\n"
"background: none;\n"
"border: none;\n"
"background-repeat: none;\n"
"}\n"
"#upLeft_4:pressed\n"
"{\n"
"   border-image: url(:box_3.png);\n"
"}"));
        label = new QLabel(OPE);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 70, 511, 51));

        retranslateUi(OPE);

        QMetaObject::connectSlotsByName(OPE);
    } // setupUi

    void retranslateUi(QWidget *OPE)
    {
        OPE->setWindowTitle(QCoreApplication::translate("OPE", "Form", nullptr));
        upLeft->setText(QCoreApplication::translate("OPE", "PushButton", nullptr));
        upLeft_2->setText(QCoreApplication::translate("OPE", "PushButton", nullptr));
        upLeft_3->setText(QCoreApplication::translate("OPE", "PushButton", nullptr));
        upLeft_4->setText(QCoreApplication::translate("OPE", "PushButton", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OPE: public Ui_OPE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPE_H
