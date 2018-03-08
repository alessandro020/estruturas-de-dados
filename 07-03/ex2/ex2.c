#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ex2.h"

struct pesquisa {
	int idade, filhos;
	char sexo[10];
	float salario;
};

Pesquisa* criar(char *sexoS, int idadeS, int filhosS, float salarioS){
	Pesquisa *a = (Pesquisa*)malloc(sizeof(Pesquisa));
	
	if(a!=NULL){
		strcpy(a->sexo,sexoS);
		a->idade = idadeS;
		a->filhos = filhosS;
		a->salario = salarioS;
	}
	return a;	
}

void acessar(Pesquisa *pesquisa, char *sexoS, int *idadeS, int *filhosS, float *salarioS){
	strcpy(sexoS, pesquisa -> sexo);
	*idadeS = pesquisa -> idade;
	*filhosS = pesquisa -> filhos;
	*salarioS = pesquisa -> salario;
}

void liberar(Pesquisa *pesquisa){
	free(pesquisa);
}

