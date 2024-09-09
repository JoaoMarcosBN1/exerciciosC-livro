//1.1 Dado um número real qualquer, informe qual é o seu dobro.

#include <stdio.h>

main(){
float a;

    printf("Digite um numero para saber o dobro dele\n");
    scanf("%f", &a);
//O usuário digita o número
    
    printf("O dobro do seu numero e %.1f", a*2);
//O usuário recebe o cálculo    
}       