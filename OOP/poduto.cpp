#include <iostream>
#include <string>

using namespace std;

class Produto {
private:
    int preco;
    string setor;
public:
    void setPreco(int preco = 0) {
        this->preco = preco;
        cout << "preco: " << preco << endl ;
    }
    void setSetor(string setor = "") {
        this->setor = setor;
        cout << "setor: " << setor << endl ;
    }
};

class Eletronico : public Produto { 
private:
    int tensao, potencia;
public:
    void setPotencia(int potencia = 0) { 
        this->potencia = potencia; 
        cout << "potencia: " << potencia << endl ;
    }
    void setTensao(int tensao = 0) { 
        this->tensao = tensao;
        cout << "tensao: " << tensao << endl ;
    }
};


int main() {
    Eletronico chuveiro;
    int a, c, d;
    string b;
    printf("Digite o preço A: ");
    cin >> a;
    printf("Digite o preço B: ");
    cin >> b;
    cin >> c;
    cin >> d;
    chuveiro.setPreco(a); 
    chuveiro.setSetor(b); 
    chuveiro.setPotencia(c);
    chuveiro.setTensao(d); 

    return 0; 
}