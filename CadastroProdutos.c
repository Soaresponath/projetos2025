#include <stdio.h>

int main(){

    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

   float valorA = 10.50;
   float valorB = 20.40;

   unsigned int estoqueMinimoA = 500;
   unsigned int estoqueMinimoB = 2500;

   double valortotalA;
   double valortotalB;

   int resultadoA, resultadoB;

   printf("Produto %s tem estoque %u e o valor unitário é %.2f\n", produtoA, estoqueA, valorA);
   printf("Produto %s tem estoque %u e o valor unitário é %.2f\n", produtoB, estoqueB, valorB);

   resultadoA = estoqueA > estoqueMinimoA;
   resultadoB = estoqueB > estoqueMinimoB;

   printf("o Produto %s tem estoque minimo %d", produtoA, resultadoA);
   printf("o Produto %s tem estoque minimo %d", produtoB, resultadoB);

   printf("O valor total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f): %f\n",
                                                    estoqueA * valorA,
                                                    estoqueB * valorB,
                                                    (estoqueA * valorA) > (estoqueB * valorB));




}