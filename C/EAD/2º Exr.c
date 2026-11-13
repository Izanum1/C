#include <stdio.h>

int main(){
    
    int n[3], i, c;
    
    printf("Digite o vetor de 0 a 2: ");
    scanf("%d", &c);
    
    for(i = 0; i < 3; i++){
        scanf("%d", &n[i]);
    }
   n[i] = c;
    printf("%d", n[i]);
    
    return 0;
}