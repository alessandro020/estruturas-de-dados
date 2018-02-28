#include <stdlib.h>
#include <stdio.h>

int main(){
/*Faça um programa que leia um valor inteiro n e crie dinamicamente um vetor de n elementos
do tipo inteiro. Em seguida o programa deve ler os elementos desse vetor. Depois, o vetor
preenchido deve ser impresso. Além disso, antes de finalizar o programa, deve-se liberar a área
de memória alocada.*/
	
	//declarar vaiavel inteira
	int n = 0, *p;
	int cont = 0;
	
	

	//ler um numero inteiro
	printf("Entre com o tamanho do vetor:\n", n);
	scanf("%i",&n);
	
	//reservar memoria necessaria para o vetor
	p=(int*)malloc(sizeof(int)*n);
	
	printf("Vetor de %i espacos criado.\n", n);
		
	//ler os elementos desse vetor
	printf("Entre com os elementos do vetor.\n", n);	
	for(cont; cont < n; cont++){
		printf("", n);	
		scanf("%i",	p+cont );	
	}
	
	//imprimir o vetor
	
	for(cont=0; cont < n; cont++){
		printf("\nVetor %i: ", cont);
		printf("%i\n",*(p+cont));	
	}
	
	free(p);
	return 0;
}
