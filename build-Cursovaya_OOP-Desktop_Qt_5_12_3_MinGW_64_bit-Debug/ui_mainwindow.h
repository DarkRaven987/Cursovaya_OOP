/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralWidget;
    QPushButton *exitButton;
    QPushButton *medsZvit;
    QPushButton *prodsZvit;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *meds;
    QMenu *prods;
    QMenu *menu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(381, 262);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(381, 262));
        MainWindow->setMaximumSize(QSize(381, 262));
        MainWindow->setBaseSize(QSize(0, -31072));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(210, 190, 121, 41));
        exitButton->setMinimumSize(QSize(0, 0));
        medsZvit = new QPushButton(centralWidget);
        medsZvit->setObjectName(QString::fromUtf8("medsZvit"));
        medsZvit->setGeometry(QRect(20, 20, 151, 71));
        prodsZvit = new QPushButton(centralWidget);
        prodsZvit->setObjectName(QString::fromUtf8("prodsZvit"));
        prodsZvit->setGeometry(QRect(20, 110, 151, 71));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        label->setGeometry(QRect(190, 20, 171, 161));
        label->setFrameShape(QFrame::NoFrame);
        label->setFrameShadow(QFrame::Plain);
        label->setPixmap(QPixmap(QString::fromUtf8("BIXBau4Y_400x400.jpg")));
        label->setScaledContents(true);
        label->setWordWrap(false);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 381, 21));
        menuBar->setDefaultUp(false);
        meds = new QMenu(menuBar);
        meds->setObjectName(QString::fromUtf8("meds"));
        prods = new QMenu(menuBar);
        prods->setObjectName(QString::fromUtf8("prods"));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(meds->menuAction());
        menuBar->addAction(prods->menuAction());
        menuBar->addAction(menu->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\236\320\261\320\273\321\226\320\272 \320\274\320\265\320\264\320\270\320\272\320\260\320\274\320\265\320\275\321\202\321\226\320\262", nullptr));
        action->setText(QApplication::translate("MainWindow", "\320\234\320\265\320\264\320\270\320\272\320\260\320\274\320\265\320\275\321\202\320\270", nullptr));
        exitButton->setText(QApplication::translate("MainWindow", "\320\222\320\270\321\205\321\226\320\264", nullptr));
        medsZvit->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\273\321\226\320\272 \320\274\320\265\320\264\320\270\320\272\320\260\320\274\320\265\320\275\321\202\321\226\320\262", nullptr));
        prodsZvit->setText(QApplication::translate("MainWindow", "\320\236\320\261\320\273\321\226\320\272 \320\274\320\265\320\264\320\270\320\272\320\260\320\274\320\265\320\275\321\202\321\226\320\262", nullptr));
        label->setText(QString());
        meds->setTitle(QApplication::translate("MainWindow", "\320\234\320\265\320\264\320\270\320\272\320\260\320\274\320\265\320\275\321\202\320\270", nullptr));
        prods->setTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\264\320\260\320\266\321\226", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
