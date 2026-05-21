/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1258
Data        : 21/05/2026
Objetivo    : Ordenar camisetas por suas características
Aprendizado : Uso de structs e técnicas para organizar seus conteúdos
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

typedef struct{
    
    char nome[100];
    
    char cor[9];
    
    char tamanho;
    
} cam;

int main(){
    
    int N;
    
    int caso1 = 1;
    
    while(scanf("%d", &N) && N != 0){
        
        getchar();
        
        cam camiseta[N];
        
        for(int i = 0; i < N; i++){
            
            fgets(camiseta[i].nome, sizeof(camiseta[i].nome), stdin);
            
            camiseta[i].nome[strcspn(camiseta[i].nome, "\n")] = '\0';
            
            scanf("%s %c", &camiseta[i].cor, &camiseta[i].tamanho);
            
            getchar();
        }
        
        for(int i = 0; i < N - 1; i++){
            
            for(int j = 0; j < N - 1 - i; j++){
                
                int troca = 0;
                
                int cor = strcmp(camiseta[j].cor, camiseta[j + 1].cor);
                
                if(cor > 0){
                    
                    troca = 1;
                    
                } else if(cor == 0){
                    
                    if (camiseta[j].tamanho < camiseta[j + 1].tamanho) {
                        
                        troca = 1;
                        
                    } else if(camiseta[j].tamanho == camiseta[j + 1].tamanho){
                        
                        if(strcmp(camiseta[j].nome, camiseta[j + 1].nome) > 0){
                            
                            troca = 1;
                        }
                    }
                }
                
                if(troca){
                    
                    cam aux = camiseta[j];
                    camiseta[j] = camiseta[j + 1];
                    camiseta[j + 1] = aux;
                }
            }
        }
        
        if(!caso1) printf("\n");
        
        caso1 = 0;
        
        for(int i = 0; i < N; i++){
            
            printf("%s %c %s\n",
                   camiseta[i].cor,
                   camiseta[i].tamanho,
                   camiseta[i].nome);
        }
    }
    
    return 0;
}
