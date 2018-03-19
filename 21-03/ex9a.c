#include <stdio.h>

int main () {	

	int x, *p;
	x = 100;
	//P é uma variável do tipo ponteiro, logo na linha a baixo deveria ser p = endereço de x.
	p = &x;
	printf("Valor de p: %d.\n", *p);

    return 0;
}
