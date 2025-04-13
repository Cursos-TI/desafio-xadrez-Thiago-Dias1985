
#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {

    int i, mov,movimento_completo;

    
    //movimento do bispo:
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

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
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

   
        printf("MOVIMENTO TORRE :\n");
        printf("escolha quantas casas deseja mover a TORRE:\n");
        scanf ("%d",&mov); 
        printf("*************************\n");

        for(i = 0;i < mov; i++)
        {
            printf("%d - para direita \n",i+1);
        }
    //movimento da rainha:
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

        printf("MOVIMENTO DA RAINHA\n");
        printf("escolha quantas casas deseja mover a RAINHA:\n");
        scanf ("%d",&mov);
        printf("*************************\n");

        for(i = 0; i < mov ; i++)
        {
            printf("%d para a esquerda \n", i+1);
        }
    //movimento do cavalo:
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    
        printf("MOVIMENTO DO CAVALO:\n");
        printf("escolha como deseja mover o CAVALO :\n");
        printf("1 - para cima e a direita \n");
        printf("2 - para cima e para esquerda \n");
        printf("3 - para baixo e para direita\n");
        printf("4 - para baixo e para esquerda \n");
        printf("5 - para esquerda e para cima \n");
        printf("6 - para esquerda e para baixo \n");
        printf("7 - para direita e para cima \n");
        printf("8 - para direita e para baixo \n");
        printf("***************************\n");

        scanf("%d",&movimento_completo);
        switch (movimento_completo)
        {
        case 1 :
        printf("para cima e a direita \n");
        movimento_completo =1;
        while (movimento_completo --)
        {
            for (int i = 0; i <2 ; i++)
            {
                printf("para cima\n");
            }
            printf("para direita\n");
        }
        break;

        case 2 :
        printf("para cima e para esquerda \n");
        movimento_completo =1;
        while (movimento_completo --)
        {   
            for (int i = 0; i <2 ; i++)
            {
                printf("para cima\n");
            }
            printf("para esquerda\n");
        }
        break;

        case 3 :
        printf("para baixo e para direita\n");
        movimento_completo =1;
        while (movimento_completo --)
        {
            for (int i = 0; i <2 ; i++)
            {
                printf("para baixo\n");
            }
            printf("para direita\n");
        }
        break;

        case 4 :
        printf("para baixo e para esquerda\n");
        movimento_completo =1;
        while (movimento_completo --)
        {   
            for (int i = 0; i <2 ; i++)
            {   
                printf("para baixo\n");
            }
            printf("para esquerda\n");
        }
        break;

        case 5 :
        printf("para esquerda e para cima \n");
        movimento_completo =1;
        while (movimento_completo --)
        {
            for (int i = 0; i <2 ; i++)
            {
                printf("para esquerda\n");
            }
            printf("para cima\n");
        }
        break;

        case 6 :
        printf("para esquerda e para baixo \n");
        movimento_completo =1;
        while (movimento_completo --)
        {
            for (int i = 0; i <2 ; i++)
            {
                printf("para esquerda\n");
            }
            printf("para baixo\n");
        }
        break;

        case 7 :
        printf("para direita e para cima \n");
        movimento_completo =1;
        while (movimento_completo --)
        {
            for (int i = 0; i <2 ; i++)
            {
                printf("para direita \n");
            }
            printf("para cima \n");
        }
        break;

        case 8 :
        printf("para direita e para baixo \n");
        movimento_completo =1;
        while (movimento_completo --)
        {
            for (int i = 0; i <2 ; i++)
            {
                printf("para direita \n");
            }
            printf("para baixo \n");
        }
        break;
        
        default:
        printf("movimento invalido \n");
            break;
        }
        
        

    
    
    
   
  
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
