/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 23/04/2026
Objetivo    : Decifrar frases pela Cifra de César
Aprendizado : Uso de strings e substituição de caracteres
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        char cifra[51];
        int num_pos;

        scanf("%s", cifra);
        scanf("%d", &num_pos);

        for (int j = 0; cifra[j] != '\0'; j++) {
            cifra[j] -= num_pos;

            if (cifra[j] < 'A') {
                cifra[j] += 26;
            }
        }

        printf("%s\n", cifra);
    }

    return 0;
}