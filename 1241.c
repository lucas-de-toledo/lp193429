/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 05/05/2026
Objetivo    : Comparar o "final" de um número a outro
Aprendizado : Comparação de strings
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main (){
    
    int N;
    scanf("%d", &N);
    
    while(N--){
        
        char A[1001], B[1001];
        
        scanf("%s %s", A, B);
        
        int tamA = strlen(A), tamB = strlen(B);
        
        if(tamB > tamA){
            
            printf("nao encaixa\n");
            
        } else {
            
            int encaixa = 1;
            
            for(int i = tamB - 1; i >= 0; i--){
                
                if(B[i] != A[i + (tamA - tamB)]){
                    
                    encaixa = 0;
                    break;
                    
                } 
            }
            
            if(encaixa == 0){
            
            printf("nao encaixa\n");
            
            } else {
            
            printf("encaixa\n");
            
            }
        }
    }
    
    return 0;
}
