// Leia 5 numeros intei;ros e informe qua é o maior valor do vetor.

#include <stdio.h>

int main(){
    
    int n[5], i;
    
    for(i = 0; i <= 4; i++){
        scanf("%d", &n[i]);
    }
    
    int m = n[0];
    
    for(i = 1; i <= 4; i++){
        if(m < n[i]){
            m = n[i];
    }
}
    printf("O maior valor é %d\n", m);
    
    return 0;
}
