#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Digite seu número: \n");
    scanf("%d", &numero);

    if(numero%2 == 0){
        printf("Par");
    }else{
        printf("Ímpar");
    }

;}
