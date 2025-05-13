#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    int n[50];
    setlocale(LC_ALL, "Portuguese");
    printf("Digite 50 numeros: \n");


    for(int i = 1; i<=50; i++){
            printf("\n%dº numero \n", i);
            scanf("%d", &n[i]);
    }

    for(int i = 1; i<=50; i++){
            printf("%dº numero = %d\n", i, n[i]);

    }
}
