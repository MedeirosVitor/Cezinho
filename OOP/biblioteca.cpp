#include <iostream>

using namespace std;

class Matematica{
    float v1; float v2;
public:
    void definir(float v1, float v2){
        this -> v1 = v1;
        this -> v2 = v2;
    }
};

class conteudos : public Matematica{
    string palavra; string frase;

};

int main(){
    printf("batatoso");
}