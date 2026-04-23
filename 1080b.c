/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 16/04/2026
Objetivo    : Imprimir o maior de 100 números usando vetor
Aprendizado : Uso de vetor
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int x[100];
    int maior, posicao;

    for (int t = 0; t < 100; t++) {
        scanf("%d", &x[t]);
    }

    maior = x[0];
    posicao = 1;

    for (int t = 1; t < 100; t++) {
        if (x[t] > maior) {
            maior = x[t];
            posicao = t + 1;
        }
    }

    printf("%d\n%d\n", maior, posicao);

    return 0;
}