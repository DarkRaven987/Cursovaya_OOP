/********************************************************************************
** Form generated from reading UI file 'prodsdatamanip.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODSDATAMANIP_H
#define UI_PRODSDATAMANIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QTableWidget *tableWidget_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(699, 299);
        Form->setMinimumSize(QSize(699, 299));
        Form->setMaximumSize(QSize(699, 299));
        tableWidget = new QTableWidget(Form);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 10, 221, 271));
        label = new QLabel(Form);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 20, 111, 16));
        lineEdit = new QLineEdit(Form);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(250, 40, 121, 20));
        lineEdit_2 = new QLineEdit(Form);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(250, 100, 121, 20));
        label_2 = new QLabel(Form);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 80, 111, 16));
        tableWidget_2 = new QTableWidget(Form);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        tableWidget_2->setObjectName(QStringLiteral("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(390, 10, 301, 271));
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 150, 121, 41));
        pushButton_2 = new QPushButton(Form);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(250, 240, 121, 41));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Form", "\320\235\320\260\320\267\320\262\320\260 \320\274\320\265\320\264\320\270\320\272\320\260\320\274\320\265\320\275\321\202\321\203", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Form", "\320\246\321\226\320\275\320\260", 0));
        label->setText(QApplication::translate("Form", "\320\235\320\260\320\267\320\262\320\260 \320\274\320\265\320\264\320\270\320\272\320\260\320\274\320\265\320\275\321\202\321\203", 0));
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        label_2->setText(QApplication::translate("Form", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("Form", "\320\235\320\260\320\267\320\262\320\260", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("Form", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QApplication::translate("Form", "\320\241\321\203\320\274\320\274\320\260", 0));
        pushButton->setText(QApplication::translate("Form", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\264\320\276 \320\277\321\200\320\276\320\264\320\260\320\266\321\203", 0));
        pushButton_2->setText(QApplication::translate("Form", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270 \320\277\321\200\320\276\320\264\320\260\320\266", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODSDATAMANIP_H
