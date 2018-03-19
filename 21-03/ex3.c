#include <stdlib.h>
#include <stdio.h>

int main(){
	//Declara as variáveis que serão usadas.
	int y, *p, x; 
	//Atribui 0 a y.
	y = 0;      
	//Atribui o endereço de y a p.
	p = &y;
	//Atribui o conteúdo do endereço de p a x ou seja o valor de y.
	x = *p;      
    //Atribui 4 a x.           
	x = 4;  
	//Incrementa em 1 o conteúdo que p aponta, o valor de y passa a ser 1.              
	(*p)++;     
	//Decrementa x, o valor de x passa a ser 3.
	x--;   
	//Adiciona x ao conteúdo de p, ou seja, em y. y passa a ser 4.        
	(*p) += x;   
	//imprime a variável y.
	printf ("y = %d\n", y); 

	return 0;
}
