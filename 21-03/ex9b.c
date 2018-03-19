#include <stdio.h>

void troca (int *i, int *j) {
	int temp;
	
	temp = *i;
	*i = *j;
	*j = temp;
	
	return;
}

int main () {	
	int x = 10, y = 9;
	
	troca(&x, &y);
	
    return 0;
}

