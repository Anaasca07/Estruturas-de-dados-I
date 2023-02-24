#include<stdio.h>
#include<stdlib.h>

typedef enum mes{JANEIRO = 01, FEVEREIRO, MARCO, ABRIL, MAIO,JUNHO,JULHO, AGOSTO, SETEMBRO, OUTUBRO, NOVEMBRO ,DEZEMBRO}Mes;

typedef struct data{

    char dia[3];
    char ano[5];
    Mes mes ;

}Data;



int main(void){

    Data data;
    
    printf("digite o dia : ");
    scanf(" %[^\n]s",data.dia);
    printf("digite o mes : ");
    scanf("%d",(int *)&data.mes);
    printf("digite o ano : ");
    scanf(" %[^\n]s",data.ano);

    printf("\nDADOS :   ");
    printf("%s /",data.dia);
    if(data.mes<10){
     printf("0%d /",data.mes);
    }else{
    printf("%d /",data.mes);
    }
    printf("%s",data.ano);
    return (0);
}
