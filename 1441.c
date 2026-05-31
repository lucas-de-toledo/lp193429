/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 26/05/2026
Objetivo    : Calcular o maior número da sequência
Aprendizado : Uso de funções recursivas
Pergunta de segunda ordem: - 
-------------------------------------------------------------------------- */

#include <stdio.h>

long long maiornum(long long h, long long maior){

    if(h > maior) maior = h;
        
    if(h == 1) return maior;
        
    if(h % 2 == 0) return maiornum(h/2, maior);
    
    return maiornum(3*h + 1, maior);
}

int main(){
    
    long long H;
    
    while (scanf("%lld", &H) && H != 0){
        
        printf("%lld\n", maiornum(H, H));
    }
    
    return 0;
}
