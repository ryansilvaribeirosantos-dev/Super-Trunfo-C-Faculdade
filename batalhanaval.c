#include <stdio.h>

int main() {
    // Matriz 10x10 representando o tabuleiro
    int tabuleiro[10][10] = {0};

    // NAVIOS (Valor 3)
    for (int i = 0; i < 3; i++) {
        tabuleiro[2][3+i] = 3; // Horizontal
        tabuleiro[5+i][1] = 3; // Vertical
    }

    // HABILIDADES ESPECIAIS (Valor 1 para a área de efeito)
    
    // 1. Cruz
    int centroX = 2, centroY = 8;
    for (int i = 0; i < 5; i++) {
        tabuleiro[centroX][6+i] = 1; // Linha
        tabuleiro[0+i][centroY] = 1; // Coluna
    }

    // 2. Octaedro (Losango)
    int oX = 7, oY = 7;
    tabuleiro[oX][oY] = 1;         // Centro
    tabuleiro[oX-1][oY] = 1;       // Cima
    tabuleiro[oX+1][oY] = 1;       // Baixo
    tabuleiro[oX][oY-1] = 1;       // Esquerda
    tabuleiro[oX][oY+1] = 1;       // Direita

    // EXIBIÇÃO DO TABULEIRO
    printf("--- BATALHA NAVAL: OCEANIC GAMES ---\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}