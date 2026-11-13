// Para se preparar para os outros problemas, vamos fazer um teste.
// Dado um número X, retorne o menor número par maior do que X.
// ENTRADA
// Uma linha contendo um número  0 < X < 107.
// SAIDA
// Uma linha contendo a resposta do problema.

#include <stdio.h>
 
int main() {
 
    int X;
 
    scanf("%d", &X);
    
    printf("%d\n", X - (X % 2) + 2);
    return 0;
}