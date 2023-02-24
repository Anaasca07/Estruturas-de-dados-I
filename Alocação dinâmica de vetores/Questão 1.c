#include<stdio.h>
#include<stdlib.h>

int main(){
//declarando quatro variaveis do tipo inteiro, onde duas delas se inicializa com o valor 0.
int n,i,ctf = 0,ctm = 0;
// um printf para saber q quantidade de pessoas que responderam as perguntas no qual o numero de pessoas vai ser direcionado a variavel n que funcionara como um vetor.
printf("digite o numero de pessoas que responderam as perguntas\n");
scanf("%d", &n);
//declarando dinamicamente duas alocações uma do tipo char e a outra do tipo int  onde o tamanho vai ser de acordo com o vetor n
char *sexo = (char *)malloc(n * sizeof(char));
int *op = (int *)malloc(n * sizeof(int));
//laço de repetição para cada pessoa responder as perguntas
for( i = 0; i < n; i++){
   printf("digite o sexo do intrevistado F para Feminino e M pra masculino\n");
    scanf(" %c", &sexo[i]);
    printf("digite 0 pra nao gostou e 1 pra gostou\n");
    scanf("%d", &op[i]);
}
  // declarando mais uma variavel do tipo inteiro para ser usada como vetor no laço de repetição
  int j;
for( j = 0; j < n; j++){
// if para saber quantas mulheres gostaram 
// if para saber quantos homens não gostaram
if ((sexo[j] == 'F') && (op[j] == 1)){ ctf++;}
if ((sexo[j] == 'M') && (op[j] == 0)){ ctm++;}

}
// declarando duas variaveis do tipo float para saber a porcentagem de cada um
float FM, MM;
FM = (ctf*100)/n;
MM = (ctm*100)/n;
system("cls");
  //imprimindo as porcentagens dos resultados de acordo com as respostas das pessoas
printf("A porcentagem de pessoas do sexo feminino : %.2f%%\n",FM);
printf("A porcentagem de pessoas do sexo masculino : %.2f%%\n",MM);
// liberando memoria 
free(sexo);
free(op);

}
