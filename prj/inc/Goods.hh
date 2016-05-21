class Goods
{
  string name;
  int weight;
  int value;
  bool steal_flag;
public:
  Goods();
  Goods(int w,int v);
  string get_name();
  //aby zaznaczyc przedmioty warte kradziezy
  //jest ustawiana przez metody rozwiazujace problem w klasie thief
  void set_steal_flag(); 
  //metoda sprawdza czy przedmiot warty kradziezy
  //return true-warty, false-niewarty
  bool worth_stealing(); 
  int get_value();
  int get_weight();
};
