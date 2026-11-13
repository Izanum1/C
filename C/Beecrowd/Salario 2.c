// Faça um programa que leia o nome de um vendedor, o seu salario fixo e o total de vendas efetuadas por ele no mes (em dinheiro).
// Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.
// ENTRADA
// O arquivo de entrada contém um texto (primeiro nome do vendedor) e 2 valores de dupla precisão (double) com duas casas decimais, 
// representando o salário fixo do vendedor e montante total das vendas efetuadas por este vendedor, respectivamente.
// SAIDA
// Imprima o total que o funcionário deverá receber, conforme exemplo fornecido.

#include <stdio.h>

int main(){
    
    char n[20];
    double sf, sv;
    
   scanf("%19s %lf %lf", &n, &sf, &sv);
   
   printf("TOTAL = R$ %.2lf\n", sf + (sv * 0.15));
    
    
    
    return 0;
}