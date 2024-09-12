#include "Pessoa.cpp"

class Funcionario : public Pessoa {
private:
  int cadastro;
  double salario;

public:
  Funcionario(int cadastro, double salario, std::string nome, long cpf, int dia, int mes, int ano, Endereco endereco):
Pessoa(nome, cpf, dia, mes, ano, endereco), 
cadastro{cadastro}, 
salario{salario}{}

int getCadastro(){return cadastro;}

double getSalario(){return salario;}

void setSalario(double salario){this->salario = salario;}
}