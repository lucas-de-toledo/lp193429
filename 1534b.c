/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 12/05/2026
Objetivo    : Preencher uma matriz NxN
Aprendizado : Impressão de variáveis apontadas por ponteiros
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    
    int N;
    
    while(scanf("%d", &N) != EOF){
        
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                
                int termo;
                int *p = &termo;
                
                if((i + j) == (N - 1)){
                        
                    *p = 2;
                    printf("%d", *p);
                    
                } else {
                    
                    if(i == j){
                    
                        *p = 1;
                        printf("%d", *p);
                        
                    } else {
                    
                        *p = 3;
                        printf("%d", *p);
                    }
                }
            }
            
            printf("\n");
        }
    } 
    
    return 0;
}
