#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    int populacao1, NumeroPontoTuristico1;
    char estado1;
    char nomeCidade1[35];
    char codigoDaCarta1[4];
    float area1, pib1, densidadePopulacional1, pibPerCapita1;

    int populacao2, NumeroPontoTuristico2;
    char estado2;
    char nomeCidade2[35];
    char codigoDaCarta2[4];
    float area2, pib2,densidadePopulacional2, pibPerCapita2;

    printf("Insira os dados da carta 1:\n");
    
    printf("Insira uma letra de A-H para a carta 1 (representando um dos 8 estados): ");
    scanf("%c", &estado1);

    printf("Insira o codigo para carta 1 (Ex.: A01, B02 e assim por diante): "); 
    scanf("%s", codigoDaCarta1);

    printf("Insira o nome da cidade para carta 1: ");
    scanf("%s", nomeCidade1);

    printf("Insira a População da Cidade para carta 1: ");
    scanf("%d", &populacao1);

    printf("Insira a Área da Cidade em km² para carta 1: ");
    scanf("%f", &area1);

    printf("Insira o PIB da Cidade para carta 1: ");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos da Cidade para carta 1: ");
    scanf("%d", &NumeroPontoTuristico1);
    

    densidadePopulacional1 = (float)(populacao1 / area1);


    pibPerCapita1 = (float)((pib1 * 10e9) / populacao1);


    printf("\nInsira os dados da carta 2:\n");
    
    printf("Insira uma letra de A-H para a carta 2 (representando um dos 8 estados): ");
    scanf(" %c", &estado2);

    printf("Insira o codigo do Estado para carta 2 (Ex.: A01, B02 e assim por diante): "); 
    scanf("%s", codigoDaCarta2);

    printf("Insira o nome da cidade para carta 2: ");
    scanf("%s", nomeCidade2);

    printf("Insira a População da Cidade para carta 2: ");
    scanf("%d", &populacao2);

    printf("Insira a Área da Cidade em km² para carta 2: ");
    scanf("%f", &area2);

    printf("Insira o PIB da Cidade para carta 2: ");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turísticos da Cidade para carta 2: ");
    scanf("%d", &NumeroPontoTuristico2);
    

    densidadePopulacional2 = (float)(populacao2 / area2);

    
    pibPerCapita2 = (float)((pib2 * 10e9) / populacao2);


    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", NumeroPontoTuristico1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);


    printf("\n\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", NumeroPontoTuristico2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
