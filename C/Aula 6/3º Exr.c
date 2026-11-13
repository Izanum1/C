// Construa um programa que leia o ano atual e o ano de nascimento de um cidadão para calcular sua idade aproximada.
// A partir disso, use operadores lógicos para exibir sua classe eleitoral conforme as leie brasileiras:
// Menor de 16 anos: " Nao pode votar"
// Entre 18 e 70 anos: " Voto obrigatorio"
// entre 16 e 17 anos ou acima de 70 anos: " Voto opcional"

#include <stdio.h>
#include <stdlib.h>

int main(){
    int at, ant, i;
    
    scanf("%d %d", &at, &ant);
    
    i = at - ant;
    
    printf("Idade atual: %d\n", i);
    
    if(i < 16){
        printf("Nao pode voto\n");
    }else if(i >= 18 && i <= 70){
        printf("Voto obrigatorio\n");
    }else{
        printf("Voto opcional");
    }
    return 0;
}