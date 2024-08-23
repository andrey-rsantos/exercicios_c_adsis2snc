/*
5. Faça um programa que receba o salário de um
funcionário e o percentual de aumento, calcule e
mostre o valor do aumento e o novo salário.
*/

#include <stdio.h>

int main(void) {

  float salario, aumento, novo_salario;

  printf("Informe o salário do funcionário no seguinte formato '0000.00': ");
  scanf("%f", &salario);
  printf("Informe o percentual de aumento desse funcionário (informe somente o número): ");
  scanf("%f", &aumento);

  novo_salario = salario + (salario * aumento) / 100;
  printf("O novo salário deste funcionário será: %.2f\n", novo_salario);

  return 0;
}
