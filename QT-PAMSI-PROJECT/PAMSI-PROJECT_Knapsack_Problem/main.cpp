#include "mainwindow.h"
#include <QApplication>
#include <QString>

#include <cstdio>
#include <unistd.h>
#include <string>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

#include "Goods.h"
#include "Store.h"
#include "Thief.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    for (int i=0; i<10 ; i++)
    {
        cout<<"values:"<<w.values[i]<<" "<<"weights:"<<w.weights[i]<<endl;
    }


    return a.exec();
}
