#include <stdio.h>

int main() {


    //Declarar as variveis

    int idx_Torre;//Indice da Torre.
    int idx_Bispo = 0;//Indice do Bispo.
    int idx_Rainha = 0;//Indice da Rainha.
    int idx_Cavalo = 0; //Indice do Cavalo.

    //Mover a Torra.
    printf("Movendo a Torre: \n");

    printf("-------------------------\n");
        for(idx_Torre = 1; idx_Torre <=5; idx_Torre++){
           printf("Direita. \n"); //Direçao do movimento da torre.
        }

    printf("-------------------------\n");//Traçar uma linha.
        printf("\n"); //Pular uma linha.


    //Mover o Bispo.
    printf("Movendo o Bispo: \n");

    printf("-------------------------\n");//Traçar uma linha.

        while (idx_Bispo < 5){

            printf("Cima, Direita. \n");//Direção do movimento
            
            
            idx_Bispo++;//incremento

        }
      
    printf("-------------------------\n"); //Traçar uma linha.

    printf("\n"); //Pular uma linha.

   
   
    //Mover a Rainha.

   printf("Movendo a Rainha: \n");

   printf("-------------------------\n");//Traçar uma linha.

   do
   {
    
        printf("Esquerda. \n");//Pular uma linha.

        idx_Rainha++;//Incremento.

   } while (idx_Rainha <8);

   printf("-------------------------\n");// Traçar uma linha.

   printf("\n"); //Pular uma linha.

   printf("Movendo o Cavalo: \n");

   printf("--------------------------\n");//Traçar uma linha.

   
   do //Loop "do While" executa a ação uma vêz antes de testar, então começar por este.
   {
        //Executar o "for" com "idx_Cavalo" iniciando com 0 até 1.
        for(idx_Cavalo = 0; idx_Cavalo <= 1; idx_Cavalo++){
            printf("Baixo. \n");//Direção do movimento.
        }

        printf("Esquerda. \n");//Direção do movimento..
    

   } while (idx_Cavalo < 1);//idx_Cavalo sai do "for" com valor == 1, condição falsa, sai do loop.

   printf("----------------------------------- \n"); //Traçar uma linha.
   printf("\n"); //Pular uma linha.












    return 0;
}
