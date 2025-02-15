// Desafio Super Trunfo - Países
// Tema - Cadastro das Cartas
// Feito pelo aluno: Douglas Alves Costa

#include <stdio.h>

int main (){
    char estado1[3], estado2[3];
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    // Função para digitar as variaveis das cartas
    printf("\n=== Cadastro da primeira carta ===\n");
    printf("Digite o estado da cidade: ");
    scanf("%s", &estado1);
    printf("Digite o código da carta: ");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n=== Cadastro da segunda carta ===\n");
    printf("Digite o estado da cidade: ");
    scanf("%s", &estado2);
    printf("Digite o código da carta: ");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Função para calcular variaveis das cartas
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pib_per_capita1 + densidade_populacional1 + pontos_turisticos1;
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pib_per_capita2 + densidade_populacional2 + pontos_turisticos2;

    // Função para exibir a comparação das cartas
    printf("\n===== Comparação entre as Cartas =====\n");
    printf("## Lembrando que se o resultado for 1 a Vitoria é da Carta 1 e 0 a Vitoria da Carta 2 ##\n");
    printf("População: Carta 1 = %lu vs Carta 2 = %lu\n", populacao1, populacao2);
    printf(" Resultado: %d\n", populacao1 > populacao2);
    printf("Área: Carta 1 = %.2f vs Carta 2 = %.2f\n", area1, area2);
    printf(" Resultado: %d\n", area1 > area2);
    printf("PIB: Carta 1 = %.2f vs Carta 2 = %.2f\n", pib1, pib2);
    printf(" Resultado: %d\n", pib1 > pib2);
    printf("Pontos turísticos: Carta 1 = %d vs Carta 2 = %d\n", pontos_turisticos1, pontos_turisticos2);
    printf(" Resultado: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade populacional: Carta 1 = %.2f vs Carta 2 = %.2f\n", densidade_populacional1, densidade_populacional2);
    printf(" Resultado: %d\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per capita: Carta 1 = %.2f vs Carta 2 = %.2f\n", pib_per_capita1, pib_per_capita2);
    printf(" Resultado: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carrta 1 = %.2f vs Carta 2 = %.2f\n", super_poder1, super_poder2);
    printf(" Resultado: %d\n", super_poder1 > super_poder2);
    
    return 0;
}