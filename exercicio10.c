/*
10. O custo ao consumidor de um carro novo é a soma do
preço de fábrica com o percentual de lucro do distribuidor e
dos impostos aplicados ao preço de fábrica.

Faça um programa que receba o preço de fábrica de um
veículo, o percentual de lucro do distribuidor e o percentual
de impostos, calcule e mostre:
a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo.
*/


#include <stdio.h>

int main(void){


    float preco_fabrica, p_lucro, p_impostos, preco_final;

    printf("Qual é o preço de fábrica do veículo? ");
    scanf("%f", &preco_fabrica);
    printf("Qual é o percentual de lucro do distribuidor? (informe somente o número) ");
    scanf("%f", &p_lucro);
    printf("Qual é o percentual de impostos deste veículo? (informe somente o número) ");
    scanf("%f", &p_impostos);

    p_lucro = (p_lucro * preco_fabrica) / 100;
    p_impostos = (p_impostos * preco_fabrica) / 100;
    preco_final = preco_fabrica + p_lucro + p_impostos;

    printf("O lucro do distribuidor neste caso é %.2f\n", p_lucro);
    printf("O valor pago em impostos neste caso é %.2f\n", p_impostos);
    printf("Por fim, o valor final do veículo fica %.2f\n", preco_final);


    return 0;
}
