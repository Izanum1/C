// Crie um vetor de 3 posições que receba 3 valores de nota e calcule a media dela.

#include <stdio.h>
#include <stdlib.h>

int main (){
    
    double n[3], m, s = 0.0;
    int i;
    
    // Coleta as 3 notas
    for (i = 0; i < 3; i++){
        printf("Digite sua nota %d:\n", i+1);
        scanf("%lf", &n[i]);
        s += n[i]; // Soma as notas conforme são inseridos
    }
    
    // Calcula a média
    m = s / 3;
    
    printf("Nota 1: %lf\n", n[0]);
    printf("Nota 2; %lf\n", n[1]);
    printf("Nota 3: %lf\n", n[2]);
    printf("Media final: %.2lf\n", m);
    
    return 0;
}   