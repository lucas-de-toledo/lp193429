/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 21/06/2026
Objetivo    : Imprimir o maior dentre N números e sua posição
Aprendizado : Reforço sobre busca em vetores
Pergunta de segunda ordem: - 
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    
    int N, posicao, menor;
    
    scanf("%d", &N);
    
    int X[N];
    
    for(int i = 0; i < N; i++){
        
        scanf("%d", &X[i]);
        
        if(i == 0 || X[i] < menor){
            
            menor = X[i];
            
            posicao = i;
        }
    }
    
    printf("Menor valor: %d\n", menor);
    
    printf("Posicao: %d\n", posicao);
    
    return 0;
}
