#include <iostream>
using namespace std;

class Data {
private:
  int dia;
  int mes;
  int ano;

public:
  Data(int dia, int mes, int ano) : dia(dia), mes(mes), ano(ano) {};

  int getDia(){return dia;}
  int getMes(){return mes;}
  int getAno(){return ano;}

  string getData() const{
    return to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano);
  }
};