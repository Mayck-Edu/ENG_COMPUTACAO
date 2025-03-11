#include <stdio.h>
#include <locale.h>

 main(){
    setlocale(LC_ALL, "Portuguese");
    printf("Digite as números: \n");
	float numero1, numero2;

	scanf("%f%f", &numero1, &numero2);

	if (numero1 > numero2)
	{
		printf("numero 1 é maior que a numero 2 \n");
	}
	if (numero1 == numero2)
	{
		printf("numero 1 é igual a numero 2 \n");
	}
	else {
		printf("numero 2 é maior que a numero 1 \n");
	}
	return;
}
