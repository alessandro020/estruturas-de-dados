#include <stdlib.h>
#include <stdio.h>

int main(){
	//Incrementa o ponteiro(endere�o).
	p++;
	
	//Incrementa o valor apontado por p.
	(*p)++;
	
	//Incremento o endere�o de p e acessa o novo valor.
	*(p++);
	
	return 0;
}
