// Uma pequena loja de autopecas precisa de ajuda para organizar seu sistema.
// O gerente registrou os codigos de 5 pecas que entraram no estoque esta semana: [42, 25, 12, 63, 30].

// Escreva um programa que leia esses 5 numeros, armazene-os em um vetor e utilizeo algoritmo
// Bubble Short para organiza-los em ordem crescente. Por fim, o programa deve exibir o 
// vetor original e o vetor ordenado na tela.

// Uma pequena loja de autopecas precisa de ajuda para organizar seu sistema.
// O gerente registrou os codigos de 5 pecas que entraram no estoque esta semana: [42, 25, 12, 63, 30].

// Escreva um programa que leia esses 5 numeros, armazene-os em um vetor e utilizeo algoritmo
// Bubble Short para organiza-los em ordem crescente. Por fim, o programa deve exibir o 
// vetor original e o vetor ordenado na tela.

#include <stdio.h>
#include <stdlib.h>

void P(int n[], int tm){
    int i, j, t;
    for(i = 0; i < tm - 1; i++){
        for(j = 0; j < tm - 1; j++){
            if(n[j] > n[j + 1]){
                t =  n[j];
                n[j] = n[j + 1];
                n[j + 1] = t;
                
            }
        }   
    }
}
    int main(){
        
        int n1[] = {42, 25, 12, 63, 30};
        int n = sizeof(n1) / sizeof(n1[0]);
        int i;
        
      printf("=-=-=-=- Vetor Original =-=-=-=-\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", n1[i]);
    }
    printf("\n");

    P(n1, n);

    printf("=-=-=-=- Vetor Ordenado =-=-=-=-\n");
    for (i = 0; i < n; i++) {
        printf("%d ", n1[i]);
    }
    printf("\n");
    
        return 0;
    } 