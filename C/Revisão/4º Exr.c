#include <stdio.h>

int main(){
    double n1, n2, m;
    
    scanf("%lf %lf", &n1, &n2);
    
    m = (n1+n2)/2;
    
    printf("A media de suas notas foi %.2lf", m);
    
    return 0;
}