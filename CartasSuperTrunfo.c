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

    printf("Digite o nome do cidade: \n");
    scanf("%s", &nome);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a área: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    printf("Código: %s \n", codigo);
    printf("Cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %f \n", area);
    printf("PIB: %f \n", PIB);
    printf("Pontos turísticos: %d", pontosTuristicos);


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
