/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 14/05/2026
Objetivo    : Calcular a distância entre dois pontos
Aprendizado : Aplicação de funções
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <math.h>

float distancia(float a, float b, float c, float d){
    
    return sqrt(pow(a - c, 2) + pow(b - d, 2));
}

int main(){
    
    float x1, y1, x2, y2;
    
    scanf("%f %f", &x1, &y1);
    
    scanf("%f %f", &x2, &y2);
    
    printf("%.4f\n", distancia(x1, y1, x2, y2));
    
    return 0;
}
