#include <stdio.h>


int main() {
    // Cidade 1 
    
   // Criando Variáveis
    char estado1, codigo_carta1[4], nome_cidade1[50];

    int populacao1, pontos_turisticos1; 

    float area1, Densi_Pop1;    
    
    double PIB1, PIB_perCapita1;

    // Cadastro das Cartas
    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: ");
    scanf(" %s", codigo_carta1);

    printf("Nome da Cidade: ");
    scanf(" %s", nome_cidade1); // OBS: não lê espaços

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área (km²): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhões de R$): ");
    scanf(" %lf", &PIB1);  //LF para saída p/variaveis em DOUBLE

    PIB1 *= 1000000000; // Converte PIB para reais

    printf("Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos1);

    //Calcular a Densidade Populacional:
    Densi_Pop1 = populacao1 / area1;

    //Calcular o PIB per Capita
    PIB_perCapita1 = PIB1 / populacao1;

    // Exibição
    printf("\n*** Carta 1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2lf\n", PIB1);  // Mostrando em reais
    printf("Numero de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densi_Pop1);
    printf("PIB per Capita: R$ %.2lf\n", PIB_perCapita1);

    // ********************************************************************************

    // Cidade 2

     // Criando Variáveis
    char estado2, codigo_carta2[4], nome_cidade2[50];

    int populacao2, pontos_turisticos2; 

    float area2, Densi_Pop2;    
    
    double PIB2, PIB_perCapita2;

    // Cadastro das Cartas
    printf("\n\nEstado: ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf(" %s", codigo_carta2);

    printf("Nome da Cidade: ");
    scanf(" %s", nome_cidade2); // OBS: não lê espaços

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área (km²): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhões de R$): ");
    scanf(" %lf", &PIB2);  //LF para saída p/variaveis em DOUBLE

    PIB2 *= 1000000000; // Converte PIB para reais

    printf("Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    //Calcular a Densidade Populacional:
    Densi_Pop2 = populacao2 / area2;
    
    //Calcular o PIB per Capita
    PIB_perCapita2 = PIB2 / populacao2;

    // Exibição
    printf("\n\n*** Carta 2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2lf\n", PIB2);  // Mostrando em reais
    printf("Numero de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densi_Pop2);
    printf("PIB per Capita: R$ %.2lf\n", PIB_perCapita2);



    return 0;
}
