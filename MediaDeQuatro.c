#include <stdio.h>

int main(){
    float n1, n2, n3, n4, media;

    printf("Digite as quatro notas: ");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1 + n2 + n3 + n4) /4;

    printf("Média = %.2f\n", media);

    if (media >= 7){
        printf("Aluno aprovado!\n");

    } else {
        printf("Aluno reprovado!\n");
    }




    return 0;
}