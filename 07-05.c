#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n[10], x[10], soma[10];
printf("##VETOR01## \n");
    for(i = 1; i<=3; i++){
            printf("Qual o %d valor? \n", i);
            scanf("%d", &n[i]);
    }
    printf("##VETOR02## \n");
    for(i = 1; i<=3; i++){
            printf("Qual o %d valor? \n", i);
            scanf("%d", &x[i]);
    }

    for(i=1;i<=3;i++){
        soma[i] = n[i] + x[i];
}


    /*for(i = 1; i<=3; i++){
            printf("\n valor da %d posicao e = %d", i, n[i]);
            soma = soma + n[i];
    }*/
    for (i=1;i<=5;i++){
       printf("\n A %d posicao da soma dos vetores eh: %.2f\n", i,soma[i]);

 }

}
