#include <stdio.h>

int main () {	
	
	int x, y, *p;
	y = 0; p = &y;
	x = *p; x = 4;
	(*p)++;
	--x;
	(*p) += x;
	//x = 3
	//y = 4
	//*p= 4
	printf("%d", x);
	printf("%d", y);
	printf("%d", p);
    return 0;
}
