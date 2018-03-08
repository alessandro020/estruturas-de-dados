#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ex2.c"

int main(){
	Pesquisa *pesquisa, qtdHab[5];
	int filhosS, idadeS;
	char sexoS[10];
	float salarioS, media;
	
	int total, cont;
	
	for(cont=0;cont<5;cont++){
		
		printf("Sexo do habitante: ");
		fflush(stdin);
		gets(sexoS);
		
		printf("Idade do habitante: ");
		scanf("%d", &idadeS);
		
		printf("Quantidade de filhos: ");
		scanf("%d", &filhosS);
		
		printf("Salario do habitante: ");
		scanf("%f", &salarioS);
		
		pesquisa = criar(sexoS, idadeS, filhosS, salarioS);
		qtdHab[cont] = *pesquisa;
		
	}	
	
	for(cont=0;cont<5;cont++){
		pesquisa = &qtdHab[cont];
		acessar(pesquisa,sexoS,&idadeS,&filhosS,&salarioS);
		printf("\nSexo: %s.\nIdade: %d.\nFilhos: %d.\nSalario: %0.2f.", sexoS, idadeS, filhosS, salarioS);
		total = total + salarioS;
	}
	
	media = total/5;
	printf("\n A media dos salarios e: %0.2f", media);
	
	return 0;
}
