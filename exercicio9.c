/*
9. Sabe-se que:
pé = 12 polegadas
1 jarda = 3 pés
1 milha = 1,760 jarda
Faça um programa que receba uma medida em pés, faça
as conversões a seguir e mostre os resultados.
a) polegadas;
b) jardas;
c) milhas.
*/

#include <stdio.h>

int main(void){

    float pes, jarda, polegadas, milha;

    printf("Informe uma medida em pés: ");
    scanf("%f", &pes);

    polegadas = pes * 12;
    jarda = pes / 3;
    milha = jarda / 1760;

    printf("Polegadas: %.2f\n", polegadas);
    printf("Jardas: %.2f\n", jarda);
    printf("Milhas: %.2f\n", milha);

    return 0;
}
