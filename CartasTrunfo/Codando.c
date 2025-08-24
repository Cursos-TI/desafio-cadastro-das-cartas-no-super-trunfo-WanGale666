#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char nome1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pib_per_capita1;
    int pontos_turisticos1;

    // Declaração das variáveis para a segunda carta
    char nome2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pib_per_capita2;
    int pontos_turisticos2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");
    printf("Nome da cidade: ");
    scanf("%49s", nome1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    printf("\n");

    // Cadastro da segunda carta
    printf("Cadastro da segunda carta:\n");
    printf("Nome da cidade: ");
    scanf("%49s", nome2);
    printf("Populacao: ");
    scanf("%d", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    printf("\n");

    // Exibição dos dados cadastrados
    printf("Carta 1 - %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n\n", pib_per_capita1);

    printf("Carta 2 - %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_per_capita2); 

    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("\nA carta com maior numeros de pontos turisticos e: %s\n", nome1);
    } else if (pontos_turisticos2 > pontos_turisticos1) {
        printf("\nA carta com maior numeros de pontos turisticos e: %s\n", nome2);
    } else {
        printf("\nEmpate! Ambas as cartas tem o mesmo numero de pontos turisticos.\n");
    }

    if (pib_per_capita1 > pib_per_capita2) {
        printf("A carta com maior PIB per capita e: %s\n", nome1);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("A carta com maior PIB per capita e: %s\n", nome2);
    } else {
        printf("Empate! Ambas as cartas tem o mesmo PIB per capita.\n");
    }

    if (densidade1 < densidade2) {
        printf("A carta com maior densidade populacional e: %s\n", nome1);
    } else if (densidade2 < densidade1) {
        printf("A carta com maior densidade populacional e: %s\n", nome2);
    } else {
        printf("Empate! Ambas as cartas tem a mesma densidade populacional.\n");
    }   

    if (pib1 > pib2) {
        printf("A carta com maior PIB total e: %s\n", nome1);
    } else if (pib2 > pib1) {
        printf("A carta com maior PIB total e: %s\n", nome2);
    } else {
        printf("Empate! Ambas as cartas tem o mesmo PIB total.\n");
    }

    if (area1 > area2) {
        printf("A carta com maior area e: %s\n", nome1);
    } else if (area2 > area1) {
        printf("A carta com maior area e: %s\n", nome2);
    } else {
        printf("Empate! Ambas as cartas tem a mesma area.\n");
    }

    if (populacao1 > populacao2) {
        printf("A carta com maior populacao e: %s\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("A carta com maior populacao e: %s\n", nome2);
    } else {
        printf("Empate! Ambas as cartas tem a mesma populacao.\n");
    }

    return 0;
}