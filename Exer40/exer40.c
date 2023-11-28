// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 04 – REPETIÇÕES ENQUANTO
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 39: Crie um aplicativo que mostre na tela a seguinte contagem:
    0 3 6 9 12 15 18 Acabou!
    Data do programa: 03/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int cont = 0;

    while (cont <= 18)
    {
        printf("%d ", cont);
        cont += 3;
    }
    printf("Acabou!\n");
    
    return 0;
} // end main