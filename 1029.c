/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Lucas Ferreira de Oliveira Toledo
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 26/05/2026
Objetivo    : Calcular o número de chamadas
Aprendizado : Uso de funções recursivas
Pergunta de segunda ordem: - 
-------------------------------------------------------------------------- */

#include <stdio.h>

int num_calls;

int fib(int n){
    if (n == 0)
        return 0;
        
    if (n == 1)
        return 1;
        
    num_calls += 2;
    
    return fib(n - 1) + fib(n - 2);
}

int main(){
    
    int N;
    scanf("%d", &N);
    
    while(N--){
        
        int x;
        scanf("%d", &x);
        
        num_calls = 0;
        
        int result = fib(x);
        
        printf("fib(%d) = %d calls = %d\n", x, num_calls, result);
    }
    
    return 0;
}
