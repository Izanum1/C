// Faça um programa que leia 6 valores.
// Estes valores serão somente negativos ou positivos (desconsidere os valores nulos).
// A seguir, mostre a quantidade de valores positivos digitados.
// ENTRADA
// Seis valores, negativos e/ou positivos.
// SAIDA
// Imprima uma mensagem dizendo quantos valores positivos foram lidos.

#include <stdio.h>

int main(){
    
    double n[6];
    int i;
    int p = 0;
    
    for(i = 0; i < 6; i++){
        scanf("%lf", &n[i]);
        if(n[i] > 0){
            p++;
        }
    }
    printf("%d valores positivos\n", p);
    return 0;
}