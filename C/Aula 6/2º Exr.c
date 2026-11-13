// Crie um programa que receba a nota final de um estudante (de 0 a 10) e classifique seu desempenho de acordo com as seguintes regras:
// Nota igual ou maior que 9.0: " Conceito A"
// Nota entre 7.0 e 8.9: " Conceito B"
// Nota entre 5.0 e 6.9: " Conceito C"
// Nota abaixo de 5.0: " Conceito D"

#include <stdio.h>
#include <stdlib.h>

int main(){
    float n;
    
    scanf("%f", &n);
    
    if(n >= 9){
        printf("Conceito A\n");
    }else if(n >= 7){
        printf("Conceito B\n");
    }else if(n >= 5){
        printf("Conceito C\n");
    }else{
        printf("Conceito D\n");
    }
    return 0;
}