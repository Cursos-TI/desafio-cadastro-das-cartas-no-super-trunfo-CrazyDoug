// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

#include <stdio.h>

int main() {
    char estado[50]; //Essa parte é onde fica as variavel que vamos utilizar
    char codigo[3];
    char cidade[50];
    int populacao;
    float area;
    float densidade;
    float pib;
    float pibcap;
    int pturistico;

    printf("Digite o nome do Estado:\n");    //Essa parte mostra o que o usuario precisa inserir
    scanf("%s", &estado);                    //Esse parte é onde o usurio vai inserir o que foi pedido
    printf("Cadastro feito com sucesso.\n"); //Mostra no CMD que o cadastro foi feito com sucesso

    printf("Digite o codigo da carta:\n");   
    scanf("%s", &codigo);
    printf("Cadastro feito com sucesso.\n");

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade);
    printf("Cadastro feito com sucesso.\n");

    printf("Digite a populacao:\n");
    scanf("%d", &populacao);
    printf("Cadastro feito com sucesso.\n");

    printf("Digite a area:\n");
    scanf("%f", &area);
    printf("Cadastro feito com sucesso.\n");

    printf("Digite a densidade populacional:\n");
    scanf("%f", &densidade);
    printf("Cadastro feito com sucesso.\n");

    printf("Digite o PIB:\n");
    scanf("%f", &pib);
    printf("Cadastro feito com sucesso.\n");

    printf("Digite o PIB per capita:\n");
    scanf("%f", &pibcap);
    printf("Cadastro feito com sucesso.\n");

    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &pturistico);
    printf("Cadastro feito com sucesso.\n");
    
    printf("O nome do Estado: %s\n", estado); //Aqui é a parte onde mostra para o usuario todas as informações que ele forneceu
    printf("Codigo da Carta: %s\n", codigo);
    printf("O nome da Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %fkm²\n", area);
    printf("Densidade Populacional: %f pessoas/km²\n", densidade);
    printf("PIB: %f bilhoes de reais\n", pib);
    printf("PIB per Capita: %f reais\n", pibcap);
    printf("O numero de pontos turisticos: %d\n", pturistico);

    return 0;
}