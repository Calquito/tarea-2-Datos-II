/********************************************************************************
** Form generated from reading UI file 'bt_window.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BT_WINDOW_H
#define UI_BT_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_bt_window
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *bt_window)
    {
        if (bt_window->objectName().isEmpty())
            bt_window->setObjectName(QString::fromUtf8("bt_window"));
        bt_window->resize(400, 300);
        pushButton = new QPushButton(bt_window);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 60, 89, 25));
        pushButton_2 = new QPushButton(bt_window);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 130, 89, 25));
        pushButton_3 = new QPushButton(bt_window);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(60, 200, 89, 25));
        label = new QLabel(bt_window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 200, 67, 17));
        lineEdit = new QLineEdit(bt_window);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(200, 60, 113, 25));
        lineEdit_2 = new QLineEdit(bt_window);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 130, 113, 25));

        retranslateUi(bt_window);

        QMetaObject::connectSlotsByName(bt_window);
    } // setupUi

    void retranslateUi(QDialog *bt_window)
    {
        bt_window->setWindowTitle(QCoreApplication::translate("bt_window", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("bt_window", "Insertar", nullptr));
        pushButton_2->setText(QCoreApplication::translate("bt_window", "Eliminar", nullptr));
        pushButton_3->setText(QCoreApplication::translate("bt_window", "Mostrar", nullptr));
        label->setText(QCoreApplication::translate("bt_window", "B tree", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bt_window: public Ui_bt_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BT_WINDOW_H
