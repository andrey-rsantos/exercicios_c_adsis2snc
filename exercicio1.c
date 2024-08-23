/*1. Faça um programa que receba quatro números inteiros,
calcule e mostre a soma desses números.
*/


#include <stdio.h>

int main(void) {

    int n1, n2, n3, n4, soma;

    printf("Digite um número inteiro: ");
    scanf("%d", &n1);
    printf("Digite um segundo número inteiro: ");
    scanf("%d", &n2);
    printf("Digite um terceiro número inteiro: ");
    scanf("%d", &n3);
    printf("Digite mais um número inteiro: ");
    scanf("%d", &n4);


    soma = n1 + n2 + n3 + n4;
    printf("A soma dos 4 número é: %d", soma);


    return 0;
}

