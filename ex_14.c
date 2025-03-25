#include <stdio.h> 
#include <stdlib.h> 

  

main() 

{ 

int idade; 

 //troquei os %f para %d 

printf ("Digite a sua idade\n"); 

scanf("%d", &idade); 

  

if(idade <= 12){ 

    printf("Voce tem %d e eh uma criança\n", idade); 

    } 

//adicionei else junto ao if = else if 

else if(idade <= 19) //ponto e virgula removido 

    { 

    printf("Voce tem %d e eh um adolescente\n", idade); 

    } 

else if(idade <= 60) 

    { 

    printf("Voce tem %d e eh um adulto\n", idade); 

    } 

else{ 

    printf("Voce tem %d e eh um idoso\n", idade); 

} 

} 
