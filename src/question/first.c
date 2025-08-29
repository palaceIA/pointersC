#include <stdio.h>


void pointersInfo(int value){
	int *p  ; 
	p = &value;
	printf("Valor guardado no ponteiro  : %p\n",p );
	printf("Valor de endereçamento do ponteiro : %d\n",*p) ;
	printf("Endereço do valor de entrada : %p\n", (void *)&value) ; 
}

int main()
{
	int value = 10 ; 
	pointersInfo(value) ; 
	return 0;
}