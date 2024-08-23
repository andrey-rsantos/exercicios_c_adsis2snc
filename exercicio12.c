/*
12. Pedro comprou um saco de ração com peso em quilos. 
Ele possui dois gatos, para os quais fornece a quantidade de ração em gramas. 
A quantidade diária de ração fornecida para cada gato é sempre a mesma.

Faça um programa que receba o peso do saco de ração
e a quantidade de ração fornecida para cada gato,
calcule e mostre quanto restará de ração no saco após
cinco dias.
*/


#include <stdio.h>

int main(void){

    float peso_saco, qtd_racao, resto_racao;

    printf("Informe o peso do saco de ração em kgs (escreva apenas o número): ");
    scanf("%f", &peso_saco);
    printf("Informe a quantidade de ração fornecida em gramas para cada gato (escreva apenas o número): ");
    scanf("%f", &qtd_racao);

    qtd_racao = qtd_racao * 2 / 1000;
    resto_racao = peso_saco - (qtd_racao * 5);
    printf("Após 5 dias restará %.f kg(s) de ração no saco.", resto_racao);



    return 0;
}