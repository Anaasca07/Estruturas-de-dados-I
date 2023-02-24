# include<stdio.h>
# include<stdlib.h>
//declarando uma struct e renomeando ela como Funcionario
typedef  struct funcionario{
	char nome[ 50 ];
	float salario;
	int identificador;
	char cargo[ 50 ];
	
}Funcionario;
//declarando uma funcao preenche para preencher os dados dos funcionarios 
void  preencher (Funcionario *preenche, int qtd){
  //declarando um laço de repetição para fornecer a quantidade de vezes de acordo com a quanridade de funcionarios
	int i;
	for ( i = 0 ; i < qtd; i++){
	printf ( " Informe o nome do funcionamento: " );
	scanf ( " %[^ \n ]s ", preenche[i]. nome ); //lendo e endereçando a informação a variavel
	printf ( " Informe o salario: " );
	scanf ( " %f " , &preenche[i]. salario );
	printf ( " Informe o identificador do funcionamento: " );
	scanf ( " %d " , &preenche[i]. identificador );
	printf ( " Informe a carga: " );
	scanf ( " %[^ \n ]s " , preenche[i]. cargo );
	//printif para imprimir as informaçoes adicionadaspelo usuario
	printf ( " Nome do funcionamento e %s , seu salario e de %.1f , o identificador e %d , com carga de %s  \n " , preenche[i]. nome , preenche[i]. salario , preenche[i ]. identificador , preenche[i]. cargo );
}
}
//funcao float para alterar o salario do funcionario
// o salario é acrescentado mais 1000
float  altera (Funcionario * altera, int indice){
	altera[indice]. salario += 1000 ;
}
// funcao para saber quem tem o menor salario e quem tem o maior salario
void  maior_menor (Funcionario * mem, int qtd){
 float	menor = 0 , maior = 0 ;
 int indice_maior, indice_menor;
 	int i;
	for ( i = 0 ; i < qtd; i++){
		if (i == 0 ){
			menor = mem[i]. salario ;
		}
		if (mem[i]. salario > maior){
			maior = mem[i]. salario ;
			indice_maior = i;
		}
		if (mem[i]. salario < menor){
			menor = mem[i]. salario ;
			indice_menor = i;
		}
	}
	//imprimindo o resultado depois de verificar qual funcionario tem o menor salario e qual tem o maior
	printf ( " O funcionamento com maior salario e %s , com salario de %.1f " , mem[indice_maior]. nome , mem[indice_maior]. salario );
	printf ( " O funcionamento com menor salario e %s , com salario de %.1f " , mem[indice_menor]. nome , mem[indice_menor]. salario );
}

int  main (){
	// declarando duas variaveis do tipo inteiro 
	int quantidade, indice ;
	printf ( " Informe a quantidade de funcionarios: " );
	scanf ( " %i " , &quantidade);
//alocando dinamicamente 
	Funcionario * empresa = (Funcionario*) malloc (quantidade* sizeof (Funcionario) );
	if (empresa == NULL ){
		exit ( 1 );
	}
	
	preencher (empresa, quantidade);
	altera (empresa, 0 );
	maior_menor (empresa, quantidade);
	
	
	return 0 ;
}
