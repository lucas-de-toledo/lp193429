/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 19/05/2026
Objetivo    : Imprimir a quantidade de leds necessária
Aprendizado : Uso do switch/case, tratamento de número como string
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <string.h>

int main(){
    
    int N;
    
    scanf("%d", &N);
    
    while(N--){
        
        char num[101];
        
        int numleds = 0;
        
        scanf("%s", num);
        
        int tam = strlen(num);
        
        for(int i = 0; i < tam; i++){
            
            switch(num[i]){
                
                case '1':
                
                    numleds += 2;
                    break;
                    
                case '7':
                
                    numleds += 3;
                    break;
                    
                case '4':
                
                    numleds += 4;
                    break;
                    
                case '2':
                case '3':
                case '5':
                
                    numleds += 5;
                    break;
                    
                case '0':
                case '6':
                case '9':
                
                    numleds += 6;
                    break;
                    
                case '8':
                
                    numleds += 7;
                    break;
            }
        }
        
        printf("%d leds\n", numleds);
    }
    
    return 0;
}
