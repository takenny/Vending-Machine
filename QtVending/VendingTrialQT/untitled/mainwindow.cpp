#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mProcess = new QProcess(this);

    connect(mProcess, &QProcess::readyReadStandardOutput,[&]()
    {
       auto data = mProcess->readAllStandardOutput();
       ui->plainTextEdit->appendPlainText(data);
    });

    connect(mProcess, &QProcess::readyReadStandardError,[&]()
    {
        auto data = mProcess->readAllStandardError();
        ui->plainTextEdit->appendPlainText(data);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

//start button
void MainWindow::on_pushButton_clicked()
{
    auto program = "C:\\Users\\kta67\\Desktop\\VendingMachine\\Vending-Machine.exe";
    mProcess->setProgram(program);
    mProcess->start();
}

