#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");


    float altura, largura, comprimento, resultado;


    printf("Digite os valores para calcular o volume do cubo: \n");

    printf("Comprimento: \n");
    scanf("%f", &comprimento);

    printf("Altura: \n");
    scanf("%f", &altura);

    printf("Largura: \n");
    scanf("%f", &largura);

    resultado = comprimento*largura*altura;
        printf("\n %2.f m³ \n", resultado);


;}
