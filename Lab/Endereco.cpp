#include <iostream>
using namespace std;

class Endereco {
private:
  string rua;
  string bairro;
  string cidade;
  int numero;

public:
  Endereco(string rua, string bairro, string cidade, int numero) {
    this->rua = rua;
    this->bairro = bairro;
    this->cidade = cidade;
    this->numero = numero;
  }

  string getEndereco(){
    return rua + " " + to_string(numero) + " " + bairro + " " + cidade;
  };

};
