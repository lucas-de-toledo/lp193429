/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 16/04/2026
Objetivo    : Imprimir o maior de 100 números
Aprendizado : Estrutura de repetição para leitura e comparação de variáveis
-------------------------------------------------------------------------- */

#include <stdio.h>

int main() {
    int valor, maior, posicao;

    for (int i = 1; i <= 100; i++) {
        scanf("%d", &valor);

        if (i == 1) {
            maior = valor;
            posicao = i;
        } else {
            if (valor > maior) {
                maior = valor;
                posicao = i;
            }
        }
    }

    printf("%d\n%d\n", maior, posicao);

    return 0;
}