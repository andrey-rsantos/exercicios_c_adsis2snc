/*
13. Cada degrau de uma escada tem X de altura. 

Faça um programa que receba essa altura e a altura que o
usuário deseja alcançar subindo a escada, calcule e
mostre quantos degraus ele deverá subir para atingir
seu objetivo, sem se preocupar com a altura do
usuário. Todas as medidas fornecidas devem estar em
metros.
*/


#include <stdio.h>
#include <math.h>
//math e ceil -> utilizado para arredondar o resultado para cima.


int main(void){

    float altura_degrau, altura_desejada;
    int degraus_subir;

    printf("Informe a altura em metros de cada degrau da escada (utilize ponto como separador decimal): ");
    scanf("%f", &altura_degrau);
    printf("Informe qual altura você pretende alcançar subindo a escada (utilize ponto como separador decimal): ");
    scanf("%f", &altura_desejada);

    degraus_subir = ceil(altura_desejada / altura_degrau);
    printf("Você precisa subir %d degraus para alcançar seu objetivo.\n", degraus_subir);



    return 0;
}