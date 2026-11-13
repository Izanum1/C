// Desenvolva uma calculadora simples. O usuário deve digitar dois números reais e escolher um caractere 
// de operação matemática: + (soma), - (subtração), * (multiplicação), / (divisão).
// Utilize a estrutura switch-case para processar a escolha e exibir o resultado.
// Lembre-se de tratar o erro de dvisão por zero. (Dica: Deixe está por último)

#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, result;
    char c;
    scanf("%f %c  %f", &n1, &n2, &c);
    

    switch (c){
        case '+':
        result = n1 + n2;
        printf("A soma de %.2f + %.2f = %.2f\n", n1, n2, result);
        break;
        case '-':
        result = n1 - n2;
        printf("A subtração de %.2f - %.2f = %.2f\n", n1, n2, result);
        break;
        case '*':
        result = n1 * n2;
        printf("A multiplicação de %.2f * %.2f = %.2f\n", n1, n2, result);
        break;
        case '/':
        if (n2 == 0){
            printf("Erro: divisão por zero!\n");
        } else {
        result = n1 / n2;
        printf("A divisão de %.2f / %.2f = %.2f\n", n1, n2, result);
        }
        break;
      default:
            printf("Operador inválido: %c\n", c);
    }
    return 0;
}