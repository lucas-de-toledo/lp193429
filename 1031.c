/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 09/06/2026
Objetivo    : Determinar ordem correta para o ciclo
Aprendizado : Uso do problema de Josephus para outras funções recursivas
Pergunta de segunda ordem: - 
-------------------------------------------------------------------------- */

#include <stdio.h>

int josephus(int N, int m){
    
    int vivo[101];
    
    for(int i = 1; i <= N; i++){
        
        vivo[i] = 1;
    }
        
    int restantes = N;
    int j = 1;
    
    vivo[1] = 0;
    restantes--;
    
    while(restantes > 1){
        
        int cont = 0;
        
        while(cont < m){
            
            j++;
            
            if(j > N) j = 1;
            
            if(vivo[j]) cont++;
        }
        
        vivo[j] = 0;
        restantes--;
    }
    
    for(int i = 1; i <= N; i++){
        
        if(vivo[i])
            return i;
    }
    
    return -1;
}

int main(){
    
    int N;
    
    while(scanf("%d", &N) && N){
        
        int m = 1;
        
        while(1){
            
            if(josephus(N, m) == 13){
                
                printf("%d\n", m);
                break;
            }
            
            m++;
        }
    }
    
    return 0;
}
