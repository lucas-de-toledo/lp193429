/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1078
Data        : 28/04/2026
Objetivo    : Escrever a tabuada de um número N
Aprendizado : Estruturas de repetição
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int N, res;
    scanf("%d", &N);
    
    for(int i=1; i<11; i++){
        res = i*N;
        printf("%d x %d = %d\n", i, N, res);
        
    }

    return 0;
}
