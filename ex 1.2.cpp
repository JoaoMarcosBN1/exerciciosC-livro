//1.2 Dado o total de vendas de um vendedor, calcule a sua comissão. Suponha que a comissão do vendedor seja de 10% do total de vendas.

#include <stdio.h>

main(){
    float tv;
    printf("Digite o total de vendas:\n");
    scanf("%f", &tv);
//O usuário digita o total das vendas

    printf("A sua comissao e de: %.1f reais", tv*0.10);
//O usuário recebe o valor da sua comissão
}