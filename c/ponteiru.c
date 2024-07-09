#include <stdio.h>

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