#include <stdio.h>

#define TAMANHO 3

void inicializar_tabuleiro(char tabuleiro[TAMANHO][TAMANHO]) {
  for (int i = 0; i < TAMANHO; i++) {
    for (int j = 0; j < TAMANHO; j++) {
      tabuleiro[i][j] = ' ';
    }
  }
}

void exibir_tabuleiro(char tabuleiro[TAMANHO][TAMANHO]) {
  printf("  1 2 3\n");
  for (int i = 0; i < TAMANHO; i++) {
    printf("%d ", i + 1);
    for (int j = 0; j < TAMANHO; j++) {
      printf("%c ", tabuleiro[i][j]);
    }
    printf("\n");
  }
}

int posicao_disponivel(char tabuleiro[TAMANHO][TAMANHO], int linha, int coluna) {
  return tabuleiro[linha - 1][coluna - 1] == ' ';
}

void fazer_jogada(char tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, char simbolo) {
  tabuleiro[linha - 1][coluna - 1] = simbolo;
}

int jogo_terminou(char tabuleiro[TAMANHO][TAMANHO], char simbolo) {
  // Verifica linhas
  for (int i = 0; i < TAMANHO; i++) {
    if (tabuleiro[i][0] == simbolo && tabuleiro[i][1] == simbolo && tabuleiro[i][2] == simbolo) {
      return 1;
    }
  }

  // Verifica colunas
  for (int j = 0; j < TAMANHO; j++) {
    if (tabuleiro[0][j] == simbolo && tabuleiro[1][j] == simbolo && tabuleiro[2][j] == simbolo) {
      return 1;
    }
  }

  // Verifica diagonais
  if (tabuleiro[0][0] == simbolo && tabuleiro[1][1] == simbolo && tabuleiro[2][2] == simbolo) {
    return 1;
  }
  if (tabuleiro[0][2] == simbolo && tabuleiro[1][1] == simbolo && tabuleiro[2][0] == simbolo) {
    return 1;
  }

  // Verifica empate
  for (int i = 0; i < TAMANHO; i++) {
    for (int j = 0; j < TAMANHO; j++) {
      if (tabuleiro[i][j] == ' ') {
        return 0; // Jogo continua
      }
    }
  }

  return 2; // Empate
}

int main() {
  char tabuleiro[TAMANHO][TAMANHO];
  char jogador_atual = 'X';
  int linha, coluna;

  // Inicializa o tabuleiro
  inicializar_tabuleiro(tabuleiro);

  // Loop do jogo
  while (1) {
    // Exibe o tabuleiro
    exibir_tabuleiro(tabuleiro);

    // Solicita a jogada do jogador
    printf("Jogador %c, digite a linha e a coluna (ex: 1 2): ", jogador_atual);
    scanf("%d %d", &linha, &coluna);

    // Verifica se a posição é válida
    if (linha < 1 || linha > TAMANHO || coluna < 1 || coluna > TAMANHO || !posicao_disponivel(tabuleiro, linha, coluna)) {
      printf("Posição inválida! Tente novamente.\n");
      continue;
    }

    // Faz a jogada
    fazer_jogada(tabuleiro, linha, coluna, jogador_atual);

    // Verifica se o jogo terminou
    int resultado = jogo_terminou(tabuleiro, jogador_atual);
    if (resultado == 1) {
      exibir_tabuleiro(tabuleiro);
      printf("Parabéns, jogador %c venceu!\n", jogador_atual);
      break;
    } else if (resultado == 2) {
      exibir_tabuleiro(tabuleiro);
      printf("Empate!\n");
      break;
    }

    // Troca o jogador
    jogador_atual = (jogador_atual == 'X') ? 'O' : 'X';
  }

  return 0;
}