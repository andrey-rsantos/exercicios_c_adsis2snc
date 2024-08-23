/*
6. Faça um programa que calcule e mostre a área de
um triângulo. Sabe-se que: Área = (base * altura)/2.
*/

#include <stdio.h>

int main(void) {

  float area, base, altura;

  printf("Informe o valor referente à base do triângulo: ");
  scanf("%f", &base);
  printf("Informe o valor referente à altura do triângulo: ");
  scanf("%f", &altura);

  area = (base * altura) / 2;
  printf("A área do triângulo é: %.2f\n", area);


  return 0;
}
