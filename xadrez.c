#include <stdio.h>

int main() {
    printf("--- DESAFIO XADREZ: NIVEL MESTRE ---\n\n");

    // Torre: 5 casas para a Direita (For)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Bispo: 5 casas na Diagonal (While com 2 variáveis)
    printf("\nMovimento do Bispo:\n");
    int b = 1;
    while (b <= 5) {
        printf("Casa %d: Cima e Direita\n", b);
        b++;
    }

    // Rainha: 8 casas para a Esquerda (Do-While)
    printf("\nMovimento da Rainha:\n");
    int r = 1;
    do {
        printf("Casa %d: Esquerda\n", r);
        r++;
    } while (r <= 8);

    // Cavalo: Movimento em L (Loops Aninhados com IF e Continue)
    printf("\nMovimento do Cavalo (2 Baixo, 1 Esquerda):\n");
    for (int i = 1; i <= 1; i++) {
        int j = 1;
        while (j <= 3) {
            if (j <= 2) {
                printf("Baixo\n");
            } else {
                printf("Esquerda\n");
            }
            j++;
        }
    }

    return 0;
}