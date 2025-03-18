#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");


    float num1, num2, resultado;
    int operador;

    printf("Digite o primeiro número: \n");
    scanf("%f", &num1);

    printf("Digite o segundo número: \n");
    scanf("%f", &num2);

    printf("Selecione o operador: \n");

    printf("1: Adicao\n");
    printf("2: Ao Quadrado\n");
    printf("3: Multiplicacao\n");
    printf("4: Divisao\n");

    scanf("%d", &operador);

    switch (operador)
    {
    case 1:
        resultado = num1 + num2;
        printf("\n Resultado: %2.f\n", resultado);
        break;
    case 2:
        num1 = pow(num1, 2);
        num2 = pow(num2, 2);
        printf("\n Resultado: \n %2.f \n %2.f\n", num1, num2);
        break;
    case 3:
        resultado = num1 * num2;
        printf("\n Resultado: %2.f\n", resultado);
        break;
    case 4:
        resultado = num1 / num2;
        printf("\n Resultado: %2.f\n", resultado);
        break;

    default:
        printf("Algo nao esta correto... tente de novo!");
        break;
    };
;}
