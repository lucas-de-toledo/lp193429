/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 19/05/2026
Objetivo    : Calcular a duração de um jogo
Aprendizado : Aplicação de funções
-------------------------------------------------------------------------- */

#include <stdio.h>

int calcularDuracao(int i, int f){
    
    if(i < f) return (f - i);
    else return (24 - i + f);
}

int main(){
    
    int hinicial, hfinal;
    
    scanf("%d %d", &hinicial, &hfinal);
    
    printf("O JOGO DUROU %d HORA(S)\n", calcularDuracao(hinicial, hfinal));

    return 0;
}
