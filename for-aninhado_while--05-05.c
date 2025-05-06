#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int t, m; //t = número tabuada, m = número multiplicado

    for(t = 1; t<=3; t++){
        for(m = 1; m<=10; m++){
        printf("%d x %d = %d\n", t, m, t*m);
    }
    printf("\n");
    }
}*/

int main()
{
    int n, soma;
    printf("Digite 1 para iniciar ou 0 para sair \n");
    scanf("%d", &n);

    if(n==1){
        while(n!=0){
            printf("Digite um valor ou 0 para sair\n");
            scanf("%d", &n);

            if(n>0){
            printf("Valor = %d\n\n", n);
            soma += n;
            }
        }
     }
    printf("----------------------", soma);
    printf("\n SOMA = %d\n", soma);
    }

