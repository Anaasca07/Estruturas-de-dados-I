#include <stdio.h>
#include <ctype.h>

int main(){
	int c;
	char entrada[121];
	char saida[121];
	FILE* e;
	FILE* s;
	
	printf("Digite o ome do arquivo de entrada: ");
	scanf("%120s", entrada);
	printf("Digite o nome do arquivo de saida: ");
	scanf("%120s", saida);
	e = fopen(entrada, "rt");
	s = fopen(saida, "wt");
	if(e ==NULL){
		printf("Nao foi possivel abrir o arquivo de entrada. \n");
		return 1;
	}
	else if(s ==NULL){
		printf("Erro! Arquivo de saida\n");
		fclose(e);
		return 1;
	}
	while((c = fgetc(e))!= EOF){
		fputc(toupeer(c), s);
	}
	fclose(e);
	fclose(s);
	
	return 0;
}
