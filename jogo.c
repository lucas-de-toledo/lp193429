/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : -
Data        : 22/06/2026
Objetivo    : Criar um jogo de sudoku via console
Aprendizado : Uso de arquivos, funções, matrizes
Pergunta de segunda ordem: - 
-------------------------------------------------------------------------- */

#include <stdio.h>

#define N 9

void imprimir(int sudoku[N][N]){
    
    printf("\n");
    
    for(int i = 0; i < N; i++){
        
        if(i % 3 == 0) printf("-------------------------\n");
        
        for(int j = 0; j < N; j++){
            
            if(j % 3 == 0) printf("| ");
            
            if(sudoku[i][j] == 0){
                
                printf(". ");
                
            } else {
                
                printf("%d ", sudoku[i][j]);
            }
        }
        
        printf("|\n");
    }
    
    printf("-------------------------\n");
}

int valido(int sudoku[N][N], int linha, int coluna, int num){
    
    for(int j = 0; j < N; j++){
        
        if(sudoku[linha][j] == num) return 0;
    }
    
    for(int i = 0; i < N; i++){
        
        if(sudoku[i][coluna] == num) return 0;
    }
    
    int inicio_l = (linha / 3) * 3;
    
    int inicio_c = (coluna / 3) * 3;
    
    for(int i = inicio_l; i < inicio_l + 3; i++){
        for(int j = inicio_c; j < inicio_c + 3; j++){
            
            if(sudoku[i][j] == num) return 0;
        }
    }
    
    return 1;
}

int completo(int sudoku[N][N]){
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            
            if(sudoku[i][j] == 0) return 0;
        }
    }
    
    return 1;
}

int main(){
    
    FILE *arquivo = fopen("input2.txt", "r");
    
    if(arquivo == NULL){
        
        printf("Erro ao abrir arquivo.\n");
        
        return 1;
    }
    
    int sudoku[N][N];
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            
            if(fscanf(arquivo, "%d", &sudoku[i][j]) != 1){
                
                printf("Erro ao ler o arquivo.\n");
                
                fclose(arquivo);
                
                return 1;
            }
        }
    }
    
    fclose(arquivo);
    
    while(!completo(sudoku)){
        
        imprimir(sudoku);
        
        int l, c, valor;
        
        printf("\nLinha (1-9): ");
        
        if(scanf("%d", &l) != 1) return 1;
        
        printf("Coluna (1-9): ");
        
        if(scanf("%d", &c) != 1) return 1;
        
        printf("Numero (1-9): ");
        
        if(scanf("%d", &valor) != 1) return 1;
        
        l--;
        c--;
        
        if(l < 0 || l >= 9 || c < 0 || c >= 9 || valor < 1 || valor > 9){
            
            printf("Entrada invalida!\n");
            
            continue;
        }
        
        if(sudoku[l][c] != 0){
            
            printf("Posicao ja preenchida!\n");
            
            continue;
        }
        
        if(valido(sudoku, l, c, valor)){
            
            sudoku[l][c] = valor;
            
        } else {
            
            printf("Jogada invalida!\n");
        }
    }
    
    imprimir(sudoku);
    
    printf("\nSudoku concluido!\n");
    
    return 0;
}
