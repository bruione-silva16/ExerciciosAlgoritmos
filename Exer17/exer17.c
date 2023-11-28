// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 02 - CONDIÇÕES BÁSICAS
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 17: Escreva um programa que pergunte a velocidade de um carro. Caso ultrapasse 80Km/h, exiba uma mensagem dizendo que o usuário foi multado. 
    Nesse caso, exiba o valor da multa, cobrando R$5 por cada Km acima da velocidade permitida.
    Data do programa: 27/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int velocidade_km, multa; 

    puts("========== DETRAN - MULTA ==========");

    printf("Qual foi a velocidade (Km) do carro? ");
    scanf("%d", &velocidade_km);

    if (velocidade_km > 80)
    {
        multa = (velocidade_km - 80) * 5;
        printf("VOCÊ FOI MULTADO!!\nO valor da multa é de R$%d.00!\n", multa);
    }
    else
        printf("VOCÊ NÃO FOI MULTADO!!!\n");

    return 0;
} // end main
