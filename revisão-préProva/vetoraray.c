#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    char vetor[3][10] = {"marrom","azul","laranja"};
    for(int i = 0; i < 3; i++){
        printf("%s\n",vetor[i]);
    }
    return 0;
}
