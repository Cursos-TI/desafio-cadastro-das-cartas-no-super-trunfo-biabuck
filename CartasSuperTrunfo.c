#include <stdio.h>

int main (){
    printf("***Desafio Super Trunfo*** \n");

    //carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float PIB1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float PIBperCapta1;
    float InversoDensidadePopulacional1;
    float SuperPoder1;


    printf("Digite o estado: \n");
    scanf(" %c", &estado1); // Adicionado espaço antes de %c

    printf("Digite o código: \n");
    scanf("%s", codigo1); 

    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%u", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1); 

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    PIBperCapta1 = PIB1 / populacao1;
    InversoDensidadePopulacional1 = area1 / populacao1; 


    //Carta 2

    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float PIB2;
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
    scanf("%s", cidade2); 

    printf("Digite a população: \n");
    scanf("%u", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2); 

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    PIBperCapta2 = PIB2 / populacao2;
    InversoDensidadePopulacional1 = area2 / populacao2; 
    

    //Informações carta 1
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %u \n", populacao1);
    printf("Área: %.2f km \n", area1);
    printf("PIB: %.2f bilhões de reais \n", PIB1); 
    printf("Pontos turísticos: %d \n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km \n", densidadePopulacional1);
    printf("PIB per Capta: %.2f reais \n \n", PIBperCapta1);

    //Informaçoes carta 2
    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %u \n", populacao2);
    printf("Área: %.2f km \n", area2);
    printf("PIB: %.2f bilhões de reais \n", PIB2); 
    printf("Pontos turísticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km \n", densidadePopulacional2);
    printf("PIB per Capta: %.2f reais \n \n", PIBperCapta2);

    /* 
    Super Poderes
    SuperPoder1 = populacao1 + area1 + PIB1 + pontosTuristicos1 + PIBperCapta1 + InversoDensidadePopulacional1;
    SuperPoder2 = populacao2 + area2 + PIB2 + pontosTuristicos2 + PIBperCapta2 + InversoDensidadePopulacional2;
    */

    printf("COMPARAÇÃO DE CARTAS: \n \n"); 

    printf("POPULAÇÃO \n");
    printf("Carta 1- %s: %u \n", cidade1, populacao1);
    printf("Carta 2- %s: %u \n", cidade2, populacao2);
    if (populacao1 > populacao2)
    {
        printf("Resultado: Carta 1 venceu! \n \n");
    }else
    {
        printf("Resultado: Carta 2 venceu! \n \n");
    }


    printf("ÁREA \n");
    printf("Carta 1- %s: %f \n", cidade1, area1);
    printf("Carta 2- %s: %f \n", cidade2, area2);
    if (area1 > area2)
    {
        printf("Resultado: Carta 1 venceu! \n \n");
    }else
    {
        printf("Resultado: Carta 2 venceu! \n \n");
    }


    printf("PIB \n");
    printf("Carta 1- %s: %f \n", cidade1, PIB1);
    printf("Carta 2- %s: %f \n", cidade2, PIB2);
    if (PIB1 > PIB2)
    {
        printf("Resultado: Carta 1 venceu! \n \n");
    }else
    {
        printf("Resultado: Carta 2 venceu! \n \n");
    }


    printf("DENSIDADE POPULACIONAL \n");
    printf("Carta 1- %s: %f \n", cidade1, densidadePopulacional1);
    printf("Carta 2- %s: %f \n", cidade2, densidadePopulacional2);
    if (PIB1 > PIB2)
    {
        printf("Resultado: Carta 1 venceu! \n \n");
    }else
    {
        printf("Resultado: Carta 2 venceu! \n \n");
    }


    printf("PIB PER CAPTA \n");
    printf("Carta 1- %s: %.2f \n", cidade1, PIBperCapta1);
    printf("Carta 2- %s: %.2f \n", cidade2, PIBperCapta2);
    if (PIBperCapta1 > PIBperCapta2)
    {
        printf("Resultado: Carta 1 venceu! \n \n");
    }else
    {
        printf("Resultado: Carta 2 venceu! \n \n");
    }
    

    return 0;
}