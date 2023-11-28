// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 03 - CONDIÇÕES COMPOSTAS 
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 36: Um programa de vida saudável quer dar pontos atividades físicas que podem ser trocados por dinheiro. O sistema funciona assim:
    - Cada hora de atividade física no mês vale pontos
    - até 10h de atividade no mês: ganha 2 pontos por hora
    - de 10h até 20h de atividade no mês: ganha 5 pontos por hora
    - acima de 20h de atividade no mês: ganha 10 pontos por hora
    - A cada ponto ganho, o cliente fatura R$0,05 (5 centavos)
    Faça um programa que leia quantas horas de atividade uma pessoa teve por mês, calcule e mostre quantos pontos ela teve e quanto dinheiro ela conseguiu 
    ganhar.
    Data do programa: 03/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    int horas_ativ;
    float valor_ganhado;

    puts("========== PROGRAMA VIDA FIT ==========");

    printf("Quantas horas de atividade você fez? ");
    scanf("%d", &horas_ativ);

    if (horas_ativ <= 10)
    {
        valor_ganhado = (horas_ativ * 2) * 0.05;
        printf("Voce ganhou R$%.2f!\n", valor_ganhado);
    } else if (horas_ativ > 10 && horas_ativ <= 20)
    {
        valor_ganhado = (horas_ativ * 5) * 0.05;
        printf("Voce ganhou R$%.2f!\n", valor_ganhado);
    } else 
    {
        valor_ganhado = (horas_ativ * 10) * 0.05;
        printf("Voce ganhou R$%.2f!\n", valor_ganhado);
    }

} // end main