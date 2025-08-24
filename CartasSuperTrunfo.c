int main() {
    
    // carta 1
    char Estado1;
    char codigo1 [4];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibpercapita1;

    // carta 2
    char Estado2;
    char codigo2 [4];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibpercapita2;

    // cadastro da carta 1
    printf("cadastro da carta 1\n");

    printf("digite o Estado (A-H): ");
    scanf(" %c", &Estado1);  

    printf("digite o codigo da carta (Ex: A01): ");
    scanf("%s", codigo1);

    printf("digite a população: ");
    scanf("%d", &populacao1); 

    printf("digite a area em km²: ");
    scanf("%f", &area1);

    printf("digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("digite o número de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);
    
    densidade1 = (float)(populacao1 / area1);
    printf("densidade Pouplacional é: %.2f\n", densidade1);

    pibpercapita1 = (float)(pib1 / populacao1);
    printf("pib per capita é: %.2f\n", pibpercapita1);

    // cadastro da carta 2
    printf("cadastro da carta 2\n");

    printf("digite o Estado (A-H): ");
    scanf(" %c", &Estado2);  

    printf("digite o codigo da carta (Ex: B01): ");
    scanf("%s", codigo2);

    printf("digite a população: ");
    scanf("%d", &populacao2); 

    printf("digite a area em km²: ");
    scanf("%f", &area2);

    printf("digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("digite o número de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = (float)(populacao2 / area2);
    printf("densidade Pouplacional é:  %.2f\n", densidade2);

    pibpercapita2 = (float)(pib2 / populacao2);
    printf("pib per capita é: %.2f\n", pibpercapita2);

    return 0;
}
