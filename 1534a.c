/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 12/05/2026
Objetivo    : Preencher uma matriz NxN
Aprendizado : Como preencher uma matriz segundo entradas específicas
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    
    int N;
    
    while(scanf("%d", &N) != EOF){
        
        int matriz[N][N];
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                
                if(i == j){
                    
                    matriz[i][j] = 1;
                    
                } else {
                    
                    matriz[i][j] = 3;
                }
                    
                if((i + j) == (N - 1)){
                        
                    matriz[i][j] = 2;   
                }
              
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
    } 
    
    return 0;
}
