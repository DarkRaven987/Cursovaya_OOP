#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include <QtSql>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //Подключаем базу данных
   QSqlDatabase db;
   db = QSqlDatabase::addDatabase("QSQLITE");
   db.setDatabaseName("C:\\apteka.sqlite");
   db.open();

   //Осуществляем запрос
   QSqlQuery query;
   query.exec("SELECT Goods.name_good, Category.name_category FROM Category INNER JOIN Goods ON Category.id_category = Goods.category_good;");

   //Выводим значения из запроса
   while (query.next())
   {
   QString _id = query.value(0).toString();
   QString name = query.value(1).toString();
   ui->textEdit->insertPlainText(_id+" "+name+"\n");
   }

}
