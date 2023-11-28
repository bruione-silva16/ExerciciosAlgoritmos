// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 04 - REPETIÇÕES ENQUANTO
    --- Curso de Algoritmos ---
    Autor: Phelipe Bruione da Silva
    Exercício 44: Crie um algoritmo que leia o valor inicial da contagem, o valor final e o incremento, mostrando em seguida todos os valores no intervalo:
    Ex: Digite o primeiro Valor: 3
    Digite o último Valor: 10
    Digite o incremento: 2
    Contagem: 3 5 7 9 Acabou!
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
    while (pri_valor <= ult_valor)
    {
        printf("%d ", pri_valor);
        pri_valor += incr;
    }
    printf("Acabou!\n");

    return 0;
} // end main