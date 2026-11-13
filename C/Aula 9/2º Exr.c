// Faca um programa que declare duas matrizes A e B de tamanho 3x3.
// O programa deve pedir ao usuario para preencher ambas com numeros inteiros.
// Em seguida, calcule e armazene em uma terceira matriz C a soma dos elementos
// correspondentes de A e B. Por fim, imprima a matriz C na tela.

#include <stdio.h>
#define LM 3

int main(){
    int a[LM][LM], b[LM][LM], c[LM][LM], i, j;
    
     for(i = 0; i < LM; i++){
        for(j =0; j < LM; j++){
            printf("Digite o valor da posicao A(%d,%d): ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < LM; i++){
        for(j =0; j < LM; j++){
            printf("Digite o valor da posicao B(%d,%d): ",i,j);
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < LM; i++){
        for(j = 0; j < LM; j++){
            c[i][j] = a[i][j] + b[i][j];
            }
        }
    for(i = 0; i < LM; i++){
        for(j =0; j < LM; j++){
            printf("%d", c[i][j]);
        }
        printf("\n");
    }        
    return 0;
}