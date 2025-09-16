#include <stdio.h>

int main(){
    int nota1, nota2, nota3;      //mudar para float
    int media;                   //mudar para float

    printf("***Programa de Calculo de Média***\n");

    //primeira nota
   printf("Digite a sua primeira nota: \n");
    scanf("%d", &nota1);                     //colocar f no lugar de d

    //segunda nota
    printf("Digite a sua segunda nota: \n");
    scanf("%d", &nota2);                    //colocar f no lugar de d

    //terceira nota
    printf("Digite a sua terceira nota: \n");
    scanf("%d" , &nota3);                //colocar f no lugar de d

    media = (nota1 + nota2 + nota3) / 3;
    //incluir (float) depois da media em d

    printf("A média é: %d\n", media);   //colocar f no lugar de d
                       //incluir %.2f
    
    return 0;
}


