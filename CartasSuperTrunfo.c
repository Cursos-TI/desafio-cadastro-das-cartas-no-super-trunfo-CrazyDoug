// Desafio Super Trunfo - Países
// Tema - Cadastro das Cartas
// Feito pelo aluno: Douglas Alves Costa

#include <stdio.h>

// Estrutura para representar uma carta
typedef struct{
    char estado[3];
    char codigo[10];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

// Função para calcular as propriedades derivadas de uma carta
void calcular_propriedades(Carta *carta) {
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / carta->populacao;
    carta->super_poder = carta->populacao + carta->area + carta->pib + carta->pib_per_capita + carta->densidade_populacional + carta->pontos_turisticos;
}

// Função para ler os dados de uma carta
void ler_carta(Carta *carta){
    printf("Digite o estado da estado: ");
    scanf("%s", carta->estado);
    printf("Digite o código da carta: ");
    scanf("%s", carta->codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", carta->cidade);
    printf("Digite a população: ");
    scanf("%lu", &carta->populacao);
    printf("Digite a área em km²: ");
    scanf("%f", &carta->area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &carta->pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
    calcular_propriedades(carta);
}

// Função para comparar duas cartas e exibir os resultados
void comparar_cartas(Carta c1, Carta c2) {
    printf("\n===== Cadastro Concluído =====\n");
    printf("População: %lu vs %lu -> %d\n", c1.populacao, c2.populacao, c1.populacao > c2.populacao);
    printf("Área: %.2f vs %.2f -> %d\n", c1.area, c2.area, c1.area > c2.area);
    printf("PIB: %.2f vs %.2f -> %d\n", c1.pib, c2.pib, c1.pib > c2.pib);
    printf("Pontos turísticos: %d vs %d -> %d\n", c1.pontos_turisticos, c2.pontos_turisticos, c1.pontos_turisticos > c2.pontos_turisticos);
    printf("Densidade populacional: %.2f vs %.2f -> %d\n", c1.densidade_populacional, c2.densidade_populacional, c1.densidade_populacional < c2.densidade_populacional);
    printf("PIB per capita: %.2f vs %.2f -> %d\n", c1.pib_per_capita, c2.pib_per_capita, c1.pib_per_capita > c2.pib_per_capita);
    printf("Super Poder: %.2f vs %.2f -> %d\n", c1.super_poder, c2.super_poder, c1.super_poder > c2.super_poder);
}

int main() {
    Carta carta1, carta2;
    printf("\nCadastro da primeira carta:\n");
    ler_carta(&carta1);
    printf("\nCadastro da segunda carta:\n");
    ler_carta(&carta2);
    
    comparar_cartas(carta1, carta2);
    return 0;
}