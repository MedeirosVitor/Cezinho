#include <stdio.h>
/*
int main(){
  int primeiro, *a, x;
  char segundo, *b, y;
  float teruceiro, *c, z;
  printf("Digite um real e um char e m float: ");
  scanf("%d %c %f", &primeiro, &segundo, &teruceiro);
  a = &primeiro;
  b = &segundo;
  c = &teruceiro;
  printf("\nPrimeiro numero %d\nSegundo numero %c\nTerceiro %f", primeiro, segundo, teruceiro);
  *a = 10;
  *b = 'f';
  *c = 9.56321;
  printf("\n\n\n\nPrimeiro numero %d\nSegundo numero %c\nTerceiro %f", primeiro,segundo, teruceiro); 
}








void compare_and_print(int *a, int *b) {
    if (a > b) {
        printf("Conteúdo do maior endereço: %d\n", *a);
    } else {
        printf("Conteúdo do maior endereço: %d\n", *b);
    }
}

int main() {
    int x, y;

    // Ler os valores do teclado
    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);

    // Chamar a função para comparar os endereços e imprimir o conteúdo do maior endereço
    compare_and_print(&x, &y);

    return 0;
}

*/






int main() {
    // Declaração das variáveis
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    // Declaração dos ponteiros
    int *ptr_inteiro = NULL;
    float *ptr_real = NULL;
    char *ptr_caractere = NULL;

    // Associação dos ponteiros às variáveis
    ptr_inteiro = &inteiro;
    ptr_real = &real;
    ptr_caractere = &caractere;

    // Impressão dos valores antes da modificação
    printf("Valores antes da modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    // Modificação dos valores usando os ponteiros
    *ptr_inteiro = 20;
    *ptr_real = 6.28;
    *ptr_caractere = 'B';

    // Impressão dos valores após a modificação
    printf("\nValores apos a modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
