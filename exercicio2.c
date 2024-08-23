/*
2. Faça um programa que receba três notas, calcule e
mostre a média aritmética.
*/

#include <stdio.h>

int main(void) {

    int nota1, nota2, nota3, media;

    printf("Digite uma nota: ");
    scanf("%d", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%d", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%d", &nota3);

    media = (nota1 + nota2 + nota3)/3;
    printf("A média é: %d", media);


    return 0;
}
