#include "mainwindow.h"

#include <QApplication>
#include <QProcess>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QObject *parent;
    QString program = "C:/Users/kta67/Desktop/VendingMachine/Vending-Machine/Vending.exe";
    QStringList arguments;
    arguments << "-q" <<"4" << "1";

    QProcess *myProcess = new QProcess(parent);
    myProcess->start(program, arguments);


    return a.exec();
}
