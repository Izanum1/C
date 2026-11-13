// Faça um programa que mostre os números pares entre 1 e 100, inclusive.
// Entrada
// Neste problema extremamente simples de repetição não há entrada.
// Saida
// Imprima todos os números pares entre 1 e 100, inclusive se for o caso, um em cada linha.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1;
    
    for(n1 = 1; n1 <= 100; n1++){
        if(n1 % 2 == 0){
            printf("%d\n", n1);
        }else{
        }
    }
    return 0;
}