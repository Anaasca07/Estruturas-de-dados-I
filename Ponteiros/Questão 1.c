int x, y, *p; // Declarou duas variaveis do tipo inteiro e um ponteiro
y = 0 ; // você recebeu o valor 0
p = &y; // o ponteiro recebe o endereço de y
x = *p; // x recebe o conteudo de p
x = 4 ; // x recebe um novo valor e agora é 4
(*p)++; // o conteudo de *p incrementa mais 1, 0+1 = 1
--x; // o valor de é decrementado 1, 4-1 = 3
(*p) += x; // o conteudo de (*p) é somado com o valor da variável x 1+3= 4
// x = 3, y = 4, *p = 4
