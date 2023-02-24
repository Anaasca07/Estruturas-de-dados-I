#include<stdio.h>

typedef union tipo{
	int alimento;
	int bebida;
	int eletronico;
}Tipo;
typedef struct produto{
	char nome[50];
	float preco;
	Tipo tipo;
}Produto;
 int main (void){
 	Produto produto;
 	int opcao;
 	printf("digite o nome do produto:\n");
 	scanf(" %[^\n]s", produto.nome);
 	printf("digite o preco do produto:\n");
 	scanf("%f", &produto.preco);
 	printf("QUAL O TIPO 0- ALIMENTO, 1- BEBIDA, 2-ELETRONICO:\n");
 	scanf("%d", &opcao);
 	
 	if(opcao==0){
	printf("NOME: %s\n PRECO: %2.f\n TIPO: %d\n", produto.nome, produto.preco, produto.tipo.alimento);
}
 	if(opcao==1){
 		printf("NOME: %s\n PRECO: %2.f\n TIPO: %d\n", produto.nome, produto.preco, produto.tipo.bebida);
 }
 	if(opcao==2){
 			printf("NOME: %s\n PRECO: %2.f\n TIPO: %d\n", produto.nome, produto.preco, produto.tipo.eletronico);
}
	else{
		printf("erro");
	}
	return 0;
}
