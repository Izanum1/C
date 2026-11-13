// O "Colegio Aprender" precisa de um programa para controla as notas de 5 alunos.
// Cada aluno fez 3 provas. Crie uma matriz 5x3 do tipo float para armazenar essas notas.
// Leia os dados inseridos pelo usuario e depois imprima a media de cada um dos 5 alunos.
// (Dica: lembre-se de que cada linha da matriz pertence a um aluno especifico)

#include <stdio.h>
#define LM 5
#define LN 3

int main(){
    
    float n[LM][LN], m, s;
    int i, j;
    
    for(i = 0; i < LM; i++){
        printf("Aluno %d: \n", i + 1);
        for(j = 0; j < LN; j++){
            printf("Digite a nota: %d \n", j+1);
            scanf("%f", &n[LM][LN]);
        }
    }
    for(i = 0; i < LM; i++){
        s = 0;
        for(j = 0; j < LN; j++){
            s += n[i][j];
        }
        m = s / 3 ;
    }
    return 0;
}