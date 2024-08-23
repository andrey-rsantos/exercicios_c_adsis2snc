/*
3. Faça um programa que receba três notas e seus respectivos pesos,
calcule e mostre a média ponderada.
*/

#include <stdio.h>

int main(void) {

    float nota1, nota2, nota3, peso1, peso2, peso3, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);
    printf("Agora informe o peso dessa nota: ");
    scanf("%f", &peso1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    printf("Agora informe o peso dessa nota: ");
    scanf("%f", &peso2);

    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    printf("Agora informe o peso dessa nota: ");
    scanf("%f", &peso3);

    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3)/(peso1 + peso2 + peso3);
    printf("A média ponderada é: %f", media);

    return 0;
}
