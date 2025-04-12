#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int i, mov ;
    //movimento do bispo:
        printf("MOVIMENTO DO BISPO:\n");
        printf("escolha quantas casas deseja mover o BISPO:\n");
        scanf ("%d",&mov);
        printf("*************************\n");
        for(i = 0; i < mov; i++)
        {
            printf("%d - para cima \n",i+1);
            printf("%d - para a direita\n",i+1);
        }
    //movimento da torre:
        printf("MOVIMENTO TORRE :\n");
        printf("escolha quantas casas deseja mover a TORRE:\n");
        scanf ("%d",&mov); 
        printf("*************************\n");

        for(i = 0;i < mov; i++)
        {
            printf("%d - para direita \n",i+1);
        }
    //movimento da rainha:
        printf("MOVIMENTO DA RAINHA\n");
        printf("escolha quantas casas deseja mover a RAINHA:\n");
        scanf ("%d",&mov);
        printf("*************************\n");

        for(i = 0; i < mov ; i++)
        {
            printf("%d para a esquerda \n", i+1);
        }

    
    // Nível Novato - Movimentação das Peças
    //Bispo: 5 casas na diagonal superior direita
    //Torre: 5 casas para a direita
    //Rainha: 8 casas para a esquerda
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
