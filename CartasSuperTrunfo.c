#include <stdio.h>

int main(){
    
    char carta1[3];
    char cidade1[50];
    char estado1;
    int pop1, tur1;
    float km1, pib1;
    
    char carta2[3];
    char cidade2[50];
    char estado2;
    int pop2, tur2;
    float km2, pib2;
    
    printf("Digite um estado entre a letra A até H: ");
    scanf(" %c", &estado1);

    printf("Digite uma letra de estado seguido de um numero de 1 a 4: ");
    scanf("%s", carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &pop1);
    
    printf("Digite a área em km da cidade: ");
    scanf("%f", &km1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turisticos existem na cidade: ");
    scanf("%d", &tur1);

    printf("Digite um estado entre a letra A até H: ");
    scanf(" %c", &estado2);

    printf("Digite uma letra de estado seguido de um numero de 1 a 4: ");
    scanf("%s", carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite o numero de habitantes da cidade: ");
    scanf("%d", &pop2);
    
    printf("Digite a área em km da cidade: ");
    scanf("%f", &km2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turisticos existem na cidade: ");
    scanf("%d", &tur2);

    printf("\n");

    printf("Carta1: \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", carta1);
    printf("Nome da cidade: %s \n", cidade1);
    printf("População: %d \n", pop1);
    printf("Area: %.2f Km²\n", km1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Numero de Pontos Turisticos: %d \n", tur1);

    printf("\n");

    printf("Carta2: \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", carta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %d \n", pop2);
    printf("Area: %.2f Km²\n", km2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Numero de Pontos Turisticos: %d \n", tur2);

    return 0;



}