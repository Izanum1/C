// Leia N valores numericos inteiros fornecidos pelo usuario, armazene-os em um vetor
// e os ordene em ordem crescente utilizando o algoritmo Bubble Short.
// Ao final, o programa deve imprimir o vetor ordenado.

#include <stdio.h>
#include <stdlib.h>

void P (int n[], int tm){
    int i, j, a;
    for(i = 0; i < tm - 1; i++){
        for(j = 0; j < tm - 1; j++){
            if(n[j] > n[j + 1]){
                a =  n[j];
                n[j] = n[j + 1];
                n[j + 1] = a;
                
            }
        }   
    }
}
    int main(){
        
        int n1[10];
        int n2 = sizeof(n1) / sizeof(n1[0]);
        int i;
        
        for(i = 0; i < 10; i++){
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &n1[i]);
    }
    
    P(n1, n2);
    
    for(i = 0; i < 10; i++){
        printf("%d\t", n1[i]);
    }
        return 0;
    }