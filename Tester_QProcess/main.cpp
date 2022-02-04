#include <QCoreApplication>
#include <QProcess>
#include <QDebug>

void printProcess();

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString program = "../Vending-Machine/Tester_QProcess/a.exe";

    QStringList arguments;
   // arguments << "-h" ;
    arguments<<"-q" << "4" << "1"; //arguments are purely for quarters 4 quarters and then selects option 1 from machine

    QProcess *myProcess = new QProcess();

    QProcess::connect(myProcess, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
        [=](int exitCode, QProcess::ExitStatus exitStatus){
           //qDebug()<<exitCode;
           // qDebug()<<exitStatus;
            qDebug()<<myProcess->readAllStandardOutput();
    });

    myProcess->start(program, arguments);
    return a.exec();
}
