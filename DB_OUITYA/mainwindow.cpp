#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sales.h"

#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include <QtSql>
#include <QtGui>
#include <QtCore>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
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

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:\\apteka.sqlite");
    db.open();
    QSqlTableModel *model = new QSqlTableModel(this,db);
    model->setTable("Category");
    model->select();
    model->setHeaderData(0, Qt::Horizontal, tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, tr("Название"));

    ui->tableView->setModel(model);
    ui->tableView->show();

//    ui->textEdit->clear();
//    QSqlQuery queryINShow;
//    queryINShow.exec("Select * FROM Category;");
//    while (queryINShow.next())
//    {
//    QString _id = queryINShow.value(0).toString();
//    QString name = queryINShow.value(1).toString();
//    ui->textEdit->insertPlainText(_id+" "+name+"\n");
//    }
}

void MainWindow::on_pushButton_2_clicked()
{
    QSqlQuery queryINS;
    queryINS.exec("INSERT INTO Category (name_category) VALUES ('Категория');");

    ui->pushButton->click();

}

void MainWindow::on_pushButton_3_clicked()
{
    QSqlQuery queryINS;
    queryINS.exec("Delete FROM Category WHERE [name_category] = 'Категория';");
    ui->pushButton->click();
}

void MainWindow::on_pushButton_4_clicked()
{
    Sales sales;
    sales.setModal(true);
    sales.exec();
}
