#ifndef THIEF_H
#define THIEF_H

class Thief
{
    Store target;
    int knapsack_capacity; //pojemnosc plecaka, wypelniana przez konstruktor
    int s; //ilosc skradzionych towarow
    int we; //faktyczna waga skradzionych towarow
    int* stolen_items; //przechowuje indeksy skradzionych towarow
  public:
    Thief(int cap); //konstruktor - inicjujemy pojemnosc plecaka zlodzieja
    void target_spot(int n); //metoda spot - wypelnia sklep n towarami
    int get_stolen_items_weight(int i);
    int get_stolen_items_value(int i);
    int get_target_size();

    //Miejsce na implementacje algorytmow rozwiazujacych problem plecakowy

    void DP_approach();
};

#endif // THIEF_H
