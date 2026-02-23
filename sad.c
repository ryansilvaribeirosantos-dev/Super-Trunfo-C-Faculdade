#include <stdio.h>

int main() {
    char estado;
    char codigo[5];
    char nomeCidade[50];
    unsigned long int populacao;
    int pontosTuristicos;
    float area, pib, densidade, pibPerCapita;

    printf("--- Cadastro de Carta ---\n");
    
    printf("Estado (A-H): ");
    scanf(" %c", &estado);

    printf("Codigo da Carta: ");
    scanf("%s", codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade);

    printf("Populacao: ");
    scanf("%lu", &populacao);

    printf("Area (km2): ");
    scanf("%f", &area);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib);

    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos);

    // CALCULO CORRIGIDO
    // Multiplicamos o PIB por 1 bilhao antes de dividir para evitar o 0.00
    densidade = (float)populacao / area; 
    pibPerCapita = (pib * 1000000000.0) / (float)populacao; 

    printf("\n--- Resultados ---\n");
    printf("Estado: %c | Codigo: %s | Cidade: %s\n", estado, codigo, nomeCidade);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita);

    return 0;
}