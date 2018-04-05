#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pilha.c"

void func(Pilha *p, char s[]){
	int i;
	for (i = 0; s[i] != '\0'; ++i) {
		push(p,s[i]);
	}
}

void desempilhar(Pilha *p){
	char letra;
	while(!empty(p)){
			letra = pop(p);
			printf("%s",letra);
	}
	
}

int main(){
	char palavra[10];	
	
	gets(palavra);
	Pilha *pilha = criapilha();	
	func(pilha,palavra);
	desempilhar(pilha);
	return 0;
}
