/*
8. Faça um programa que receba um número positivo e
maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.
*/

#include <stdio.h>
#include <math.h>

int main(void){

    float num_positivo;

    do {
        printf("Informe um número positivo que seja maior que zero: ");
        scanf("%f", &num_positivo);

        if(num_positivo <= 0) {
            printf("Você informou um número inválido.\n");
        }
    } while(num_positivo <= 0);


    printf("O número %.2f elevado ao quadrado é: %.2f\n", num_positivo, num_positivo * num_positivo);
    printf("O número %.2f elevado ao cubo é: %.2f\n", num_positivo, num_positivo * num_positivo * num_positivo);
    printf("A raiz quadrada do número %.2f é: %.2f\n", num_positivo, sqrt(num_positivo));
    printf("A raiz cúbica do número %.2f é: %.2f\n", num_positivo, cbrt(num_positivo));





    return 0;
}
