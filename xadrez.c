
#include <stdio.h>

//recursividade para simular o movimento da torre:
void mover_torre(int casas){
    if(casas>0){
        printf("para direita\n");
        mover_torre(casas-1);
    }
}

//possivel recursividade para simular o movimento do cavalo:
//void mover_cavalo(int casas){
//    if(casas>0){
//       printf("para cima\n");
//      printf("para cima\n");
//      printf("para direita\n");
//      mover_cavalo(casas-1);
//  }
//} 

//recursividade para simular movimento do bispo:
void mover_bispo(int casas){
    if(casas>0){
        printf("para cima\n");
        printf("para direita\n");
        mover_bispo(casas-1);
    }
}

// recursividade para simular movimneto da Rainha:
void mover_rainha(int casas){
    if(casas>0){
        printf("para esquerda\n");
        mover_rainha(casas-1);
    }

}    


// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int i, mov, movimento_L = 1;

    
    //movimento do bispo:
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

        printf("MOVIMENTO DO BISPO:\n");
        printf("*************************\n");
        mover_bispo(5);
        printf("\n\n");

    //movimento da torre:
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

        printf("MOVIMENTO TORRE :\n");
        printf("*************************\n");
        mover_torre(5);

        printf("\n\n");
                   
    //movimento da rainha:
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

        printf("MOVIMENTO DA RAINHA\n");
        printf("*************************\n");
        mover_rainha(8);
        
        printf("\n\n");

    //movimento do cavalo:
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

        printf("MOVIMENTO DO CAVALO:\n");
        printf("*************************\n");
        
        while (movimento_L --)
        {
            for (int i = 0; i <2 ; i++)
            {
                printf("para cima\n");
            }
            printf("para direita\n");
        }
        
        
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
