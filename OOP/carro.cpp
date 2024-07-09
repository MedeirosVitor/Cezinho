#include <iostream>
#include <string>

using namespace std; //

class Veiculo {
private:
  string marca;
  string modelo;
  int ano;
  double preco;

public:
  Veiculo() { // Método construtor
    marca = "";
    modelo = "";
    ano = 0;
    preco = 0.0;
  }

  Veiculo(string m,  string mod){
      marca = m;
      modelo = mod;
      ano = 2020;
      preco = 45000;
  }

  Veiculo(string m, string mod, int a, double p) {
    marca = m;
    modelo = mod;
    ano = a;
    preco = p;
  }

  void setMarca(string m) {
    marca = m;
  }

  string getMarca() const {
    return marca;
  }

  void setModelo(string mod) {
    modelo = mod;
  }


  string getModelo() const {
    return modelo;
  }

  void setAno(int a) {
    ano = a;
  }

  int getAno() const {
    return ano;
  }

  void setPreco(double p) {
    preco = p;
  }

  double getPreco() const {
    return preco;
  }

  // Método para imprimir informações do veículo
  void imprimirInformacoes() const {
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Ano: " << ano << endl;
    cout << "Preço: R$ " << preco << endl;
  }
};

int sapoha() {
  Veiculo carro1("Toyota", "Corolla", 2020, 80000.0);
  carro1.imprimirInformacoes();

  cout << endl;

  Veiculo carro2;
  // carro2.setMarca("Honda");
  // carro2.setModelo("Civic");
  // carro2.setAno(2018);
  // carro2.setPreco(75000.0);
  carro2.imprimirInformacoes();

 cout << endl;

   Veiculo carro3("Ford", "Fiesta");
    carro3.imprimirInformacoes();

  return 0;
}