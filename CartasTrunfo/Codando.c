#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char codigo1[4];
    int populacao1;
    float area1, pib1;
    int pontos_turisticos1;

    // Declaração das variáveis para a segunda carta
    char codigo2[4];
    int populacao2;
    float area2, pib2;
    int pontos_turisticos2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Codigo da cidade (ex: A01): ");
    scanf("%3s", codigo1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n");

    // Cadastro da segunda carta
    printf("Cadastro da segunda carta:\n");
    printf("Codigo da cidade (ex: B02): ");
    scanf("%3s", codigo2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    printf("\n");

    // Exibição dos dados cadastrados
    printf("Carta 1 - %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n\n", pontos_turisticos1);

    printf("Carta 2 - %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);

    return 0;
}