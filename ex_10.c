#include <stdio.h>
#include <locale.h>

 main(){
     setlocale(LC_ALL, "Portuguese");
    int idade;
	printf("Digite sua idade: \n");
	scanf_s("%d", &idade);

	if (idade <= 12)
	{
		printf("Você é uma criança.\n\n");
	}
	else if (idade <= 19)
	{
		printf("Você é um adolescente.\n\n");
	}
	else if (idade <= 60)
	{
		printf("Você é um adulto.\n\n");
	}
	else if (idade > 60)
	{
		printf("Você é um idoso.\n\n");
	}
	else if (idade >= 0)
	{
		printf("Ops...\n\n");
	}
	else
	{
		printf("Isso não é uma idade\n\n");
	}
	return;
}
