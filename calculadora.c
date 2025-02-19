#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

//aprendendo C e aprimorando a logica
int main() {
    setlocale(LC_ALL, "Portuguese");
	printf("Utilizando caracteres e acentuação da língua portuguesa!\n\n");
    printf("Localidade corrente: %s\n", setlocale(LC_ALL, NULL));

    float num1, num2, resultado;
    int operador;

    printf("Digite o primeiro número: \n");
    scanf_s("%f", &num1);
    
    printf("Digite o segundo número: \n");
    scanf_s("%f", &num2);

    printf("Selecione o operador: \n");
    
    printf("1: Adicao\n");
    printf("2: Subtracao\n");
    printf("3: Multiplicacao\n");
    printf("4: Divisao\n");

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
    };     
;}
