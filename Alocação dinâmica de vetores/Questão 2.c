#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função de comparação do gabarito com as respostas dos alunos;
float comparar(char *gabarito, char *alunos, int x){
 //declarando uma variavel do tipo int e uma do tipo float que inicializa com o valor 0.
  int i;
	float y=0;
  //laço de repetição para comparar as respostas dos alunos com o gabarito da prova
	for(i=0;i<x;i++){
		if(alunos[i]==gabarito[i]){
			y+=10;
		}
	}
	return y;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
  // declarando tres variaveis do tipo inteiro.
  // declarando duas variaveis do tipo float inicializadas em 0.
	int questoes, i, j;
	float nota=0, porcentagem=0;
	
	//printf para fazer a delimitação do tamanho dos vetores;
	printf("Quantidade de questões: ");
	scanf("%d", &questoes);
	
	//alocação de variáveis; 
	char *gabarito, *alunos;
  // alocando dinamicamente a variavel gabarito do tipo char do tamanho do vetor questoes
	gabarito=(char*)malloc(questoes*sizeof(char));
	// verificando se foi alocado corretamente
  if(gabarito==NULL){
		printf("Erro!");
		exit(1);
	}
  //alocando dinamicamente a variavel aluno do tipo char do tamanho do vetor questoes
	alunos=(char*)malloc(questoes*sizeof(char));
  // verificando se foi alocado corretamente
	if(alunos==NULL){
		printf("Erro!");
		exit(1);
	}
	
	//faço de repetição para inserir gabarito da prova;
	for(i=0;i<questoes;i++){
		printf("\nDigite a resposta da %dª questão: ", i+1);
		scanf("%s", &gabarito[i]);
	}
	
	//faço de repetição definindo respostas;
	for(i=0;i<10;i++){
		printf("\nAgora digite as respostas do %dº aluno.", i+1);
		for(j=0;j<questoes;j++){
			printf("\n%dª resposta: ", j+1);
			scanf("\n%s", &alunos[j]);	
		}
    //A nota vai estar recebendo a comparação do gabarito, alunos e questoes
		nota=comparar(gabarito, alunos, questoes);
    //imprimindo as notas 
		printf("\nNota: %.2f", nota/questoes);
	// if para se a nota for maior ou igual a 6, aluno adicionado da taxa de aprovação
    if(nota>=6){
			porcentagem+=1;
		}
	}
	//calculando porcentagem.
	printf("\nPorcentagem de aprovação: %.1f%%", (porcentagem/10)*100);
  //liberando memoria das alocaçoes
	free(gabarito);
	free(alunos);
	return(0);
}
