/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 09/06/2026
Objetivo    : Resolver o problema de Josephus
Aprendizado : Recursividade, congruências modulares e indução finita
Pergunta de segunda ordem: - 
-------------------------------------------------------------------------- */

#include <stdio.h>

int josephus(int n, int k){
    
    int sobrevivente = 0;
    
    for (int i = 2; i <= n; i++){
        
        sobrevivente = (sobrevivente + k) % i;
    }
    
    return sobrevivente + 1;
}

int main(){
    
    int NC;
    scanf("%d", &NC);
    
    for (int i = 1; i <= NC; i++){
        
        int n, k;
        scanf("%d %d", &n, &k);
        
        printf("Case %d: %d\n", i, josephus(n, k));
    }
    
    return 0;
}
