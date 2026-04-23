/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 23/04/2026
Objetivo    : Imprimir a sentença dançante da entrada
Aprendizado : Uso de strings, funções toupper e tolower
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[52];

    while (fgets(frase, sizeof(frase), stdin) != 0) {
        int ehmaiuscula = 1;

        for (int i = 0; frase[i] != '\0'; i++) {
            if (frase[i] == ' ') {
                printf(" ");
            } else {
                if (ehmaiuscula == 1) {
                    printf("%c", toupper(frase[i]));
                } else {
                    printf("%c", tolower(frase[i]));
                }
                ehmaiuscula = !ehmaiuscula;
            }
        }
    }

    return 0;
}