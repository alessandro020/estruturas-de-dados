#include <stdio.h>
#include <stdlib.h>
int main (){
	int x, *p;	
	x = 10;
	//Deve-se usar o & para imprimir o valor contido no endere�o X.
	//N�o usa-se o asterisco, pois, o mesmo s� � usado para declara��o de ponteiros.
	p = &x;


	return 0;
}
