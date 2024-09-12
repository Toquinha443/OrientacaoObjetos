#include "Data.cpp"
#include "Endereco.cpp"
#include <iostream>
using namespace std;

class Pessoa {
private:
  string nome;
  long cpf;
  string telefone;
  string email;
  Data nascimento;
  Endereco endereco;

public:
  static int quantidade;

  // Destrutor
  ~Pessoa() {}

  Pessoa(string nome, long cpf, int dia, int mes, int ano, Endereco endereco):
  nome{nome}, 
  cpf{cpf}, 
  nascimento{dia, mes, ano} ,
  endereco{endereco} 
  {
    quantidade++;
  }

  // Setters
  void setNome(string nome) { this->nome = nome; }

  void setCpf(long cpf) { this->cpf = cpf; }

  void setTelefone(string telefone) { this->telefone = telefone; }

  void setEmail(string email) { this->email = email; }

  // Getters
  string getNome() { return nome; }

  string getCpf() {
    return to_string(cpf); // Converte long para string
  }

  string getTelefone() { return telefone; }

  string getEmail() { return email; }

  void ImprimirDados(){
    cout << "Nome: " << nome << endl;
    cout << "Endereço: " << endereco.getEndereco() << endl;
    cout << "Data de Nascimento: " << nascimento.getData() << endl;
    cout << "Quantidade de Pessoas: " << quantidade << endl;
  }

  // Operador de comparação
  bool operator==(Pessoa &outro) {
    if (this->nome == outro.nome) {
      return true;
    } else {
      return false;
    }
  }
};
