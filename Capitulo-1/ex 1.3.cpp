//1.3 Dadas as medidas de uma sala em metros (comprimento e largura), informe a sua área em metros quadrados.
#include <stdio.h>
main(){
    float com, lar, area;
    printf("Digite o comprimento da sala\n");
    scanf("%f", &com);
    printf("Digite a largura da sala\n");
    scanf("%f", &lar);
    area = com*lar;
    printf("A area da sua sala é de: %.1f m2", area);
}