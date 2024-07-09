#include <iostream>
#include <string>

using namespace std;

class banco{
private:
  string nome;
  int numero_de_conta;
  double saldo;
public:
  banco(string nome, int numero_de_conta, double saldo) {
    nome = nome;
    numero_de_conta = numero_de_conta;
    saldo = saldo;
  }
  void consultar_saldo(){
    cout << "Saldo: " << saldo << endl;
  }
  void depositar(double valor){
    saldo += valor;
  }
  void saque(double valor){
    if(saldo >= valor){
      saldo -= valor;
    }
    else{
      cout << "Saldo insuficiente" << endl;
    }
  };
};


int main(){
  int c;
  printf("Escolha a operacao: \n1 - Consultar saldo\n2 - Depositar\n3 - Sacar");

  if (scanf(" %d", &c) != 1) {
    cout << "Error reading input." << endl;
    return 1;
  }

  banco minhaConta("João", 12345, 1000.0);
  double valor;

  switch (c) {
    case 1:
      minhaConta.consultar_saldo(); 
      break; 
    case 2:
      cout << "Valor a depositar: ";
      cin >> valor;
      minhaConta.depositar(valor);
      break; 
    case 3:
      cout << "Valor a sacar: ";
      cin >> valor;
      minhaConta.saque(valor);
      break; 
  }
  return 0;
}