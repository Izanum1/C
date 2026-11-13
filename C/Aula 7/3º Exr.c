// Crie um vetor de 3 posições que receba 3 valores de nota e calcule a media dela.

#include <stdio.h>
#include <stdlib.h>

int main (){
    
    double n[3], m;
    
    scanf("%lf\n%lf\n%lf", &n[0], &n[1], &n[2]);
    
    m = (n[0] + n[1] + n[2]) / 3;
    
    printf("A media da soma dos valores é: %.2lf\n", m);
    
    return 0;
}