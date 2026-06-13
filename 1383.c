/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 09/06/2026
Objetivo    : Verificar se matriz 9x9 é sudoku válido
Aprendizado : Como percorrer arbitrariamente os valores de uma matriz
Pergunta de segunda ordem: - 
-------------------------------------------------------------------------- */

#include <stdio.h>

int verifica_grupo(int freq[]){
    
    for(int i = 1; i <= 9; i++){
        
        if(freq[i] != 1) return 0;
    }
    
    return 1;
}

int main(){
    
    int n;
    scanf("%d", &n);
    
    for(int instancia = 1; instancia <= n; instancia++){
        
        int sudoku[9][9];
        
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                
                scanf("%d", &sudoku[i][j]);
            }
        }
        
        int valido = 1;
        
        
        for(int i = 0; i < 9 && valido; i++){
            
            int freq[10] = {0};
            
            for(int j = 0; j < 9; j++){
                
                int num = sudoku[i][j];
                
                if(num < 1 || num > 9){
                    
                    valido = 0;
                    break;
                }
                
                freq[num]++;
            }
            
            if(!verifica_grupo(freq)) valido = 0;
        }
        
        
        for(int j = 0; j < 9 && valido; j++){
            
            int freq[10] = {0};
            
            for(int i = 0; i < 9; i++){
                
                freq[sudoku[i][j]]++;
            }
            
            if (!verifica_grupo(freq)) valido = 0;
        }
        
        
        for(int lin = 0; lin < 9 && valido; lin += 3){
            for(int col = 0; col < 9 && valido; col += 3){
                
                int freq[10] = {0};
                
                for(int i = lin; i < lin + 3; i++){
                    for(int j = col; j < col + 3; j++){
                        
                        freq[sudoku[i][j]]++;
                    }
                }
                
                if(!verifica_grupo(freq)) valido = 0;
            }
        }
        
        printf("Instancia %d\n", instancia);
        
        if (valido) printf("SIM\n\n");
        
        else printf("NAO\n\n");
    }
    
    return 0;
}
