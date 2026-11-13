#include <stdio.h>

int main(){
    
  int n[10] = { 5, 9, 0, 6, 4, 28, 12, 14, 10, 2 }, i, j, a;
  
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(n[i] < n[j]){
                a =  n[i];
                n[i] = n[j];
                n[j] = a;
            }
        }
    }
    
    for(i = 0; i < 10; i++){
        printf("%d\t", n[i]);
    }
    return 0;
}