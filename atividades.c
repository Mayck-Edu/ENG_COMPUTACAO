#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");

	printf("\nSelecione o prejeto: \n");
	printf("1: IDADES \n");
	printf("2: MÉDIA DAS NOTAS \n");
	printf("3: SAIR \n");
	int escolha;
	scanf_s("%d", &escolha);

	switch (escolha)
	{
	case 1:
		idade();
		main();
		return;
	case 2:
		media();
		main();
		return;
	case 3:
		break;
	default:
		printf("Faça sua escolha!!\n\n");
		main();
		return;
	}
}

idade() {
	int idade;
	printf("\n\nDigite sua idade: \n");
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

media() {
	printf("\n\n\Digite suas duas notas: \n");
	float nota01, nota02, media;

	scanf_s("%f%f", &nota01, &nota02);

	media = (nota01 + nota02) / 2;

	printf("Sua média é: %.2f", media);

	if (media > 7)
	{
		printf(" - APROVADO\n\n");
	}
	else if (media < 4) {
		printf(" - REPROVADO, sem possibilidade de recuperação\n\n");
	}
	return;
}
               

