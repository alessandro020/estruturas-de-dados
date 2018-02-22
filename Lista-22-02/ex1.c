#include <stdio.h>
#include <stdlib.h>
int main (){
	int x, *p;	
	p = &x;
	x = 10;
	
	printf("%i",*p);

	return 0;
}
