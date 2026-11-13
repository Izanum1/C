/* Faça um programa que leia as notas referentes às duas avaliações de um aluno. 
Calcule e imprima a média semestral.
Faça com que o algoritmo só aceite notas válidas
(uma nota válida deve pertencer ao intervalo [0,10]). 
Cada nota deve ser validada separadamente.

Entrada
A entrada contém vários valores reais, positivos ou negativos. 
O programa deve ser encerrado quando forem lidas duas notas válidas.

Saída
Se uma nota inválida  for lida, deve ser impressa a mensagem "nota invalida".
Quando duas notas válidas forem lidas, deve ser impressa a mensagem "media = " seguido do valor do cálculo. 
O valor deve ser apresentado com duas casas após o ponto decimal. */

#include <stdio.h>

int main(){
    
    double n, s = 0;
    int v = 0;
    
    while(v < 2){
        scanf("%lf", &n);
        
        if(n < 0 || n > 10){
            printf("nota invalida\n");
        }else{ 
            s += n;
            v++;
    }
}
 
    printf("media = %.2lf\n", s / 2);
    
    return 0;
}