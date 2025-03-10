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
        int escolhaComputador = rand() % 5 + 1;
    

        PIBperCapta2 = PIB2 / populacao2;
        densidadePopulacional2 = populacao2 / area2;

        printf("Escolha uma opção: \n");
        printf("Cidade: %s \n", cidade1);
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
        printf("Cidade: %s \n", cidade1);
        printf("População: %u \n", populacao1);
        break;

    case 2:
        printf("Cidade: %s \n", cidade1);
        printf ("Área: %.2f \n", area1);
        break;
    
    case 3:
        printf("Cidade: %s \n", cidade1);
        printf("PIB: %.2f \n", PIB1);
        break;

    case 4:
        printf("Cidade: %s \n", cidade1);
        printf("Pontos turísticos: %d \n", pontosTuristicos1);
        break;

    case 5:
        printf("Cidade: %s \n", cidade1);
        printf("Densidade Populacional: %.2f \n", densidadePopulacional1);
        break;
    
    default:
        printf("opção inválida");
        break;
    }

    switch (escolhaComputador)
    {
        case 1:
        printf("Cidade: %s \n", cidade2);
        printf("População: %u \n", populacao2);

        if(escolhaJogador > escolhaComputador)
        {
            printf("Você ganhou \n");
        } else if (escolhaJogador < escolhaComputador)
        {
           printf("Você perdeu \n");
        }
        break;
        

    case 2:
        printf("Cidade: %s \n", cidade2);
        printf ("Área: %.2f \n", area2);
        break;

        if(escolhaJogador > escolhaComputador)
        {
            printf("Você ganhou \n");
        } else if (escolhaJogador < escolhaComputador)
        {
           printf("Você perdeu \n");
        }
    
    case 3:
        printf("Cidade: %s \n", cidade2);
        printf("PIB: %.2f \n", PIB2);

        if(escolhaJogador > escolhaComputador)
        {
            printf("Você ganhou \n");
        } else if (escolhaJogador < escolhaComputador)
        {
           printf("Você perdeu \n");
        }
        break;

    case 4:
        printf("Cidade: %s \n", cidade2);
        printf("Pontos turísticos: %d \n", pontosTuristicos2);

        if(escolhaJogador > escolhaComputador)
        {
            printf("Você ganhou \n");
        } else if (escolhaJogador < escolhaComputador)
        {
           printf("Você perdeu \n");
        }
        break;

    case 5:
        printf("Cidade: %s \n", cidade2);
        printf("Densidade Populacional: %.2f \n", densidadePopulacional2);

        if (escolhaJogador < escolhaComputador)
        {
            printf("Você ganhou \n");
        } else if (escolhaJogador > escolhaComputador)
        {
           printf("Você perdeu \n");
        }
        break;
    
    default:
        
        break;
    
    }
  
    return 0;
}