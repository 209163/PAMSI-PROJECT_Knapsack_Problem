class Thief
{
  Store target;
  int knapsack_capacity; //pojemnosc plecaka, wypelniana przez konstruktor 
  int s=0; //ilosc skradzionych towarow
  int we=0; //faktyczna waga skradzionych towarow
  int* stolen_items; //przechowuje indeksy skradzionych towarow
public:
  Thief(int cap); //konstruktor - inicjujemy pojemnosc plecaka zlodzieja
  void target_spot(int n); //metoda spot - wypelnia sklep n towarami
  
  //Miejsce na implementacje algorytmow rozwiazujacych problem plecakowy
  
  void DP_approach();

};
