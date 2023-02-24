#include <stdio.h>
int main(void) {
int a, b, c, d; // variáveis ​​declaradas do tipo inteiro
int *p1; //declarou um ponteiro do tipo inteiro
int *p2 = &a; //declarou um ponteiro do tipo inteiro e esse ponteiro recebe o endereço da variavel a
int *p3 = &c; //declarou um ponteiro do tipo inteiro e esse ponteiro recebe o endereço da variavel c
p1 = p2; //o ponteiro p1 recebe o ponteiro p2
*p2 = 10; //o ponteiro p2 recebe o valor 10 como conteudo
b = 20; // variavel b recebe 20
int **pp; //declarou um ponteiro para ponteiro
pp = &p1; //o ponteiro para ponteiro recebe o endereço de p1
*p3 = **pp; //p3 recebe o conteudo de poonteiro para ponteiro
int *p4 = &d; //p4 recebe o endereço de d
*p4 = b + (*p1)++; //p4 vai ser igual b mais o conteudo de p1 20+10 = 30, e incrementa mais 1 em p1 10+1 = 1
printf("%d\t%d\t%d\t%d\n", a, b, c, d); //imprime os valores
retorna 0;
}
// a) 11, b) 20, c) 10, d) 30
