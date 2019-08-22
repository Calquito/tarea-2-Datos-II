/********************************************************************************
** Form generated from reading UI file 'll_window.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LL_WINDOW_H
#define UI_LL_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Ll_window
{
public:
    QPushButton *pushButton;
    QLineEdit *lineedit1;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineedit1_3;
    QLineEdit *lineedit1_4;
    QPushButton *pushButton_5;
    QLabel *label_3;
    QLabel *label_2;

    void setupUi(QDialog *Ll_window)
    {
        if (Ll_window->objectName().isEmpty())
            Ll_window->setObjectName(QString::fromUtf8("Ll_window"));
        Ll_window->resize(400, 300);
        pushButton = new QPushButton(Ll_window);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(28, 50, 121, 25));
        lineedit1 = new QLineEdit(Ll_window);
        lineedit1->setObjectName(QString::fromUtf8("lineedit1"));
        lineedit1->setGeometry(QRect(170, 50, 113, 25));
        lineedit1->setMaxLength(100);
        pushButton_2 = new QPushButton(Ll_window);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 90, 121, 25));
        label = new QLabel(Ll_window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 120, 101, 20));
        pushButton_3 = new QPushButton(Ll_window);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 130, 121, 25));
        pushButton_4 = new QPushButton(Ll_window);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 170, 121, 25));
        lineedit1_3 = new QLineEdit(Ll_window);
        lineedit1_3->setObjectName(QString::fromUtf8("lineedit1_3"));
        lineedit1_3->setGeometry(QRect(170, 130, 113, 25));
        lineedit1_3->setMaxLength(100);
        lineedit1_4 = new QLineEdit(Ll_window);
        lineedit1_4->setObjectName(QString::fromUtf8("lineedit1_4"));
        lineedit1_4->setGeometry(QRect(170, 170, 113, 25));
        lineedit1_4->setMaxLength(100);
        pushButton_5 = new QPushButton(Ll_window);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 210, 121, 25));
        label_3 = new QLabel(Ll_window);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 180, 67, 17));
        label_2 = new QLabel(Ll_window);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 210, 67, 17));

        retranslateUi(Ll_window);

        QMetaObject::connectSlotsByName(Ll_window);
    } // setupUi

    void retranslateUi(QDialog *Ll_window)
    {
        Ll_window->setWindowTitle(QCoreApplication::translate("Ll_window", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Ll_window", "Insertar al inicio", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Ll_window", "Eliminar al inicio", nullptr));
        label->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("Ll_window", "Editar posicion", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Ll_window", "Obtener posicion", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Ll_window", "Mostrar", nullptr));
        label_3->setText(QCoreApplication::translate("Ll_window", "Pos", nullptr));
        label_2->setText(QCoreApplication::translate("Ll_window", "Ll", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ll_window: public Ui_Ll_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LL_WINDOW_H
