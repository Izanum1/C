// Escreva um programa que leia uma matriz quadrada 4x4 de numeros inteiros.
// O programa deve imprimir todos os elementos que pertencem a Diagonal Principal
//(ou seja, onde o indice da linha e igual ao da coluna) e, em seguida, calcular
// e exibir a soma desses valores; [1, 2, 3]

#include <stdio.h>
#define LIM 4

int main() {
    int n [LIM][LIM], i,j, s;
    
    for(i = 0; i < LIM; i++){
        for(j =0; j < LIM; j++){
            printf("Digite o valor da posicao (%d,%d): ",i,j);
            scanf("%d", &n[i][j]);
        }
    }
    for(i = 0; i < LIM; i++){
        for(j = 0; j < LIM; j++){
            if(i == j){
            s += n [i][j];
            printf("%d ", n[i][j]);
            }
        }
    }
    printf("Soma: %d\n", s);
    return 0;
}

