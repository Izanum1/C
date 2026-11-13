// Leia a idade de uma pessoa e informe se ela é maior ou menor de idade.

#include <stdio.h>

int main(){
    
    int i;
    
    scanf("%d", &i);
    
    if(i >= 18){
        printf("Maior de idade");
    }else{
        printf("Menor de idade");
    }
    return 0;
}