#include <stdio.h>

typedef struct {
  int hora;
  int minutos;
  int segundos;
} Horario;

typedef struct {
  int dia;
  int mes;
  int ano;
} Data;

typedef struct {
  Data data;
  Horario horario;
  char texto[100];
} Compromisso;

int premeira() {
  // Exemplo de uso
  Compromisso compromisso1;
  compromisso1.data.dia = 15;
  compromisso1.data.mes = 10;
  compromisso1.data.ano = 2023;
  compromisso1.horario.hora = 14;
  compromisso1.horario.minutos = 30;
  compromisso1.horario.segundos = 0;
  strcpy(compromisso1.texto, "Reunião com o time");

  printf("Compromisso: %d/%d/%d - %02d:%02d:%02d - %s\n",
         compromisso1.data.dia, compromisso1.data.mes, compromisso1.data.ano,
         compromisso1.horario.hora, compromisso1.horario.minutos,
         compromisso1.horario.segundos, compromisso1.texto);

  return 0;
}