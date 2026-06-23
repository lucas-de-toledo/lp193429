/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 21/06/2026
Objetivo    : Trocar entradas de um vetor
Aprendizado : Reforço em vetores
Pergunta de segunda ordem: - 
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    
    int N[20];
    
    for(int i = 0; i < 20; i++){
        
        scanf("%d", &N[i]);
    }
    
    for(int i = 0; i < 10; i++){
        
        int aux;
        
        aux = N[i];
        N[i] = N[19 - i];
        N[19 - i] = aux;
    }
    
    for(int i = 0; i < 20; i++){
        
        printf("N[%d] = %d\n", i, N[i]);
    }
    
    return 0;
}
