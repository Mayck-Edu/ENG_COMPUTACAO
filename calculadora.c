#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//aprendendo C e aprimorando a logica
int main() {
    float num1, num2, resultado;
    int operador;

    printf("Digite o primeiro numero: \n");
    scanf_s("%f", &num1);
    
    printf("Digite o segundo numero: \n");
    scanf_s("%f", &num2);

    printf("Selecione o operador: \n");
    
    printf("1 Adicao\n");
    printf("2 Subtracao\n");
    printf("3 Multiplicacao\n");
    printf("4 Divisao\n");

    scanf_s("%d", &operador);

    switch (operador)
    {
    case 1:
        resultado = num1 + num2;
        printf("\nResultado: %2.f\n", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("\nResultado: %2.f\n", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("\nResultado: %2.f\n", resultado);
        break;
    case 4:
        resultado = num1 / num2;
        printf("\nResultado: %2.f\n", resultado);
        break;

    default:
        printf("Algo nao esta correto... tente de novo!");
        break;
    }
        
;}
