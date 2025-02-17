#include <stdio.h>

int main (){
    printf("Desafio Super Trunfo\n");

    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    double PIB;
    int pontosTuristicos;

    printf ("Digite o código: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%lf", &PIB);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    printf("Código: %s \n", codigo);
    printf("Cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %lf \n ", area);
    printf("PIB: %lf \n ", PIB);
    printf("Pontos turísticos: %d", pontosTuristicos);


    return 0;

}
