#include <stdio.h>

int main (){
    int horas, minutos;

    printf("Digite o valor em horas: ");
    scanf("%d", &horas);

    minutos = horas * 60;

    printf("%d horas equivalem a %d minutos.\n", horas, minutos);



    return 0;

}