/*
7. Faça um programa que calcule e mostre a área de
um círculo. Sabe-se que: Área = π * R2.
*/

#include <stdio.h>

int main(void) {

    float area, r;
    const float pi = 3.1415;

    printf("Informe o valor do raio do círculo: ");
    scanf("%f", &r);

    
    area = pi * r * r;

    printf("A área do círculo é: %.2f\n", area);



    return 0;
}
