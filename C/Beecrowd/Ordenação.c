// Crie um programa para ordenar um conjunto de strings pelo seu tamanho.
// Seu programa deve receber um conjunto de strings e retornar este mesmo conjunto ordenado pelo tamanho das palavras,
//  se o tamanho das strings for igual, deve-se manter a ordem original do conjunto.
// ENTRADA
// A primeira linha da entrada possui um único inteiro N, que indica o número de casos de teste.
// Cada caso de teste poderá conter de 1 a 50 strings inclusive, e cada uma das strings poderá conter entre 1 e 50 caracteres inclusive.
// Os caracteres poderão ser espaços, letras, ou números.
// SAIDA
// A saída deve conter o conjunto de strings da entrada ordenado pelo tamanho das strings.
// Um espaço em branco deve ser impresso entre duas palavras.

#include <stdio.h>
#include <string.h>

void F(char p[][51], int qnt){
    int i, j;
    char stg[51];
    
    for (i = 1; i < qnt; i++){
        strcpy (stg, p[i]);
        j = i - 1;
        
        while (j >= 0 && strlen(p[j]) < strlen(stg)) {
            strcpy (p[j + 1], p[j]);
            j--;
        }
        strcpy (p[j + 1], stg);
    }
}

int main(){
    
    int n, qnt, i;
    char l[2601];
    char p[50][51];
    
     scanf("%d\n", &n);
    
    while (n--){
        fgets(l, sizeof(l), stdin);
        
        qnt = 0;
        int j = 0, c = 0;
        
        while (l[c] != '\0' && l[c] != '\n'){
            if (l[c] == ' '){
                if (j > 0){
                    p[qnt][j] = '\0';
                    qnt++;
                    j = 0;
                }
            } else {
                p[qnt][j] = l[c];
                j++;
            }
            c++;
        }
    if ( j > 0) {
        p[qnt][j] = '\0';
        qnt++;
    }
    
    F(p, qnt);
    
    for (i = 0; i < qnt; i++){
        if ( i > 0)     printf(" ");
        printf("%s", p[i]);
    }
    printf("\n");
}

    return 0;
}