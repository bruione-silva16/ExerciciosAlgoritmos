// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 01 - SEQUÊNCIAS BÁSICAS 
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 08: Desenvolva um programa que leia uma distância em metros e mostre os valores
    relativos em outras medidas.
    Ex:
    Digite uma distância em metros: 185.72
    A distância de 85.7m corresponde a:
    0.18572Km
    1.8572Hm
    18.572Dam
    18572.0cm
    1857.2dm
    185720.0mm
    Data do programa: 25/09/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float dist;

    puts("-------- UNIDADES DE MEDIDAS --------");


    printf("Digite uma distânia em metros: ");
    scanf("%f", &dist);

    printf("A distancia de %.1f corresponde a: \n", dist);
    printf("%.5fKm\n", (dist / 1000));
    printf("%.4fHm\n", (dist / 100));
    printf("%.3fDam\n", (dist / 10));
    printf("%.1fdm\n", (dist * 10));
    printf("%.1fcm\n", (dist * 100));
    printf("%.1fmm\n", (dist * 1000));

    return 0;
} // end main