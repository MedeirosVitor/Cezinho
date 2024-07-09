#include <stdio.h>
#ifndef BANCO_H
#define BANCO_H

int banco() {
  int c, escolha, periodo; 
  float valores = 0, saldo = 8000;
  printf("Escolha a funcao bancária\n depósito(1), saque(2), extrato(3), empréstimo(4), sair(0)\n");
  scanf("%d",&escolha);
  
  switch (escolha){
    case 1:
    printf("escolha o valor do depósito\n");
      scanf("%f", &valores);
      saldo = saldo + valores;
      printf("Saldo atual: %.2f\n", saldo);
      break;
    case 2:
    printf("escolha o valor a ser sacado\n");
      scanf( "%f", &valores);
      if(saldo<valores){
        printf("Saldo insuficiente\n");
      }
      else if (saldo>=valores){
      saldo = saldo - valores;
      printf("Saldo atual: %.2f\n", saldo);
      }
      break;
    case 3:
    printf("escolha o periodo do extrato\n");
      scanf( "%d", &periodo);
      printf("Extrato do periodo %d gerado com sucesso\n", periodo);
      break;
    case 4:
    printf("escolha o valor do empréstimo\n");
      scanf( "%f", &valores);
      c = (valores>10000) ? printf("empréstimo não aprovado\n") : printf("vamos pensar no seu caso");
      break;
    default:
    printf("Opção inválida");
  }
  return 0;
}

#endif