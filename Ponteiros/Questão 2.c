int main(void) {
intx, *p; // declarou uma variavel do tipo inteiro e um ponteiro
x = 100; // x recebe o valor 100
p = x; // essa linha contém um erro, deveria ser p = &x;
printf(“Valor de p = %p\tValor de *p = %d”, p, *p);
}
// a) a mensagem é de erro
// b) Por causa do endereçamento p = x; que deveria ser p = &x para conseguir receber o endereço da variável
// c) não
// d) não, pois ainda possui um erro no endereçamento em p = x;
// e) depois de fazer as modificações, consegui uma execução bem sucedida.
Rodapé
