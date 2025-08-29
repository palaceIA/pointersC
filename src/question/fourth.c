#include <stdio.h>

int quantidadeFuncionario(){
	int quantidade;
	printf("Deseja cadastrar horas de quantos funcionarios : ");
	scanf("%d",&quantidade);
	return quantidade ; 
}

void cadastrarHoras(int horas[],int tamanho){
	int *p = horas ; 
	for (int i = 0; i < tamanho; ++i){
		printf("Horas de trabalho do Funcionario %d: ", i + 1);
		scanf("%d", &p[i]);			
	}
}

int totalHorasTrabalhadas(int horas[],int tamanho){
	int *p = horas ;
	int somador = 0 ;
	for (int i = 0; i < tamanho; ++i){
		somador += p[i] ; 
	}
	return somador ; 
}

int main(){
	int quantidade = quantidadeFuncionario() ; 
	int horas[quantidade] ;

	cadastrarHoras(horas,quantidade);

	int total = totalHorasTrabalhadas(horas,quantidade);

	printf("Total de horas trabalhadas pelos funcionarios : %d\n",total);

	return 0;
}



