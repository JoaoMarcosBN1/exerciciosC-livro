//1.5 Dados o valor da compra e o percentual de desconto, calcule o valor a ser pago. 
//Considere que o percentual de desconto é um número real entre 0 e 1.
#include <stdio.h>

main(){
    float compra, desconto, totalD;
        printf("Digite o valor da compra\n");
        scanf("%f", &compra);
        printf("Digite o desconto\n");
        scanf("%f", &desconto);
        totalD = desconto/100;
        printf("o valor total da sua compra foi de %.2f", compra - (compra*totalD));
}