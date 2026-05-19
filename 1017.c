/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 19/05/2026
Objetivo    : Calcular o consumo de combustível
Aprendizado : Aplicação de funções
-------------------------------------------------------------------------- */

#include <stdio.h>

float calcularLitros(int tempo, int vel){
    
    return tempo*vel/12.0;
}

int main(){
    
    int t, v;
    
    scanf("%d", &t);
    scanf("%d", &v);
    
    printf("%.3f\n", calcularLitros(t, v));
    
    return 0;
}
