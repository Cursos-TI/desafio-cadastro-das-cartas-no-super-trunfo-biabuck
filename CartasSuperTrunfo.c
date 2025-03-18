#include <stdio.h>

int main (){
    printf("***Desafio Super Trunfo*** \n");

    //carta 1
    char estado1;
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1;
    float area1;
    double PIB1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float PIBperCapta1;
    float InversoDensidadePopulacional1;
    float SuperPoder1;


    printf("Digite o estado: \n");
    scanf(" %c", &estado1); // espaço antes de %c

    printf("Digite o código: \n");
    scanf("%s", codigo1); 

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome1);

    printf("Digite a população: \n");
    scanf("%u", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB1); // mudado para %lf

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    PIBperCapta1 = PIB1 / populacao1;
    InversoDensidadePopulacional1 = area1 / populacao1; 


    //Carta 2

    char estado2;
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    double PIB2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float PIBperCapta2;
    float InversoDensidadePopulacional2;
    float SuperPoder2;


    printf("Digite o estado: \n");
    scanf(" %c", &estado2); // Adicionado espaço antes de %c

    printf("Digite o código: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2); 

    printf("Digite a população: \n");
    scanf("%u", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB2); // Corrigido para %lf

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    PIBperCapta2 = PIB2 / populacao2;
    InversoDensidadePopulacional1 = area2 / populacao2; 
    

    //Informações carta 1
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", nome1);
    printf("População: %u \n", populacao1);
    printf("Área: %.2f km \n", area1);
    printf("PIB: %.2lf bilhões de reais \n", PIB1); // Corrigido para %.2lf
    printf("Pontos turísticos: %d \n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km \n", densidadePopulacional1);
    printf("PIB per Capta: %.2f reais \n \n", PIBperCapta1);

    //Informaçoes carta 2
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", nome2);
    printf("População: %u \n", populacao2);
    printf("Área: %.2f km \n", area2);
    printf("PIB: %.2lf bilhões de reais \n", PIB2); // Corrigido para %.2lf
    printf("Pontos turísticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km \n", densidadePopulacional2);
    printf("PIB per Capta: %.2f reais \n \n", PIBperCapta2);

    // Super Poderes
    SuperPoder1 = populacao1 + area1 + PIB1 + pontosTuristicos1 + PIBperCapta1 + InversoDensidadePopulacional1;
    SuperPoder2 = populacao2 + area2 + PIB2 + pontosTuristicos2 + PIBperCapta2 + InversoDensidadePopulacional2;

    printf("COMPARAÇÃO DE CARTAS: \n");
    printf("População: %d \n", populacao1 > populacao2);
    printf("Area: %d \n", area1 > area2);
    printf("PIB: %d \n", PIB1 > PIB2);
    printf("Densidade populacional: %d \n", densidadePopulacional1 < densidadePopulacional2);
    printf("PIB per Capta: %d \n", PIBperCapta1 > PIBperCapta2);
    printf("Super poder: %d \n", SuperPoder1 > SuperPoder2);

    //Resultados: se for 1 ganha a carta 1, se for 0 ganha a carta 2


    return 0;
}