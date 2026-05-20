/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : 19/05/2026
Objetivo    : Imprimir de vetores com entradas pares ou ímpares
Aprendizado : Preenchimento de vetores sob condições específicas, estruturas de repetição
-------------------------------------------------------------------------- */

#include <stdio.h>

int main(){
    
    int par[5], impar[5];
    int p = 0, j = 0;
    
    
    for(int i = 0; i < 15; i++){
        
        int entrada;
        
        scanf("%d", &entrada);
        
        if(entrada % 2 == 0){
            
            par[p] = entrada;
            
            p++;
            
            if(p == 5){
                
                for(int k = 0; k < 5; k++){
                    
                    printf("par[%d] = %d\n", k, par[k]);
                }
                
                p = 0;
            }
            
        } else {
            
            impar[j] = entrada;
            
            j++;
            
            if(j == 5){
                
                for(int k = 0; k < 5; k++){
                    
                    printf("impar[%d] = %d\n", k, impar[k]);
                }
                
                j = 0;
            }
        }
    }
    
    for (int k = 0; k < j; k++) {
        printf("impar[%d] = %d\n", k, impar[k]);
    }

    for (int k = 0; k < p; k++) {
        printf("par[%d] = %d\n", k, par[k]);
    }
    
    return 0;
}
