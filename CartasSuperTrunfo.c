#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    printf("***Desafio Super Trunfo*** \n");
    srand(time(0));

        // Carta 1
        char estado1[3] = "A"; 
        char codigo1[4] = "A01";
        char cidade1[50] = "São Paulo";
        unsigned long int populacao1 = 6928;
        float area1 = 1521.11;
        float PIB1 = 123250.00;
        int pontosTuristicos1 = 50;
        float densidadePopulacional1;
        float PIBperCapta1;
        int escolhaJogador;
        float valorJogador;
        char *atributo1;

        densidadePopulacional1 = populacao1 / area1;
        PIBperCapta1 = PIB1 / populacao1;

    // Carta 2
        char estado2[3] = "B"; 
        char codigo2[4] = "B02"; 
        char cidade2[50] = "Rio de Janeiro";
        unsigned long int populacao2 = 3000;
        float area2 = 1200.25;
        float PIB2 = 67480.50;
        int pontosTuristicos2 = 30;
        float densidadePopulacional2;
        float PIBperCapta2;
        int escolhaComputador;
        float valorComputador;
        char *atributo2;

        PIBperCapta2 = PIB2 / populacao2;
        densidadePopulacional2 = populacao2 / area2;

        //Escolha aleatória
        escolhaComputador = rand() % 5 + 1;

        // Opções jogador
        printf("Escolha uma opção: \n");
        printf("1. População: %u \n", populacao1);
        printf("2. Área: %.2f km \n", area1);
        printf("3. PIB: %.2f bilhões de reais \n", PIB1);
        printf("4. Pontos turísticos: %d \n", pontosTuristicos1);
        printf("5. Densidade Populacional: %.2f hab/km \n", densidadePopulacional1);
        printf("Escolha: ");
        scanf("%d", &escolhaJogador);

       
        switch (escolhaJogador) 
        {
            case 1:
                valorJogador = populacao1;
                atributo1 = "População";
                break;

            case 2:
                valorJogador = area1;
                atributo1 = "Área";
                break;

            case 3:
                valorJogador = PIB1;
                atributo1 = "PIB";
                break;

            case 4:
                valorJogador = pontosTuristicos1;
                atributo1 = "Pontos turísticos";
                break;

            case 5:
                valorJogador = densidadePopulacional1;
                atributo1 = "Densidade Populacional";
                break;

            default:
                printf("Opção inválida\n");
        }


        switch (escolhaComputador) 
        {
            case 1:
                valorComputador = populacao2;
                atributo2 = "População";
                break;
            case 2:
                valorComputador = area2;
                atributo2 = "Área";
                break;
            case 3:
                valorComputador = PIB2;
                atributo2 = "PIB";
                break;
            case 4:
                valorComputador = pontosTuristicos2;
                atributo2 = "Pontos turísticos";
                break;
            case 5:
                valorComputador = densidadePopulacional2;
                atributo2 = "Densidade Populacional";
                break;
        }

        //Escolhas
        printf("Cidade: %s \n", cidade1);
        printf("%s: %.2f \n", atributo1, valorJogador);
        printf("Cidade: %s \n", cidade2);
        printf("%s: %.2f \n", atributo2, valorComputador);

        // Comparação de valores
        if (escolhaJogador == 5)  //Densidade populacional
        { 
            if (valorJogador < valorComputador) 
            {
                printf("Parabéns, você ganhou!!! \n");
            } else if (valorJogador > valorComputador) 
            {
                printf("Você perdeu \n");
            } 

        } else {
            if (valorJogador > valorComputador) {
                printf("Parabéns, você ganhou!!! \n");
            } else if (valorJogador < valorComputador) {
                printf("Você perdeu \n");
            }
        }
        return 0;
}