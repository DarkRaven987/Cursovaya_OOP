#include "mainwindow.h"
#include <QApplication>
#include <string.h>
#include <datetimeapi.h>
using namespace std;

class Basa
{
protected:
    int rowid_category;
    int id_category;
    string name_category;

    int rowid_good;
    int id_good;
    string name_good;
    int category_good;
    string name_company;
    int price;
    string measure;

    int rowid_sales;
    int id_sale;
    int id_good_sales;
    int quant_sale;
    int sum_sale;
    string date_sale;

public:
    virtual void Sort()=0;//функция сортировки
    virtual void Search()=0;//функция поиска
    virtual ~Basa();//виртуалный деструктор
};

class Category : public Basa
{
public:
    Category(int r, int i, string n)
    {
        rowid_category=r;
        id_category=i;
        name_category=n;
    }
    ~Category();
    void Sort()
    {
        //переопределение виртуальной функции сортировки
    }
    void Search()
    {
        //переопределение виртуальной функции поиска
    }
};

class Goods : public Basa
{
public:
    Goods(int r, int i, string n, int c, string a, int p, string m)
    {
        rowid_good=r;
        id_good=i;
        name_good=n;
        category_good=c;
        name_company=a;
        price=p;
        measure=m;
    }
    ~Goods();
    void Sort()
    {
        //переопределение виртуальной функции сортировки
    }
    void Search()
    {
        //переопределение виртуальной функции поиска
    }
};

class Sales : public Basa
{
public:
    Sales(int r, int i, int a, int q, int s, string d)
    {
        rowid_sales=r;
        id_sale=i;
        id_good_sales=a;
        quant_sale=q;
        sum_sale=s;
        date_sale=d;
    }
    ~Sales();
    void Sort()
    {
        //переопределение виртуальной функции сортировки
    }
    void Search()
    {
        //переопределение виртуальной функции поиска
    }
};

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
