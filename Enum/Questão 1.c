# include < stdio.h >
# include < stdlib.h >
// cria o enum Genero
typedef  enum genero{
	MASCULINO,
	FEMININO,
	NEUTRO
} Genero;
// cria uma struct pessoa
typedef  struct pessoa{
	char nome[ 50 ];
	int idade;
	Genero;
}Pessoa;

int  main (){
	Pessoa pessoa; // variavel
	printf ( " Informe seu nome: \n " );
	scanf ( " %[^ \n ]s " , pessoa. nome );
	printf ( " Informe sua idade: \n  " );
	scanf ( " %d " , &pessoa. idade );
	printf ( " Informe seu genero: \n " );
	//forcando o scanf a ler e endereçar na variavel criada
	scanf ( " %d " , ( int *) &pessoa. genero );
	//imprimindo os dados colocados pelo usuario
	printf ( " SEU NOME: %s \n SUA IDADE: %d \n " , pessoa. nome , pessoa. idade );
	//funcao em que se genero for recebido o dado MASCULINO então imprimi masculino, se não imprimi feminino
	pessoa. genero ==MASCULINO?( " Masculino: " ): printf ( " GENERO: Feminino " );
	return  0 ;
}
