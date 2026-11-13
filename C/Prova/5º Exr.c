// Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara.
//  Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”
// caso haja uma divisão por 0 ou raiz de numero negativo.
// ENTRADA
// Leia três valores de ponto flutuante (double) A, B e C.
// SAIDA
// Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular".
// Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto
// com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.


#include <stdio.h>

double raiz_quadrada(double n) {
    if (n < 0) return -1;
    if (n == 0) return 0;
    double x = n, y = 1.0;
    while (x - y > 0.00001) {
        x = (x + y) / 2;
        y = n / x;
    }
    return x;
}

int main() {
    double a, b, c, delta, r1, r2;

    scanf("%lf %lf %lf", &a, &b, &c);

    delta = b * b - 4 * a * c;

    if (a != 0 && delta >= 0) {
        double raiz = raiz_quadrada(delta);
        r1 = (-b + raiz) / (2 * a);
        r2 = (-b - raiz) / (2 * a);
        printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    } else {
        printf("Impossivel calcular\n");
    }

    return 0;
}