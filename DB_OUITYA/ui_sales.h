/********************************************************************************
** Form generated from reading UI file 'sales.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALES_H
#define UI_SALES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Sales
{
public:
    QSpinBox *spinBox;
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *tableView_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_11;
    QLineEdit *name_goods_box;
    QLineEdit *category_good_box;
    QLineEdit *name_company_box;
    QLineEdit *price_box;
    QLineEdit *measure_box;

    void setupUi(QDialog *Sales)
    {
        if (Sales->objectName().isEmpty())
            Sales->setObjectName(QString::fromUtf8("Sales"));
        Sales->resize(1243, 435);
        spinBox = new QSpinBox(Sales);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(520, 210, 42, 22));
        spinBox->setMinimum(1);
        tableView = new QTableView(Sales);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 20, 401, 381));
        pushButton = new QPushButton(Sales);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(570, 350, 101, 23));
        pushButton_2 = new QPushButton(Sales);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1120, 40, 101, 23));
        tableView_2 = new QTableView(Sales);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(700, 20, 401, 371));
        label = new QLabel(Sales);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(430, 40, 47, 13));
        label_2 = new QLabel(Sales);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(430, 70, 61, 20));
        label_3 = new QLabel(Sales);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(430, 120, 47, 13));
        label_4 = new QLabel(Sales);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(440, 140, 47, 13));
        label_5 = new QLabel(Sales);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(440, 180, 61, 16));
        label_11 = new QLabel(Sales);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(430, 210, 71, 16));
        name_goods_box = new QLineEdit(Sales);
        name_goods_box->setObjectName(QString::fromUtf8("name_goods_box"));
        name_goods_box->setGeometry(QRect(530, 30, 113, 20));
        category_good_box = new QLineEdit(Sales);
        category_good_box->setObjectName(QString::fromUtf8("category_good_box"));
        category_good_box->setGeometry(QRect(530, 70, 113, 20));
        name_company_box = new QLineEdit(Sales);
        name_company_box->setObjectName(QString::fromUtf8("name_company_box"));
        name_company_box->setGeometry(QRect(530, 110, 113, 20));
        price_box = new QLineEdit(Sales);
        price_box->setObjectName(QString::fromUtf8("price_box"));
        price_box->setGeometry(QRect(520, 140, 113, 20));
        measure_box = new QLineEdit(Sales);
        measure_box->setObjectName(QString::fromUtf8("measure_box"));
        measure_box->setGeometry(QRect(530, 180, 113, 20));

        retranslateUi(Sales);

        QMetaObject::connectSlotsByName(Sales);
    } // setupUi

    void retranslateUi(QDialog *Sales)
    {
        Sales->setWindowTitle(QApplication::translate("Sales", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("Sales", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\227\320\260\320\272\320\260\320\267", nullptr));
        pushButton_2->setText(QApplication::translate("Sales", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\227\320\260\320\272\320\260\320\267", nullptr));
        label->setText(QApplication::translate("Sales", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QApplication::translate("Sales", "\320\232\320\260\321\202\320\265\320\263\320\276\321\200\320\270\321\217", nullptr));
        label_3->setText(QApplication::translate("Sales", "\320\232\320\276\320\274\320\277\320\260\320\275\320\270\321\217", nullptr));
        label_4->setText(QApplication::translate("Sales", "\320\246\320\265\320\275\320\260", nullptr));
        label_5->setText(QApplication::translate("Sales", "\320\230\320\267\320\274\320\265\321\200\320\265\320\275\320\270\320\265", nullptr));
        label_11->setText(QApplication::translate("Sales", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sales: public Ui_Sales {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALES_H
