#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");


    float num1, resultado;


    printf("Digite o valor em Celsius a ser transformado para Fahrenheit: \n");
    scanf("%f", &num1);

    resultado = ((9*num1)+160)/5;
        printf("\n %2.f °F \n", resultado);


;}
