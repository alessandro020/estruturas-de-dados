#include <stdlib.h>
#include <stdio.h>

int main(){
	//Incrementa o ponteiro(endereço).
	p++;
	
	//Incrementa o valor apontado por p.
	(*p)++;
	
	//Incremento o endereço de p e acessa o novo valor.
	*(p++);
	
	return 0;
}
