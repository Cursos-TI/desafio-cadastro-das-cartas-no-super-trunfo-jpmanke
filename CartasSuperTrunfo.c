#include <stdio.h>

int main(){

    // carta 1
    char Estado1;
    char codigo1[4];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibpercapita1;
    float superpoder1;

    // carta 2
    char Estado2;
    char codigo2[4];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibpercapita2;
    float superpoder2;

    printf("*** JOGO SUPER TRUNFO *** \n");
    printf("\n");

    // cadastro da carta 1
    printf("cadastro da carta 1\n");

    printf("digite o Estado (A-H): ");
    scanf(" %c", &Estado1);

    printf("digite o codigo da carta (Ex: A01): ");
    scanf("%s", codigo1);

    printf("digite a populacao: ");
    scanf("%lu", &populacao1);

    printf("digite a area em km²: ");
    scanf("%f", &area1);

    printf("digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = (float)(populacao1 / area1);
    printf("densidade Pouplacional e: %.2f\n", densidade1);

    pibpercapita1 = (float)(pib1 / populacao1);
    printf("pib per capita e: %.2f\n", pibpercapita1);

    superpoder1 = (float)(populacao1 + area1 + pib1 + pibpercapita1 + (1 / densidade1));
    printf("Super Poder carta 1 e : %.2f\n", superpoder1);
    printf("\n");

    // cadastro da carta 2
    printf("cadastro da carta 2\n");

    printf("digite o Estado (A-H): ");
    scanf(" %c", &Estado2);

    printf("digite o codigo da carta (Ex: B01): ");
    scanf("%s", codigo2);

    printf("digite a populacao: ");
    scanf("%lu", &populacao2);

    printf("digite a area em km²: ");
    scanf("%f", &area2);

    printf("digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = (float)(populacao2 / area2);
    printf("densidade Pouplacional e:  %.2f\n", densidade2);

    pibpercapita2 = (float)(pib2 / populacao2);
    printf("pib per capita e: %.2f\n", pibpercapita2);

    superpoder2 = (float)(populacao2 + area2 + pib2 + pibpercapita2 + (1 / densidade2));
    printf("Super Poder carta 2 e : %.2f\n\n", superpoder2);

    // Comparacao das cartas
    printf("Comparacao de Cartas:\n");
    printf("População Carta 1 venceu: %d\n", populacao1 > populacao2);
    printf("PIB Carta 1 venceu: %d\n", pib1 > pib2);
    printf("Pontos Turísticos Carta 1 venceu: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Super Poder Carta 1 venceu: %d\n", superpoder1 > superpoder2);

    return 0;
}