#include "Pessoa.cpp"

class Aluno: public Pessoa{
private:
  int codigoCurso;

public:
Aluno(int codigoCurso, std::string nome, long cpf, int dia, int mes, int ano, Endereco endereco):
Pessoa(nome, cpf, dia, mes, ano, endereco),
codigoCurso(codigoCurso){}

int getCodigoCurso(){return codigoCurso;}

void setCodigoCurso(int codigoCurso){this->codigoCurso = codigoCurso;}
};