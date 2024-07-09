#include <iostream>
#include <string>

using namespace std;

class pessoa{
private:
  string nome;
  int idade;
  double altura;
public:
  pessoa(string nome, int idade, double altura){
    this->nome = nome;
    this->idade = idade;
    this->altura = altura;
  }
  void imprimirinformacoes(){
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Altura: " << altura << endl;
  }
};

int crasse(){
  pessoa neymar("neymar", 25, 1.75);
  neymar.imprimirinformacoes();
  pessoa messi("messi", 30, 1.80);
  messi.imprimirinformacoes();
  return 0;
}