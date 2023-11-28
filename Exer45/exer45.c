// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 04 - REPETIÇÕES ENQUANTO
    --- Curso de Algoritmos ---
    Autor: Phelipe Bruione da Silva
    Exercício 45: O programa acima vai ter um problema quando digitarmos o primeiro valor maior que o último. Resolva esse problema com um código que funcione
    em qualquer situação.
    Data do programa: 05/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---  
    int pri_valor, ult_valor, incr;

    puts("========== CONTADOR DE PROGRAMA ==========");

    printf("Digite o primeiro valor: ");
    scanf("%d", &pri_valor);

    printf("Digite o último valor: ");
    scanf("%d", &ult_valor);

    printf("Digite o incremento: ");
    scanf("%d", &incr);

    printf("Contagem: ");
    // Contagem Progressiva
    while (pri_valor <= ult_valor)
    {
        if (pri_valor <= ult_valor)
        {
            printf("%d ", pri_valor);
            pri_valor += incr;
        }
    }
    // Contagem Degressiva
    while (pri_valor >= ult_valor)
    {
          if (pri_valor >=  ult_valor)
        {
            printf("%d ", pri_valor);
            pri_valor -= incr;
        }
    }
    printf("Acabou!\n");

    return 0;
} // end main