// Leia um vetor de 10 numeros inteiros fornecidos pelo usuario.
// Em seguida, implemente a logica do algoritmo Selection Sort
// para ordenar esse vetor em ordem crescente. O programa deve 
// exibir o vetor original e o vetor ordenado.

#include <stdio.h>

int main(){
    
    int n [10];
    int f, t, i, j, s;
    
    for(i = 0; i < 10; i++){
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &n[i]);
    }
    
    printf("=-=-=-=- Vetor Original =-=-=-=-");
    for(i = 0; i < 10; i++){
        printf("%d", n[i]);
    }
    printf("\n");
    
    for(i = 0; i < 9; i++){
        f = i;
        for(j = i + 1; j < 9; j++){
            if(n[j] < n[f]){
                f = j;
            }
        }
        if (f != i) {
            t = n[i];
            n[i] = n[f];
            n[f] = t;
    }
}
    printf("=-=-=-=- Vetor ordenado =-=-=-=-");
    for (i = 0; i < 10; i++) {
        printf("%d ", n[i]);
    }
    printf("\n");
    return 0;
}