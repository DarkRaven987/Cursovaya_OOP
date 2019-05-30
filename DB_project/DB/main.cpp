#include "mainwindow.h"
#include <QApplication>
#include "QtSql/QSqlDatabase"
#include "QSqlQuery"
#include <QtSql>
#include <QtGui>
#include <QtCore>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
