#include <stdio.h>
#include <stdlib.h>
#include "livro.c"

int main() {
	Livro *livro, qtdlivro[5];
	char titulolido[30];
	int anolido;
	int paglida;
	float prelido, media;

	int total, cont;
	
	for(cont=0;cont<5;cont++){
		
		printf("Titulo do livro: ");
		fflush(stdin);
		gets(titulolido);
		
		printf("Ano do livro: ");
		scanf("%i", &anolido);
		
		printf("Quantidade de Paginas: ");
		scanf("%i", &paglida);
		
		printf("Preço do livro: ");
		scanf("%f", &prelido);
		
		livro = criar(titulolido, anolido, paglida, prelido);
		qtdlivro[cont] = *livro;
		
		
	}
	
	for(cont=0;cont<5;cont++){
		livro = &qtdlivro[cont];
		acessar(livro,titulolido,&anolido,&paglida,&prelido);
		printf("\nTitulo do livro: %s, ano: %i, pags: %i, Preço: %f", titulolido,anolido,paglida,prelido);
		total = total + paglida;
	}
	
	media = total/5;
	printf("\n Media de paginas: %.2f",media);
	
	
	return 0;
}
