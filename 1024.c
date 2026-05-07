/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 07/05/2026
Objetivo    : Criptografar uma mensagem
Aprendizado : Leitura de strings e manipulação de caracteres
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main(){
    
    int N;
    scanf("%d", &N);
    getchar();
    
    while(N--){
        
        char msg[1001];
        
        fgets(msg, sizeof(msg), stdin);
        
        msg[strcspn(msg, "\n")] = '\0';
        
        int tam = strlen(msg);
        
        for(int i = 0; i < tam; i++){
            
            if((msg[i] >= 'A' && msg[i] <= 'Z') || (msg[i] >= 'a' && msg[i] <= 'z')){
                
                msg[i] += 3;
            }
        }
        
        for(int i = 0; i < tam/2; i++){
            
            char aux = msg[(tam - 1 - i)];
            
            msg[(tam - 1 - i)] = msg[i];
            
            msg[i] = aux;
        }
        
        for(int i = tam/2; i < tam; i++){
            
            msg[i] -= 1;
        }
        
        printf("%s\n", msg);
    }
    
    return 0;
}
