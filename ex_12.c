#include <stdio.h>
#include <locale.h>

main() {
	setlocale(LC_ALL, "Portuguese");

	printf("MÉDIA DAS NOTAS \n");

	printf("Seu nome: \n");
    char nome[50];
    scanf("%s",nome);

	printf("\n\n\Digite suas duas notas: \n");
	float nota01, nota02, media;

	scanf_s("%f%f", &nota01, &nota02);

	media = (nota01 + nota02) / 2;
 printf("%s", nome);
	printf(": Sua média é: %.2f", media);

	if (media > 7)
	{
		printf(" - APROVADO\n\n");
	}
	else if (media < 4) {
		printf(" - REPROVADO, sem possibilidade de recuperação\n\n");
	}
	return;
}

