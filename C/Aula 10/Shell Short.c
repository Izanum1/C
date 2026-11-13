// Com o algoritmo Shell Short e uma extensao eficiente do Insertion Sort.
// Ele funciona dividindo a lista em subgrupos com base em uma distancia (salto ou gap),
// ordenado esses subgrupos e reduzindo a distancia ate que o array fique completamente ordenado

#include <stdio.h>
#include <stdlib.h>

void P1(int n[], int tm){
    int i, j, g, tmp;
    
    for(g = tm / 2; g > 0; g /= 2){
        for(i = g; i < tm; i++){
            tmp = n[i];
            
            for(j = g; j >= g && n[j - g] > tmp; j -= g){
                n[j] = n[j - g];
            }
            n[j] = tmp;
        }
    }
}

int main(){
    
    int n[] = {156, 86, 89, 10, 47, 58, 26, 19, 5};
    int tm = sizeof(n) / sizeof(n[0]);
    int i, j;
    
    printf("=-=-=-=- Vetor Original =-=-=-=-\n");
    for (i = 0; i < tm; i++) {
        printf("%d ", n[i]);
    }
    printf("\n");

    P1(n, tm);

    printf("=-=-=-=- Vetor Ordenado =-=-=-=-\n");
    for (i = 0; i < tm; i++) {
        printf("%d ", n[i]);
    }
    printf("\n");
    
    
    return 0;
}