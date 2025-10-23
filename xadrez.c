#include <stdio.h>

int main() {


    //Declarar as variveis

    int idx_Torre;//Indice da Torre.
    int idx_Bispo = 0;//Indice do Bispo.
    int idx_Rainha = 0;//Indice da Rainha.

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


    return 0;
}
