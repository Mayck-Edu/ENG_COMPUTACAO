#include <stdio.h>
#include <locale.h>

main() {
	
	setlocale(LC_ALL, "Portuguese");

	
	printf("Selecione o prejeto: \n");
	printf("1: IDADES \n");
	printf("2: MÉDIA DAS NOTAS: \n");
	int escolha;
	scanf_s("%d", &escolha);

	switch (escolha)
	{
	case 1:
		idade();
		break;
	case 2:
		media();
		break;
	default:
		break;
	}
}

idade() {
	int idade;
	printf("\n\nDigite sua idade: \n");
	scanf_s("%d", &idade);

	if (idade <= 12)
	{
		printf("Você é uma criança");
	}
	else if (idade <= 19)
	{
		printf("Você é uma adolescente");
	}
	else if (idade <= 60)
	{
		printf("Você é um adulto");
	}
	else if (idade > 60)
	{
		printf("Você é um idoso");
	}else if (idade > 0)
	{
		printf("Você nasceu? kkk");
	}
	else
	{
		printf("Isso não é uma idade");
	}
}

media() {
	printf("\n\n\Digite suas duas notas: \n");
	float nota01, nota02, media;


	scanf_s("%f%f", &nota01, &nota02);

	media = (nota01 + nota02)/2;
	
	printf("Sua média é: %.2f", media);

	if (media > 7)
	{
		printf("APROVADO");
	}
	else if (media < 4) {
		printf("REPROVADO, sem possibilidade de recuperação");
	}


}

