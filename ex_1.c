#include <stdio.h>
#include <locale.h>

 main(){
    setlocale(LC_ALL, "Portuguese");
    printf("\n\n\Digite as idades: \n");
	float idade01, idade02;

	scanf("%f%f", &idade01, &idade02);

	if (idade01 > idade02)
	{
		printf("idade 1 é maior que a idade 2 \n");
	}
	if (idade01 == idade02)
	{
		printf("idade 1 é igual a idade 2 \n");
	}
	else {
		printf("idade 2 é maior que a idade 1 \n");
	}
	return;
}
