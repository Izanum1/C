 // Na matemática, um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos próprios (excluindo ele mesmo)
 // Sua tarefa é escrever um programa que imprima se um determinado número é perfeito ou não.
 // ENTRADA
 // A entrada contém vários casos de teste. A primeira linha da entrada contém um inteiro N (1 ≤ N ≤ 20), indicando o número de casos de teste da entrada.
 // Cada uma das N linhas seguintes contém um valor inteiro X (1 ≤ X ≤ 108), que pode ser ou não, um número perfeito.
 // SAIDA
 // Para cada caso de teste de entrada, imprima a mensagem “X eh perfeito” ou “X nao eh perfeito”, de acordo com a especificação fornecida.
 
 #include <stdio.h>
 
 int P(int n){
     int i, s = 0;
     for(i = 1; i < n; i++) {
        if (n % i == 0) {
            s += i;
        }
    }
    return s;
 }
 
 int main(){
     
     int n1, vlr;
     
     scanf("%d", &n1);
     
      while(n1--){
        scanf("%d", &vlr);
     if(P(vlr) == vlr)  printf("%d eh perfeito\n", vlr);
        else    printf("%d nao eh perfeito\n", vlr);
     }
     return 0;
 }