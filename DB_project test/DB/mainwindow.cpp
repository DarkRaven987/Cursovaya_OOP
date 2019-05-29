#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include <QtSql>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //Подключаем базу данных
   QSqlDatabase db;
   db = QSqlDatabase::addDatabase("QSQLITE");
   db.setDatabaseName("C:\\apteka.sqlite");
   db.open();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->textEdit->clear();
    QSqlQuery queryINShow;
    queryINShow.exec("Select * FROM Category;");
    while (queryINShow.next())
    {
    QString _id = queryINShow.value(0).toString();
    QString name = queryINShow.value(1).toString();
    ui->textEdit->insertPlainText(_id+" "+name+"\n");
    }
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
