#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diaria_01 = 80;
    int diaria_02 = 100;
    int diaria_03 = 150;
    int dias;

    printf("Quantidade de dias:\n");
    scanf("%d", &dias);

    if (dias == 3){
        printf("Valor: %d\n", diaria_01 * dias);
    } else if (dias == 5){
        printf("Valor: %d\n", diaria_02 * dias);
    } else if (dias == 10) {
        printf("Valor: %d\n", diaria_03 * dias);
    } else {
        printf("Opcao invalida!!!\n");
  }
}
