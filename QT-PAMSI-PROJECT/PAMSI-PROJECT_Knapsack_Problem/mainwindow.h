#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Store.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int values[10];
    int weights[10];
    void set_value();
    void set_weight();

    //thief

    void target_spot(); //metoda spot - wypelnia sklep 10 towarami
    int get_target_weight(int i);
    int get_target_value(int i);
    int get_target_size();
    void set_stolen_items(int index, int value);
    int get_stolen_items(int i);
    int get_we();
    void set_we(int value);
    int get_worth_stealing(int i);
    int get_knapsack_capacity(){return knapsack_capacity;}

    //Miejsce na implementacje algorytmow rozwiazujacych problem plecakowy

    void DP_approach();

public slots:


private slots:
    void on_pushButton_clicked();


private:
    Ui::MainWindow *ui;
    Store target;
    int knapsack_capacity; //pojemnosc plecaka, wypelniana przez konstruktor
    int s; //ilosc skradzionych towarow
    int we; //faktyczna waga skradzionych towarow
    int* stolen_items; //przechowuje indeksy skradzionych towarow
};

#endif // MAINWINDOW_H
