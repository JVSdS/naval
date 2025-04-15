#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main(){


    int tabuleiro[LINHAS][COLUNAS]; //Declaração do array, ou seja, o tamanho do campo

    for (int i = 0; i < LINHAS; i++) //Declaração da "água"
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            tabuleiro[i][j] = 0;
        }
        
    }

    //Declaração do navio na horizontal
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;

    //Declaração do navio na vertical
    tabuleiro[6][3] = 3;
    tabuleiro[7][3] = 3;
    tabuleiro[8][3] = 3;

    //Declaração do navio na dianogonal direita
    tabuleiro[4][6] = 3;
    tabuleiro[3][7] = 3;
    tabuleiro[2][8] = 3;

    //Declaração do navio na diagonal esquerda
    tabuleiro[6][6] = 3;
    tabuleiro[7][7] = 3;
    tabuleiro[8][8] = 3;

    //Exposição do tabuleiro
    printf("   A B C D E F G H I J\n");
    for (int i = 0; i < LINHAS; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
