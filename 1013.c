/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        : 07/04/2026
Objetivo    : Imprimir o maior de 3 números
Aprendizado : Funcionamento da função scanf, operadores aritméticos, if/else
-------------------------------------------------------------------------- */


#include <stdio.h>
#include <math.h>

int main (){
    int A, B, C, MaiorAB;
    
    scanf("%d %d %d", &A, &B, &C);
    
    MaiorAB = (A+B+fabs(A-B))/2;
    
    if(C>MaiorAB){
        printf("%d eh o maior\n", C);
    } else {
        printf("%d eh o maior\n", MaiorAB);
    }
    return 0;
}