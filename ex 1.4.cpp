//1.4 Dados um salário e um percentual de reajuste, calcule o salário reajustado. Considere que o percentual de reajuste 
//é dado por um número real entre 0 e 1. Por exemplo, se o reajuste for de 15%, o usuário deve digitar o número 0.15
#include <stdio.h>
main(){
    float salario, reajuste, completo;
    printf("Digite o seu salario\n");
    scanf("%f", &salario);
    printf("Digite o seu reajuste sem porcentagem (exemplo 0.15)\n");
    scanf("%f", &reajuste);
    completo = (salario*reajuste)+salario;
    printf("Seu salario reajustado e de: %.1f", completo);
}