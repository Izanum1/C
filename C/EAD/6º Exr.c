#include <stdio.h>

int main(){
    
    int n[3][3], i, j;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
                n[i][j] = 1;
            } else{
                n[i][j] = 0;
            }
        }
    }
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%d\t", n[i][j]);
        }
        printf("\n");
    }
    return 0;
}