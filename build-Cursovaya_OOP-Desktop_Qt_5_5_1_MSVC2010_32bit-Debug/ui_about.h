/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(336, 247);
        Form->setMinimumSize(QSize(336, 247));
        Form->setMaximumSize(QSize(336, 247));
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 261, 151));
        label->setTextFormat(Qt::RichText);
        label->setScaledContents(false);
        label->setWordWrap(true);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        label->setText(QApplication::translate("Form", "\320\242\320\243\320\237\320\236 \320\232\320\243\320\247\320\220 \320\242\320\225\320\232\320\241\320\242\320\220 \320\237\320\240\320\236 \320\242\320\236 \320\232\320\220\320\232 \320\241\320\242\320\243\320\224\320\225\320\235\320\242\320\253 \320\237\320\253\320\242\320\220\320\233\320\230\320\241\320\254 \320\241\320\224\320\225\320\233\320\220\320\242\320\254 \320\232\320\243\320\240\320\241\320\220\320\247 \320\222 \320\234\320\243\320\241\320\236\320\240\320\232\320\225 \320\230 \320\241\320\224\320\220\320\242\320\254 \320\225\320\225 \320\221\320\236\320\234\320\226\320\220\320\234 \320\235\320\220 3  \320\221\320\220\320\233\320\220", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
