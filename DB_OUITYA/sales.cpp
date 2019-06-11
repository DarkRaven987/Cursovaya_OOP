#include "sales.h"
#include "ui_sales.h"

#include "QSqlQuery"
#include <QtSql>
#include <QtGui>
#include <QtCore>
#include "QtSql/QSqlDatabase"

Sales::Sales(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sales)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:\\apteka.sqlite");
    db.open();

    QSqlQueryModel *model;
    model = new QSqlQueryModel();
    model->setQuery("SELECT Goods.name_good, Category.name_category, Goods.name_company, Goods.price FROM Category INNER JOIN Goods ON Category.id_category = Goods.category_good;");

 //   QSqlTableModel *model = new QSqlTableModel(this,db);
 //   model->setTable("Category");
 //   model->select();
 //   model->setHeaderData(0, Qt::Horizontal, tr("ID"));
 //   model->setHeaderData(1, Qt::Horizontal, tr("Название"));

   ui->tableView->setModel(model);
   ui->tableView->resizeColumnsToContents();
  // ui->tableView->setColumnHidden(0, true);
   ui->tableView->show();
}

Sales::~Sales()
{
    delete ui;
}

void Sales::on_pushButton_clicked()
{
    //QSpinBox *sp = new QSpinBox(this);
    // добавление в таблицу sales
   // int sum = sp->value() *  ;
    //QSqlQuery queryINS;
   // queryINS.exec("INSERT INTO Sales (id_good, quant_sale, sum_sale, date_sale) VALUES ('Категория');");

}

void Sales::on_pushButton_2_clicked()
{
    // удаление из таблицы sales
}

void Sales::on_tableView_activated(const QModelIndex &index)
{
    // выбранная строка
    QString val = ui->tableView->model()->data(index).toString();
    QSqlQuery qry;
    qry.prepare("select * from goods where id_goods='"+val+"' or name_good='"+val+"' or category_good='"+val+"' or name_company='"+val+"' or price='"+val+"' or measure='"+val+"' ");
    if (qry.exec())
    {
        while(qry.next())
        {
           ui->name_goods_box->setText(qry.value(1).toString());
           ui->category_good_box->setText(qry.value(2).toString());
           ui->name_company_box->setText(qry.value(3).toString());
           ui->price_box->setText(qry.value(4).toString());
           ui->measure_box->setText(qry.value(5).toString());
        }
    }

}
