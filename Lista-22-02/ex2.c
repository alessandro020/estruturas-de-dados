#include <stdio.h>
#include <stdlib.h>
int main (){
	int x, *p;	
	x = 10;
	//Deve-se usar o & para imprimir o valor contido no endereço X.
	//Não usa-se o asterisco, pois, o mesmo só é usado para declaração de ponteiros.
	p = &x;


	return 0;
}
