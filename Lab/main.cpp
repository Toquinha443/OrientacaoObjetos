#include "Funcionario.cpp"
#include <chrono>
#include <iostream>
#include <thread>

void clearConsole() {
#ifdef _WIN32
  int result = std::system("cls");
#else
  int result = std::system("clear");
#endif
  (void)result;
}

void clearLastLine() { std::cout << "\r" << std::string(50, ' ') << "\r"; }

void sleep(float tempo) {
  std::this_thread::sleep_for(
      std::chrono::milliseconds(static_cast<int>(tempo * 1000)));
}

void animateChange(int iterations = 5) {
  cout << endl;
  for (int i = iterations; i > 0; --i) {
    std::cout << "\rLIMPANDO EM " << i << "s ." << std::flush;
    sleep(0.3);

    clearLastLine();
    std::cout << "\rLIMPANDO EM " << i << "s .." << std::flush;
    sleep(0.3);

    clearLastLine();
    std::cout << "\rLIMPANDO EM " << i << "s ..." << std::flush;
    sleep(0.4);

    clearLastLine();
  }
}

int Pessoa::quantidade = 0;

int main() {

  Endereco e1("Av.Humberto de Alencar", "Assunção", "SBC", 123);
  Endereco e2("Rua das Flores", "Assunção", "SBC", 123);

  Funcionario f1(12345, 1500, "João", 12345678, 1, 1, 1990, e1);

  Pessoa *pessoas[2];

  pessoas[0] = &f1;

  for(int i = 0; i < 2; i++){
    cout << "Nome: " << pessoas[i]->getNome() << endl;
    cout << "Data de Nascimento: " << pessoas[i]->getData() << endl;
    cout << "Endereço: " << pessoas[i]->getEndereco() << endl;
  }
  
  animateChange();
  clearConsole();

  return 0;
}