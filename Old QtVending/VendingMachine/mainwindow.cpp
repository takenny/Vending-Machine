#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
#include <QFileInfo>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked() //when button clicked, start exe. like power on button //display text to label from exe
{
    //open exe
    QString program = "C:\\Users\\kta67\\Desktop\\VendingMachine\\Vending-Machine\\a.exe";

    QProcess *myProcess = new QProcess();
    myProcess->start(program);
}

