#include <stdio.h>

int main(){
    
    int num, vlr;
    
    scanf("%d", &vlr);
    
    for(num=1;num<=10;num++){
        printf("%d x %d = %d\n", vlr, num, num * vlr);
    }
    return 0;
} 