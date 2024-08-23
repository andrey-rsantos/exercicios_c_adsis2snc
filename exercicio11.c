/*11. Faça um programa que receba o número de horas
trabalhadas e o valor do salário mínimo, calcule e mostre o
salário a receber, seguindo estas regras:

a) a hora trabalhada vale a metade do salário mínimo.

b) o salário bruto equivale ao número de horas
trabalhadas multiplicado pelo valor da hora trabalhada.

c) o imposto equivale a 3% do salário bruto.

d) o salário a receber equivale ao salário bruto menos o
imposto.
*/


#include <stdio.h>

int main(void){


    float horas_trabalhadas, valor_hora, sal_min, sal_bruto, imposto, sal_receber;

    printf("Informe o número de horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    printf("Informe o valor do salário mínimo: ");
    scanf("%f", &sal_min);


    valor_hora = sal_min / 2;
    sal_bruto = horas_trabalhadas * valor_hora;
    imposto = (sal_bruto * 3) / 100;
    sal_receber = sal_bruto - imposto;

    printf("O salário a receber é: %.2f\n", sal_receber);





    return 0;

}