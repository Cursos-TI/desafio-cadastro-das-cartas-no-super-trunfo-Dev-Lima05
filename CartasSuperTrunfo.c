#include<stdio.h>

int main() {
    
    // Cidade 1 
    
   // Criando Variáveis
    char estado1, codigo_carta1[4], nome_cidade1[50];

    int pontos_turisticos1; 

    unsigned long int populacao1; // para acomodar numeros maiores

    float area1, Densi_Pop1;    
    
    double PIB1, PIB_perCapita1;

    // SUPER PODER
    float superPoder1;

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
    Densi_Pop1 = (float)populacao1 / area1;

    //Calcular o PIB per Capita
    PIB_perCapita1 = PIB1 / populacao1;

    // Calcular Super Poder
    superPoder1 = (float) (populacao1 + area1 + PIB1 + pontos_turisticos1 + PIB_perCapita1) + (1/Densi_Pop1);

    //-------------------------------------------------------------------------------------------------------
    // Cidade 2 

    // Criando Variáveis
    char estado2, codigo_carta2[4], nome_cidade2[50];

    int pontos_turisticos2; 

    unsigned long int populacao2; // para acomodar numeros maiores

    float area2, Densi_Pop2;    

    double PIB2, PIB_perCapita2;

    // SUPER PODER
    float superPoder2;

    // Cadastro das Cartas
    printf("\nEstado: ");
    scanf(" %c", &estado2);

    printf("Codigo da carta: ");
    scanf(" %s", codigo_carta2);

    printf("Nome da Cidade: ");
    scanf(" %s", nome_cidade2); // OBS: não lê espaços

    printf("População: ");
    scanf(" %lu", &populacao2);

    printf("Área (km²): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhões de R$): ");
    scanf(" %lf", &PIB2);  // LF para variáveis DOUBLE

    PIB2 *= 1000000000; // Converte PIB para reais

    printf("Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    // Calcular a Densidade Populacional:
    Densi_Pop2 = (float)populacao2 / area2;

    // Calcular o PIB per Capita
    PIB_perCapita2 = PIB2 / populacao2;

    // Calcular Super Poder
    superPoder2 = (float)(populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_perCapita2) + (1 / Densi_Pop2);


    // Comparar as Cartas - Cidade 1 e Cidade 2
    int resPop, resArea, resPIB, resPtTuristicos, resDensPop, resPIBper, resSuperPoder;

    resPop = populacao1 > populacao2;
    resArea = area1 > area2;
    resPIB = PIB1 > PIB2;
    resPtTuristicos = pontos_turisticos1 > pontos_turisticos2;
    resDensPop = Densi_Pop1 < Densi_Pop2;
    resPIBper = PIB_perCapita1 > PIB_perCapita2;
    resSuperPoder = superPoder1 > superPoder2;

    /* 
    Exibir comparacao
    1 - carta 1 venceu
    0 - carta 2 venceu
    */
   
    printf("\n Comparacao de Cartas \n\n");
    printf("Populacao: %d",resPop);
    printf("\nArea: %d",resArea);
    printf("\nPIB: %d",resPIB);
    printf("\nPontos Turisticos: %d",resPtTuristicos);
    printf("\nDensidade Populacional: %d",resPop);
    printf("\nPIB per Capita: %d",resPIBper);
    printf("\nSuper Poder: %d",resSuperPoder);

    return 0;
}