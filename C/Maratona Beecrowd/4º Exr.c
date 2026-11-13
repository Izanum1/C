// Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica,
// informe-o expresso no formato horas:minutos:segundos.
// ENTRADA
// O arquivo de entrada contém um valor inteiro N.
// SAIDA
// Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:
// minutos:segundos, conforme exemplo fornecido.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int s,m,h;
    
    scanf("%d", &s);
    
   h = s/3600;
   s %= 3600;
   m = s/60;
   s %= 60;
   
    printf("%d:%d:%d\n", h, m, s);
    
    return 0;
}