// Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente,
// uma linha em branco e em seguida, os valores na sequência como foram lidos.
// ENTRADA
// A entrada contem três números inteiros.
// SAIDA
// Imprima a saída conforme foi especificado.

#include <stdio.h>

void P(int n[], int tm){
    int i, j, a;
    for( i = 0; i < tm - 1; i++){
        for( j = 0; j < tm - 1; j++){
            if(n[j] > n[j + 1]){
               a =n[j];
               n[j] = n[j + 1];
               n[j + 1] = a;
            }
        }
    }
}

int main (){
    
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    int n[3] = {a, b, c};
    P(n, 3);
    
   printf("%d\n%d\n%d\n", n[0], n[1], n[2]);
   printf("\n");
   printf("%d\n%d\n%d\n", a, b, c);
    
    return 0;
}