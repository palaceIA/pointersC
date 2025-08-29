#include <stdio.h>

void idadeInfo(int idade){
	int *p ; 
	p = &idade ; 
	printf("Valor da idade : %d\n",*p) ; 
	printf("Endereço da memoria : %p\n",p) ; 
}

int main()
{
	int idade ; 
	printf("Digite a idade do aluno : ") ; 
	scanf("%d",&idade);
	idadeInfo(idade); 
	return 0;
}

