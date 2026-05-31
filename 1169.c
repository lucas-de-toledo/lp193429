/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1169
Data        : 28/05/2026
Objetivo    : Calcular o número de grãos
Aprendizado : Uso de funções recursivas
Pergunta de segunda ordem: Existe alguma consequência importante para o "acúmulo" de funções recursivas?
-------------------------------------------------------------------------- */

#include <stdio.h>

unsigned long long graosporcasa(int ncasas){
    
    if (ncasas == 1) {
        return 1;
    }
    
    return 2*graosporcasa(ncasas - 1);
}

unsigned long long totalgraos(int ncasas){

    if (ncasas == 1) {
        return 1;
    }

    return graosporcasa(ncasas) + totalgraos(ncasas - 1);
}

int main(){
    
    int N;
    
    scanf("%d", &N);
    
    while (N--){
        
        int ncasas;
        
        scanf("%d", &ncasas);
        
        printf("%llu kg\n", totalgraos(ncasas)/12000);
    }
    
    return 0;
}
