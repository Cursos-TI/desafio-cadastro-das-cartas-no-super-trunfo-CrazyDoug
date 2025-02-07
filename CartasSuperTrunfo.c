// Desafio Super Trunfo - Países
// Tema - Cadastro das Cartas
// Feito pelo aluno: Douglas Alves Costa

#include <stdio.h>

int main() {
    char estado[30]; //Essa parte é onde fica as variavel que vamos utilizar
    char codigo[3];
    char cidade[40];
    int populacao;
    float area;
    float densidade;
    float pib;
    float pibcap;
    int pturistico;

    printf("Digite o nome do Estado:\n");    //Essa parte mostra o que o usuario precisa inserir
    scanf(" %s", &estado);                    //Esse parte é onde o usurio vai inserir o que foi pedido

    printf("Digite o codigo da carta:\n");   
    scanf("%s", &codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Digite a populacao:\n");
    scanf("%d", &populacao);

    printf("Digite a area:\n");
    scanf("%f", &area);

    printf("Digite o PIB:\n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pturistico);

    densidade = populacao / area; //Densidade Populacional: População dividida pela área da cidade.
    pibcap = pib / populacao; //PIB per Capita: PIB total dividido pela população.
    
    printf("\n===== Cadastro Concluído =====\n"); //Aqui é a parte onde mostra para o usuario todas as informações que ele forneceu
    printf("Estado: %s \n", estado); 
    printf("Codigo da Carta: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d habitantes\n", populacao);
    printf("Area: %.2f km²\n", area);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidade);
    printf("PIB: R$ %.2f bilhoes\n", pib);
    printf("PIB per Capita: R$ %.2f\n", pibcap);
    printf("Pontos Turisticos: %d\n", pturistico);

    return 0;
}