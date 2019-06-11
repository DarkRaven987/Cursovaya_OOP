#ifndef SALES_H
#define SALES_H

#include <QDialog>

namespace Ui {
class Sales;
}

class Sales : public QDialog
{
    Q_OBJECT

public:
    explicit Sales(QWidget *parent = nullptr);
    ~Sales();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::Sales *ui;
};

#endif // SALES_H
