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
    
    //Percorre os valores armazenados nas posições de 1 a 9. No código, essas posições correspondem aos próprios números verificados
    for(int i = 1; i <= 9; i++){
        
        if(freq[i] != 1) return 0; //Cada um pode "aparecer" uma única vez
    }
    
    return 1;
}

int main(){
    
    int n;
    scanf("%d", &n);
    
    for(int instancia = 1; instancia <= n; instancia++){
        
        int sudoku[9][9];
        
        int valido = 1;
        
        //Preencher matriz e ver se numeros são válidos
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                
                scanf("%d", &sudoku[i][j]);
                
                //Garante números entre 1 e 9
                if(sudoku[i][j] < 1 || sudoku[i][j] > 9) valido = 0;
            }
        }
        
        
        for(int i = 0; i < 9 && valido; i++){
            
            int freq[10] = {0};
            
            for(int j = 0; j < 9; j++){
                
                freq[sudoku[i][j]]++; //Soma uma ocorrência para cada número de 1 a 9, a cada linha
            }
            
            if(!verifica_grupo(freq)) valido = 0; //A cada linha, verifica se é válida
        }
        
        
        for(int j = 0; j < 9 && valido; j++){
            
            int freq[10] = {0};
            
            for(int i = 0; i < 9; i++){
                
                freq[sudoku[i][j]]++; //Soma uma ocorrência para cada número de 1 a 9, a cada coluna
            }
            
            if(!verifica_grupo(freq)) valido = 0; //A cada coluna, verifica se é válida
        }
        
        //Inicia no canto superior esquerdo de cada bloco 3x3
        for(int lin = 0; lin < 9 && valido; lin += 3){
            for(int col = 0; col < 9 && valido; col += 3){
                
                int freq[10] = {0};
                
                //Considera 3 posições, a frente e abaixo, a partir dos cantos
                for(int i = lin; i < lin + 3; i++){
                    for(int j = col; j < col + 3; j++){
                        
                        freq[sudoku[i][j]]++; //Soma uma ocorrência para cada número de 1 a 9, a cada bloco
                    }
                }
                
                if(!verifica_grupo(freq)) valido = 0; //A cada bloco, verifica se é válido
            }
        }
        
        printf("Instancia %d\n", instancia);
        
        if(valido) printf("SIM\n\n");
        
        else printf("NAO\n\n");
    }
    
    return 0;
}
