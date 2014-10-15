#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <qpushbutton.h>
#include <QTextStream>
#include <QFile>
#include <QList>
#include <QDir>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    cout << "\n\n\nHELLO ???\n\n\n";

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

    QDir dir;
    QStringList filters;
    filters << "-" << ">" << "=" << ":";
    dir.setNameFilters(filters);



    List << "Q" << "A" << "Die" << "Blaw" << "Zebra" << "Justin";

    qSort(List);

    for(int i = 0; i < List.size(); ++i)
    {
        out << List.at(i) << endl;
    }

    out << QDir::homePath() << "\n\n\n\n";

 //   QFileInfoList List = dir.entryInfoList();

    for(int i = 0; i < List.size(); ++i)
    {
        QFileInfo fileInfo = List.at(i);
        out << QString("%1").arg(fileInfo.fileName()) << endl;
    }



    MainWindow w;
    w.show();

    return a.exec();
}
