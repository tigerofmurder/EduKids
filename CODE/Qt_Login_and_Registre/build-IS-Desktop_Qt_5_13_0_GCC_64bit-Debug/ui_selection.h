/********************************************************************************
** Form generated from reading UI file 'selection.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTION_H
#define UI_SELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Selection
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Selection)
    {
        if (Selection->objectName().isEmpty())
            Selection->setObjectName(QString::fromUtf8("Selection"));
        Selection->resize(735, 477);
        label = new QLabel(Selection);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 180, 371, 71));
        pushButton = new QPushButton(Selection);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(444, 72, 211, 91));
        pushButton_2 = new QPushButton(Selection);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(444, 192, 211, 81));
        pushButton_3 = new QPushButton(Selection);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(450, 300, 201, 91));

        retranslateUi(Selection);

        QMetaObject::connectSlotsByName(Selection);
    } // setupUi

    void retranslateUi(QWidget *Selection)
    {
        Selection->setWindowTitle(QCoreApplication::translate("Selection", "Form", nullptr));
        label->setText(QCoreApplication::translate("Selection", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:600;\">EDUKIDS</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Selection", "SUMA", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Selection", "RESTA", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Selection", "MULTIPLICACION", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Selection: public Ui_Selection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTION_H
