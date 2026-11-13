//Para um array A com 5 números inteiros, formular um algoritmo que determine o maior elemento deste array.


#include <stdio.h>
#include <stdlib.h>

int main(){
    // Declarando o vetor e inicializando seus elementos
    int a[5] = { 3, 18, 2, 51, 45};
    int n = 5, i;

    int maior = a[0];
    
    for (i = 1; i < n; i++){
        if (maior < a[i])
           maior = a[i];
    }
    printf("O maior valor é %d\n", maior);
    return 0;
}