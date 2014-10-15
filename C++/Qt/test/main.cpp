#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <qpushbutton.h>
#include <QTextStream>
#include <QFile>
#include <QList>
#include <QTime>
#include <QDir>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    cout << "\n\n\nHELLO ???\n\n\n";

//FILE INPUT / OUTPUT
    QFile output("Output");
    QFile input("hashOutput.txt");
    QString line; //LINE FOR INPUT

    if(output.open(QFile::WriteOnly))
    {
        QTextStream out(&output);
        out << "Blaw blaw this is outputting to a file .. blawwwww" << endl;
    }

    if(input.open(QFile::ReadOnly))
    {
        QTextStream in(&input);
        QTextStream out(stdout);

        in.setCodec("UTF-8");
        out.setCodec("UTF-8");


        do
        {
            line = in.readLine();
            out << line << endl;
        }while (!line.isNull());


    }


    QTextStream out(stdout);
    QList<QString> List;




//LIST'S Qts Containers..
    List << "Q" << "A" << "Die" << "Blaw" << "Zebra" << "Justin";

    qSort(List);

    for(int i = 0; i < List.size(); ++i)
    {
        out << List.at(i) << endl;
    }

    out << QDir::homePath() << "\n\n\n\n";


//CONCATINATION
    QString Ret = "";
    for(int i = 0; i < List.size(); ++i)
    {
        Ret += List.at(i);
    }
    out << Ret << "\n\n";



//FILTER FILE EXTENTIONS
    QDir dir;
    QStringList filters;
    filters << ".h" << ".txt";
    dir.setNameFilters(filters);
    QFileInfoList List2 = dir.entryInfoList();

    for(int i = 0; i < List2.size(); ++i)
    {
        QFileInfo fileInfo = List2.at(i);
        out << QString("%1").arg(fileInfo.fileName());
        out << endl;
    }



    QTime currentTime = QTime::currentTime();
    QString currentTimeStr = currentTime.toString(Qt::LocalDate);
    out << currentTimeStr << endl;



    MainWindow w;
    w.show();

    return a.exec();
}
