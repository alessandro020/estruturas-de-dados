#include <stdlib.h>
#include <stdio.h>
#include "livro.h"
#include <string.h>


	
	struct livro {
		char titulo[30];
		int ano;
		int pag;
		float pre;		
	};
	
	Livro* criar(char *titulolido, int anolido, int paglida, float prelido){
			Livro *a = (Livro*) malloc(sizeof(Livro));
		
		if(a!=NULL){
			strcpy(a->titulo,titulolido);
			a->ano = anolido;
			a->pag = paglida;
			a->pre = prelido;
		}
		
	return a;
	} 
	
	void acessar (Livro *livro, char *titulolido, int *anolido, int *paglida, float *prelido){
		strcpy(titulolido, livro -> titulo);
		*anolido = livro -> ano;
		*paglida = livro -> pag;
		*prelido = livro -> pre;
	}
	
	void liberar(Livro *livro){
		free(livro);
	}

