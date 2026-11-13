// Leia usuario e senha. Caso usuario seja admin e senha 1234, exiba 'Login correto'.

#include <stdio.h>

int main (){
    int s;
    
    while(s != 1234){
        printf("Digite sua senha: ");
        scanf("%d", &s);
    
    if (s != 1234){
        printf("Senha incorreta, realize uma nova tentativa.\n");
    }
}
    printf("Login correto");
    return 0;
}