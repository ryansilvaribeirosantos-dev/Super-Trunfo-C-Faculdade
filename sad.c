#include <stdio.h>

int main() {
    // Carta 1
    char estado1, codigo1[5], cidade1[50];
    unsigned long int pop1;
    float area1, pib1;

    // Carta 2
    char estado2, codigo2[5], cidade2[50];
    unsigned long int pop2;
    float area2, pib2;

    int opcao;

    // CADASTRO CARTA 1
    printf("--- Cadastro Carta 1 ---\n");
    printf("Estado (A-H): "); scanf(" %c", &estado1);
    printf("Codigo: "); scanf("%s", codigo1);
    printf("Cidade: "); scanf(" %[^\n]", cidade1);
    printf("Populacao: "); scanf("%lu", &pop1);
    printf("Area: "); scanf("%f", &area1);

    // CADASTRO CARTA 2
    printf("\n--- Cadastro Carta 2 ---\n");
    printf("Estado (A-H): "); scanf(" %c", &estado2);
    printf("Codigo: "); scanf("%s", codigo2);
    printf("Cidade: "); scanf(" %[^\n]", cidade2);
    printf("Populacao: "); scanf("%lu", &pop2);
    printf("Area: "); scanf("%f", &area2);

    // MENU DE COMPARAÇÃO
    printf("\nEscolha o atributo para comparacao:\n");
    printf("1. Populacao\n2. Area\nOpcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("\nAtributo: Populacao\n");
            if (pop1 > pop2) {
                printf("Vencedor: %s (Carta 1)\n", cidade1);
            } else if (pop2 > pop1) {
                printf("Vencedor: %s (Carta 2)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("\nAtributo: Area\n");
            if (area1 > area2) {
                printf("Vencedor: %s (Carta 1)\n", cidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s (Carta 2)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}