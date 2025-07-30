#include <stdio.h>


int main() {
    // Cidade 1 
    
    // Criando Variáveis
    char estado1, codigo_carta1[4],nome_cidade1[50]; // variaveis com string

    int populacao1, pontos_turisticos1; // variaveis inteiras

    float area1, PIB1;// variaveis com ponto flutuante


    //Cadastro das Cartas:
    printf("Estado: ");
    scanf(" %c",&estado1);

    printf("Codigo da carta: ");
    scanf(" %s",codigo_carta1);

    printf("Nome da Cidade: ");
    scanf(" %s",nome_cidade1);

    printf("População: ");
    scanf(" %d",&populacao1);

    printf("Area: ");
    scanf(" %f",&area1);

    printf("PIB: ");
    scanf(" %f",&PIB1);

    printf("Pontos Turisticos: ");
    scanf(" %d",&pontos_turisticos1);

    
    // Exibição dos Dados das Cartas:
    printf("\nCarta 1\n");
    printf("Estado: %c\n",estado1);
    printf("Codigo da carta: %s\n",codigo_carta1);
    printf("Nome da Cidade: %s\n",nome_cidade1);
    printf("População: %d\n",populacao1);
    printf("Area km2: %.2f\n",area1);
    printf("PIB: %.2f\n",PIB1);
    printf("Pontos Turisticos: %d\n",pontos_turisticos1);



    // Cidade 2

    // Criando Variáveis
    char estado2, codigo_carta2[4],nome_cidade2[50]; // variaveis com string

    int populacao2, pontos_turisticos2; // variaveis inteiras

    float area2, PIB2; // variaveis com ponto flutuante


    //Cadastro das Cartas:
    printf("\nEstado: ");
    scanf(" %c",&estado2);

    printf("Codigo da carta: ");
    scanf(" %s",codigo_carta2);

    printf("Nome da Cidade: ");
    scanf(" %s",nome_cidade2);

    printf("População: ");
    scanf(" %d",&populacao2);

    printf("Area: ");
    scanf(" %f",&area2);

    printf("PIB: ");
    scanf(" %f",&PIB2);

    printf("Pontos Turisticos: ");
    scanf(" %d",&pontos_turisticos2);

    
    // Exibição dos Dados das Cartas:
    printf("\nCarta 2\n");
    printf("Estado: %c\n",estado2);
    printf("Codigo da carta: %s\n",codigo_carta2);
    printf("Nome da Cidade: %s\n",nome_cidade2);
    printf("População: %d\n",populacao2);
    printf("Area km2: %.2f\n",area2);
    printf("PIB: %.2f\n",PIB2);
    printf("Pontos Turisticos: %d\n",pontos_turisticos2);


    return 0;
}
