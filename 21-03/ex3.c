#include <stdlib.h>
#include <stdio.h>

int main(){
	//Declara as vari�veis que ser�o usadas.
	int y, *p, x; 
	//Atribui 0 a y.
	y = 0;      
	//Atribui o endere�o de y a p.
	p = &y;
	//Atribui o conte�do do endere�o de p a x ou seja o valor de y.
	x = *p;      
    //Atribui 4 a x.           
	x = 4;  
	//Incrementa em 1 o conte�do que p aponta, o valor de y passa a ser 1.              
	(*p)++;     
	//Decrementa x, o valor de x passa a ser 3.
	x--;   
	//Adiciona x ao conte�do de p, ou seja, em y. y passa a ser 4.        
	(*p) += x;   
	//imprime a vari�vel y.
	printf ("y = %d\n", y); 

	return 0;
}
