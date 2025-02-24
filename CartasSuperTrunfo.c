#include <stdio.h>

int main (){
    printf("***Desafio Super Trunfo*** \n");

    //carta 1

    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    double PIB1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float PIBperCapta;

    printf("Digite o estado: \n");
    scanf(" %c", &estado1); // espaço antes de %c

    printf("Digite o código: \n");
    scanf("%s", codigo1); 

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB1); // mudado para %lf

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    //Carta 2

    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    double PIB2;
    int pontosTuristicos2;


    printf("Digite o estado: \n");
    scanf(" %c", &estado2); // Adicionado espaço antes de %c

    printf("Digite o código: \n");
    scanf("%s", codigo2); // Sem limite de caracteres

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2); // Sem limite de caracteres

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB2); // Corrigido para %lf

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f \n", area1);
    printf("PIB: %.2lf \n", PIB1); // Corrigido para %.2lf
    printf("Pontos turísticos: %d\n \n", pontosTuristicos1);

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f \n", area2);
    printf("PIB: %.2lf \n", PIB2); // Corrigido para %.2lf
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}