/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 11/06/2026
Objetivo    : Preencher matriz segundo regras específicas
Aprendizado : Como preencher os valores de uma matriz de forma não-usual
Pergunta de segunda ordem: - 
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    
    int M;
    
    while(scanf("%d", &M) == 1 && M != 0){
        
        int inicio = 0;
        
        int fim = M;
        
        int matriz[M][M];
        
        for(int i = 0; i < M; i++){
            for(int j = 0; j < M; j++){
                
                matriz[i][j] = 0;
            }
        }
        
        while(inicio < fim){
            
            for(int i = inicio; i < fim; i++){
                for(int j = inicio; j < fim; j++){
                    
                    matriz[i][j] += 1;
                }
            }
            
            inicio++;
            fim--;
        }
        
        for(int i = 0; i < M; i++){
            for(int j = 0; j < M; j++){
                
                if(j == (M - 1)){
                    
                    printf("%3d", matriz[i][j]);
                } else {
                    
                    printf("%3d ", matriz[i][j]);
                }
            }
            
            printf("\n");
        }
        
        printf("\n");
    }
    
    return 0;
}
