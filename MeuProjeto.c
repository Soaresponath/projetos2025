#include <stdio.h>

int main() {

//DADOS DA CARTA 1
/*Informações/instruções relevantes: 
estado: escolha estados simples, caso opte por usar estados com nome composto (ex: São Paulo),
busque escrever tudo junto em uma palavra só (ex: SaoPaulo), evite o uso de caracteres especiais,
como o uso de tio (~), acentos, traços, exclamações ou interrogações,
pois estes vão fazer com que o programa falhe na exibição dos dados das Cartas 01 ou 02;
Para o Código das carta utilize a sigla do Estado seguido pelo DDD da região (ex: Paraná = PR41);
Foi utilizado a váriavel float para População, Área e PIB, caso o usuário queira de fato,
usar de informações reais e atualizadas sobre o Estado escolhido;
*/
char estado1[20]; 
char codigo1[20];
char nomecidade1[20];
float populacao1, area1, pib1;
int pontosturisticos1;

printf("Qual o nome do Estado da Carta 01? \n");
scanf("%s", estado1);

printf("Qual o Código da Carta 01? \n");
scanf("%s", codigo1);

printf("Qual o nome da Cidade da Carta 01? \n");
scanf("%s", nomecidade1);

printf("Qual a População da Carta 01? \n");
scanf("%f", &populacao1);

printf("Qual a Área da Carta 01? \n");
scanf("%f", &area1);

printf("Qual o PIB da Carta 01? \n");
scanf("%f", &pib1);

printf("Quantos Pontos Turísticos tem a Carta 01? \n");
scanf("%d", &pontosturisticos1);

//DADOS DA CARTA 02
/*Informações/instruções relevantes: 
Estado: escolha Estados simples, caso opte por usar Estados com nome composto (ex: São Paulo),
busque escrever tudo junto em uma palavra só (ex: SaoPaulo), evite o uso de caracteres especiais,
como o uso de tio (~), acentos, traços, exclamações ou interrogações,
pois estes vão fazer com que o programa falhe na exibição dos dados das Cartas 01 ou 02;
Para o Código das carta utilize a sigla do Estado seguido pelo DDD da região (ex: Paraná = PR41);
Foi utilizado a váriavel float para População, Área e PIB, caso o usuário queira de fato,
usar de informações reais e atualizadas sobre o Estado escolhido;
*/
char estado2[20];
char codigo2[20];
char nomecidade2[20];
float populacao2, area2, pib2;
int pontosturisticos2;

printf("Qual o nome do Estado da Carta 02? \n");
scanf("%s", estado2);

printf("Qual o Código da Carta 02? \n");
scanf("%s", codigo2);

printf("Qual o nome da Cidade da Carta 02? \n");
scanf("%s", nomecidade2);

printf("Qual a População da Carta 02? \n");
scanf("%f", &populacao2);

printf("Qual a Área da Carta 02? \n");
scanf("%f", &area2);

printf("Qual o PIB da Carta 02? \n");
scanf("%f", &pib2);

printf("Quantos Pontos Turísticos tem a Carta 02? \n");
scanf("%d", &pontosturisticos2);

//EXIBIÇÃO DOS DADOS DA CARTA 01
printf("===Exibição dos Dados da Carta 01===\n");
printf("O Estado da Carta 01 é: %s\n", estado1);
printf("O Código da Carta 01 é: %s\n", codigo1);
printf("O Nome da Cidade da Carta 01 é: %s\n", nomecidade1);
printf("A População da Carta 01 é: %f\n", populacao1);
printf("A Área da Carta 01 é: %f km²\n", area1);
printf("O PIB da Carta 01 é: %f em milhões de reais\n", pib1);
printf("A quantidade de Pontos Turísticos da Carta 01 é: %d\n", pontosturisticos1);

//EXIBIÇÃO DOS DADOS DA CARTA 02
printf("===Exibição dos Dados da Carta 02===\n");
printf("O Estado da Carta 02 é: %s\n", estado2);
printf("O Código da Carta 02 é: %s\n", codigo2);
printf("O Nome da Cidade da Carta 02 é: %s\n", nomecidade2);
printf("A População da Carta 02 é: %f\n", populacao2);
printf("A Área da Carta 02 é: %f km²\n", area2);
printf("O PIB da Carta 02 é: %f em milhões de reais\n", pib2);
printf("A quantidade de Pontos Turísticos da Carta 02 é: %d\n", pontosturisticos2);

return 0;
}