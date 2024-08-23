/*
4. Faça um programa que receba o salário de um
funcionário, calcule e mostre o novo salário,
sabendo-se que este sofreu um aumento de 25%
*/

#include <stdio.h>
#include <locale.h>

int main(void) {

    float salario, novo_salario;

    printf("Informe o seu salário: ");
    scanf("%f", &salario);

    novo_salario = salario + (salario * 25/100);
    printf("Seu novo salário com aumento de 25%% é: %.2f", novo_salario);

    return 0;
}
