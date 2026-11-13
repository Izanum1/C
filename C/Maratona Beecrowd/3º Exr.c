// Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”.
// Utilize a fórmula:
// MAIOR AB= (a+b+abs(a-b))
//                 2
// OBS: a fórmula apenas calcula o maior entre os dois primeiros (a e b).
// Um segundo passo, portanto é necessário para chegar no resultado esperado.


#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, n3;
    
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if(n1 > n2 && n1 > n3){
        printf("%d eh o maior\n", n1);
    }else if(n2 > n3 && n2 > n1){
        printf("%d eh o maior\n", n2);
    }else if(n3 > n1 && n3 > n2){
        printf("%d eh o maior\n", n3);
    } else {}
    
    return 0;
}