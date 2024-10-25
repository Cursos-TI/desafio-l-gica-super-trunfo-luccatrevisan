#include <stdio.h>

int main() {
    char pais1[30], pais2[30];
    char estado1[30], estado2[30];
    char cidade1[30], cidade2[30];
    int populacaoCidade1, populacaoCidade2;
    float areaCidade1, areaCidade2;
    double PIBcidade1, PIBcidade2;
    int pontosTuristicosCidade1, pontosTuristicosCidade2;

    printf("Bem-vindo ao desafio do SuperTrunfo!\nCompare o valor de duas cidades do jogo digitando abaixo as informações sobre elas! \n");

    printf("Digite abaixo os Países de cada Cidade:\n");
    scanf("%s", &pais1);
    scanf("%s", &pais2);
    
    printf("Digite abaixo os estados de cada Cidade em formato UF (RJ, SP etc):\n");
    scanf("%s", &estado1);
    scanf("%s", &estado2);

    printf("Digite os nomes das Cidades:\n");
    scanf("%s", &cidade1);
    scanf("%s", &cidade2);

    printf("Digite a população de cada cidade:\n");
    scanf("%d", &populacaoCidade1);
    scanf("%d", &populacaoCidade2);

    printf("Digite as áreas de cada cidade (em km2):\n");
    scanf("%f", &areaCidade1);
    scanf("%f", &areaCidade2);

    printf("Digite o valor do PIB de cada cidade:\n");
    scanf("%lf", &PIBcidade1);
    scanf("%lf", &PIBcidade2);

    printf("Digite a quantidade de pontos turísticos de cada cidade:\n");
    scanf("%d", &pontosTuristicosCidade1);
    scanf("%d", &pontosTuristicosCidade2);

    float densidadePop1 =  (float) populacaoCidade1 / areaCidade1;
    float densidadePop2 =  (float) populacaoCidade2 / areaCidade2;
    float PIBcapita1 = (float) PIBcidade1 / populacaoCidade1;
    float PIBcapita2 = (float) PIBcidade2 / populacaoCidade2;

    printf("\nValores da Cidade 1: %s - %s, %s:\n", cidade1, estado1, pais1);
    printf("População: %d - Área: %.1f \nPIB: %.2f - Pontos Turísticos: %d \n", populacaoCidade1, areaCidade1, PIBcidade1, pontosTuristicosCidade1);
    printf("Densidade Populacional: %.1f \nPIB per Capita: %.2f\n\n", densidadePop1, PIBcapita1);

    printf("Valores da Cidade 2: %s - %s, %s:\n", cidade2, estado2, pais2);
    printf("População: %d - Área: %.1f \nPIB: %.2f - Pontos Turísticos: %d \n", populacaoCidade2, areaCidade2, PIBcidade2, pontosTuristicosCidade2);
    printf("Densidade Populacional: %.1f - PIB per Capita: %.2f\n\n", densidadePop2, PIBcapita2);

    if (PIBcapita1 > PIBcapita2){
        printf("A cidade mais rica é a cidade 1.");
    } else {
        printf("A cidade mais rica é a cidade 2.");
    }
}
