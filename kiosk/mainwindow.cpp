#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPushButton"
#include "QDesktopWidget"
#include <iostream>

using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    int current_positiony=0;
    const int width = QApplication::desktop()->width();
    const int height = QApplication::desktop()->height();

    QPushButton* button1 = new QPushButton("1",this);
    button1 -> setGeometry(QRect(QPoint(0,current_positiony),QSize((width/3),(height/5))));

    current_positiony = (height/5)+current_positiony;
    QPushButton* button2 = new QPushButton("2",this);
    button2 -> setGeometry(QRect(QPoint(0,current_positiony),QSize((width/3),(height/5))));

    current_positiony = (height/5)+current_positiony;
    QPushButton* button3 = new QPushButton("3",this);
    button3 -> setGeometry(QRect(QPoint(0,current_positiony),QSize((width/3),(height/5))));

    current_positiony = (height/5)+current_positiony;
    QPushButton* button4 = new QPushButton("4",this);
    button4 -> setGeometry(QRect(QPoint(0,current_positiony),QSize((width/3),(height/5))));

    current_positiony = 0;
    QPushButton* button5 = new QPushButton("5",this);
    button5 -> setGeometry(QRect(QPoint((width-(width/3)),current_positiony),QSize((width/3),(height/5))));

    current_positiony = (height/5)+current_positiony;
    QPushButton* button6 = new QPushButton("6",this);
    button6 -> setGeometry(QRect(QPoint((width-(width/3)),current_positiony),QSize((width/3),(height/5))));

    current_positiony = (height/5)+current_positiony;
    QPushButton* button7 = new QPushButton("7",this);
    button7 -> setGeometry(QRect(QPoint((width-(width/3)),current_positiony),QSize((width/3),(height/5))));

    current_positiony = (height/5)+current_positiony;
    QPushButton* button8 = new QPushButton("8",this);
    button8 -> setGeometry(QRect(QPoint((width-(width/3)),current_positiony),QSize((width/3),(height/5))));

    //connect(button1, &QPushButton::clicked, this, &MainWindow::choosing);
    connect(button1 , &QPushButton::clicked, [this](){choosing(1);}); // değiken gönderiyor
    connect(button2 , &QPushButton::clicked, [this](){choosing(2);});
    connect(button3 , &QPushButton::clicked, [this](){choosing(3);});
    connect(button4 , &QPushButton::clicked, [this](){choosing(4);});
    connect(button5 , &QPushButton::clicked, [this](){choosing(5);});
    connect(button6 , &QPushButton::clicked, [this](){choosing(6);});
    connect(button7 , &QPushButton::clicked, [this](){choosing(7);});
    connect(button8 , &QPushButton::clicked, [this](){choosing(8);});

    button1 -> show();
    button2 -> show();
    button3 -> show();
    button4 -> show();
    button5 -> show();
    button6 -> show();
    button7 -> show();
    button8 -> show();
}

int MainWindow::choosing(int a)
{
    cout << "Button :" << a << endl;

    return 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}
