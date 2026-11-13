// Na última aula de matemática, Rafael, Beto e Carlos aprenderam algumas novas funções matemáticas.
// Cada um deles se identificou com uma função em especial, e resolveram competir para ver quem tinha a função de maior resultado.
// A função que Rafael escolheu é r(x, y) = (3x)² + y².
// Já Beto escolheu a função b(x, y) = 2(x²) + (5y)².
// Carlos, por sua vez, escolheu a função c(x, y) = -100x + y³.
// Dados os valores x e y, diga quem escolheu a função com o maior resultado.
// ENTRADA
// A primeira linha de entrada contém um inteiro N que determina a quantidade de casos de teste.
// Cada caso de teste consiste em dois inteiros x e y (1 ≤ x, y ≤ 100), indicando as variáveis a serem inseridas na função.
// SAIDA
// Para cada caso de teste imprima uma linha, contendo uma frase, indicando quem ganhou a competição.
// Por exemplo, se Rafael ganhar a competição, imprima “Rafael ganhou”. Assuma que nunca haverá empates.

#include <stdio.h>

double r(double x, double y) {return (3 * x) * (3 * x) + y * y; }
double b(double x, double y) {return 2 * (x * x) + (5 * y) * (5 * y); }
double c(double x, double y) {return -100 * x + y * y * y; }

int main(){
    
    int n;
    
    scanf("%d", &n);
    
    while(n--){
    
    double x, y;
    
    scanf("%lf %lf", &x, &y);
    
    double vlr = r(x, y);
    double vlb = b(x, y);
    double vlc = c(x, y);
    
    if(vlr >= vlb && vlr >= vlc)    printf("Rafael ganhou\n");
    else if(vlb >= vlc && vlb >= vlr)   printf("Beto ganhou\n");
    else    printf("Carlos ganhou\n");
}
    return 0;
}