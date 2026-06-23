/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 21/06/2026
Objetivo    : Preencher matriz segundo regras específicas
Aprendizado : Reforço em matrizes
Pergunta de segunda ordem: - 
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    
    int N, M;
    
    while(scanf("%d %d", &N, &M) != EOF){
        
        int matriz[N][M];
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                
                scanf("%d", &matriz[i][j]);
            }
        }
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                
                if(matriz[i][j] == 1){
                    
                    printf("9");
                    
                } else {
                    
                    int soma = 0;
                    
                    if(i > 0) soma += matriz[i - 1][j];
                        
                    if(i < N - 1) soma += matriz[i + 1][j];
                        
                    if(j > 0) soma += matriz[i][j - 1];
                        
                    if(j < M - 1) soma += matriz[i][j + 1];
                        
                    printf("%d", soma);
                }
            }
            
            printf("\n");
        }
    }

    return 0;
}
