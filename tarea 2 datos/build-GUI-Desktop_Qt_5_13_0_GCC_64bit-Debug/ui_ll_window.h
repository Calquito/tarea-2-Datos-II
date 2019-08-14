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
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Ll_window
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *Ll_window)
    {
        if (Ll_window->objectName().isEmpty())
            Ll_window->setObjectName(QString::fromUtf8("Ll_window"));
        Ll_window->resize(400, 300);
        pushButton = new QPushButton(Ll_window);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 50, 89, 25));

        retranslateUi(Ll_window);

        QMetaObject::connectSlotsByName(Ll_window);
    } // setupUi

    void retranslateUi(QDialog *Ll_window)
    {
        Ll_window->setWindowTitle(QCoreApplication::translate("Ll_window", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Ll_window", "Agregar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ll_window: public Ui_Ll_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LL_WINDOW_H
