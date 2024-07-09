#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void main() {
  printf("\a");
  int opcao, coronometuro, i;
  printf("Escolha a opção desejada:\n1 - horário atual\n2 - cronometro\n3 - "
         "temporizador\n");
  scanf("%d", &opcao);
  switch (opcao) {
  case 1:
    printf("O horário atual é: %s\n", __TIME__);
    break;
  case 2:
    printf("Digite em segundos quanto tempo deseja:\n");
    scanf("%d", &coronometuro);
    for (i = 0; i <= coronometuro; i++) {
      fflush(stdout);
      sleep(1);
      printf("\r%d", i);
    }
    break;
  case 3:
    printf("Digite em segundos quanto tempo deseja:\n");
    scanf("%d", &coronometuro);
    for (i = coronometuro; i > -1; i--) {
      fflush(stdout);
      sleep(1);
      printf("\r %d \a", i);
    }
    break;
  }
}
