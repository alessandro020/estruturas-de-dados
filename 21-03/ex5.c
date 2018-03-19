#include <stdio.h>


int main () {
	
    int vet[100][100];
    int *x = vet[0];
	int i;
	
    for (i = 0; i < (100*100); i++){
    	
        *(x + i) = i + 1;
     	printf("%d ", *(x + i));
	}
	
    return 0;
}
