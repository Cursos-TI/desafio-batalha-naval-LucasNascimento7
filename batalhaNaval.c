#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    // Inicializa o tabuleiro com água (0)
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    // Definição fixa das coordenadas iniciais dos navios
    int linhaHorizontal = 2, colunaHorizontal = 4;
    int linhaVertical = 6, colunaVertical = 1;

    // Posiciona o navio horizontalmente
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3;
    }

    // Posiciona o navio verticalmente
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linhaVertical + i][colunaVertical] = 3;
    }

    // Exibe o tabuleiro
    printf("  ");
    for (int i = 0; i < 10; i++)
    {
        printf(" %c", linha[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i + 1);
        for (int j = 0; j < 10; j++)
        {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
