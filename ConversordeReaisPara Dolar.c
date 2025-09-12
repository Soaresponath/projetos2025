#include <stdio.h>

int main() {
    float reais, cotacao, dolares;

    printf("Digite o valor em reais(R$): ");
    scanf("%f", &reais);

    printf("Digite a cotação do dolár: ");
    scanf("%f", &cotacao);

    dolares = reais / cotacao;

    printf("Valor em doláres: %.2f\n", dolares);

    

    return 0;

}