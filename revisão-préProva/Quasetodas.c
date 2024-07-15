/* 
Quse todas, menos aquelas porcarias de struct e classes, 
fodasss, vou colocar esses outros todos em OPP 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

 /* teste de switch */
    int escolha = 0, numero = 1;
    printf("Escolha 1, 2, 3, 4, ou 5: ");
    scanf("%d",&escolha);
    switch (escolha){
        case 1:
 /* teste de do while */
            do {
                printf("Digite um numero(0 para terminar): ");
                scanf("%d",&numero);
                printf("%d",numero);
            }while(numero == 0);
            break;
        case 2:
 /* teste de loops aninhados */
            for(int i = 0; i < 5; i++){
                for(int j = 0; j<5; j++){
                    printf("%d",j+1);
                }
                printf("\n");
            };
            break;
        case 3:
 /* escrever arquivo */
            printf("caso 3");
            break;
        case 4:
 /* ponteiro */
            
            break;
        case 5:{
 /* arquivos */
            FILE *file;
            char texto[500] = "sdhfsdf sdf dsgfdhsd hdgfdg asdg dsa saighd sdkjf sdkf bdsfb sdk ef wfef  gdgfdguh hisdhfksfksdkjh ksdfkjsdhkdsf dhjfhefhf idjaeiffjewifweifeifeiii jfb sd dfksdfbdfbsdkfb dsf dskjfdjkb sdfbds";
            file = fopen("output/teste.txt","w");
            fprintf(file, "%s", texto);
            fclose(file);
            }
            break;
        default:
            printf("nao se aplica");    
    }
}