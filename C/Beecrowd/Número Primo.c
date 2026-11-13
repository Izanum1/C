// Na matemática, um Número Primo é aquele que pode ser dividido somente por 1 (um) e por ele mesmo.
//  Por exemplo, o número 7 é primo, pois pode ser dividido apenas pelo número 1 e pelo número 7.
// ENTRADA
// A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 100), indicando o número de casos de teste da entrada. 
// Cada uma das N linhas seguintes contém um valor inteiro X (1 < X ≤ 107), que pode ser ou não, um número primo.
// SAIDA
// Para cada caso de teste de entrada, imprima a mensagem “X eh primo” ou “X nao eh primo”, de acordo com a especificação fornecida.

#include <stdio.h>

 int P(int n){
     int i;
     if (n < 2)     return 0;
     for (i = 2; i * i <= n; i++){
      if (n % i == 0)       return 0;   
     }
    return 1;
 }
 
 int main(){
     
     int n1, vlr;
     
     scanf("%d", &n1);
     
      while(n1--){
        scanf("%d", &vlr);
     if(P(vlr))  printf("%d eh primo\n", vlr);
        else    printf("%d nao eh primo\n", vlr);
     }
     return 0;
 }