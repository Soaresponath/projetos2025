#include <stdio.h>

int main (){

    //Declaração de variaveis 1 carta
    char estado1;
    char codigo1[50];
    char nomedacidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float pibpercapita1;

    //Espesificadores da 1 carta

    printf("\nCadastro 1º carta: \n");

    printf("Estado: \n");
    scanf(" %c", &estado1);

    printf("Código: \n");
    scanf("%s", codigo1);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Números de pontos turísticos: \n");
    scanf("%d", &pontosturisticos1);

    //Cálculo da 1 carta
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1;

    //Declaração de variaveis carta 2
    char estado2;
    char codigo2[50];
    char nomedacidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float pibpercapita2;

    //Espesificadores da 2 carta
    printf("\nCadastro 2º carta: \n");    

    printf("Estado: \n");
    scanf(" %c", &estado2);

    printf("Código: \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", nomedacidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Números de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);

    //Cálculo da 2 carta
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

    //Exibição das infromações 1 carta
    printf("\n---Carta 1 ---\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nomedacidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Pontos turísticos: %d \n", pontosturisticos1);
    printf("Densidade populacional: %.2f hab/km² \n", densidadepopulacional1);
    printf("PIB per capita: %.2f reais \n", pibpercapita1);

    //Exibição das informações 2 carta
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nomedacidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Pontos turísticos: %d \n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²  \n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais \n", pibpercapita2);


    return 0;


}