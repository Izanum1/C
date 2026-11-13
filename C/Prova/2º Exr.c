// Jade ganhou de presente de aniversário um telescópio e ficou muito feliz, pois adora olhar a lua à noite.
// Ela sempre foi uma estudante muito boa, e só analizando a lua por duas noites seguidas
// já consegue identificar as mudanças que ocorreram na iluminação e o percentual aproximado da lua que está iluminada.
// Você, que é amigo da Jade e estuda Computação, resolveu fazer um pequeno programa que, 
// baseado nesta avaliação que ela fez nas duas últimas noites, informa a fase na qual a lua se encontra.
// Se a porção visível da lua no momento estiver entre 0 e 2%, por exemplo, é lua nova,
// e for entre 3 e 96% é lua crescente, se for entre 97 e 100% é lua cheia e se for entre 96 e 3% (diminuindo) é lua minguante.
// ENTRADA
// A entrada é composta por uma única linha contendo dois valores inteiros. 
// O primeiro valor corresponde ao percentual observado por Jade na noite de dois dias atrás.
// O segundo valor corresponde ao percentual observado por jade na noite anterior.
// SAIDA
// Baseado nos dois percentuais observados por Jade, imprima na tela a fase na qual a lua se encontrava na noite anterior,
// conforme o exemplo abaixo. Não esqueça de imprimir o caractere de fim de linha após a saída :).

#include <stdio.h>
 
int main() {
 
    int n1, n2;
    
    scanf("%d %d", &n1, &n2);
    
    if(n2 >= 97 && n2 <= 100){
        printf("cheia\n");
    }else if(n2 >= 0 && n2 <= 2){
        printf("nova\n");
    }else if(n2 > n1){
        printf("crescente\n");
    }else{
        printf("minguante\n");
    }
 
    return 0;
}

