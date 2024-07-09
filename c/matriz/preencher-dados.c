#include <stdio.h>

int main(){
  int matrez[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("Digite o valor da posição %d %d: ",i,j);
      scanf("%d",&matrez[i][j]);
    }
  }
  for(int i=0;i<3;i++){
    printf("\n");
    for(int j=0;j<3;j++){
      printf("%d ",matrez[i][j]);
    }
  }
}