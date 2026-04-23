/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 14/04/2026
Objetivo    : Imprimir a soma dos valores ímpares entre 3 números
Aprendizado : Representação do resto da divisão nos inteiros, estruturas de repetição
-------------------------------------------------------------------------- */


#include <stdio.h>

int main() {
    int X, Y, i, aux, soma = 0;

    scanf("%d %d", &X, &Y);

    if (X > Y) {
        aux = Y;
        Y = X;
        X = aux;
    }

    i = X + 1;

    if (i < Y) {
        do {
            if (i % 2 != 0) {
                soma += i;
            }
            i++;
        } while (i < Y);
    }

    printf("%d\n", soma);

    return 0;
}