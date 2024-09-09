//1.6 Dados um valor em real e a cotação do dólar, converta esse valor em dólares.
#include <stdio.h>

main(){
    float real,cotacao,dolar;

    printf("Coloque o valor em real\n");
    scanf("%f", &real);
    printf("Agora coloque a cotação do dólar atual\n");
    scanf("%f", &cotacao);
    dolar = real/cotacao;
    printf("a sua quantia em dolar é de: %.2f", dolar);
}