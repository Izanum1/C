//Preencher uma Matriz 3x2 utilizando o teclado

#include <stdio.h>

int main(){
    
    int n[3][2], i, j;
    
    for( i = 0; i < 3; i++){
        for( j = 0; j < 3; j++){
            scanf("%d", &n[i][j]);
        }
        printf("%d", n[i][j]);
    }
    
    return 0;
}