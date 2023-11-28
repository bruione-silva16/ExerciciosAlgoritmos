// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
    PASSO 03 - CONDIÇÕES COMPOSTAS 
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 34: O Índice de Massa Corpórea (IMC) é um valor calculado baseado na altura e no peso de uma pessoa. De acordo com o valor do IMC, 
    podemos classificar o indivíduo dentro de certas faixas.
    - abaixo de 18.5: Abaixo do peso
    - entre 18.5 e 25: Peso ideal
    - entre 25 e 30: Sobrepeso
    - entre 30 e 40: Obesidade
    - acima de 40: Obseidade mórbida 
    Obs: O IMC é calculado pela expressão peso/altura² (peso dividido pelo quadrado  da altura)
    Data do programa: 02/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    float peso, altura, IMC;

    puts("========== CÁLCULO DO IMC ==========");

    printf("Informe o seu peso(KG): ");
    scanf("%f", &peso);

    printf("Informe a altura (m): ");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);
    printf("IMC: %.2f!\n", IMC);

    if (IMC < 18.5)
        puts("ABAIXO DO PESO!");
    else if (IMC >= 18.5 && IMC < 25)
        puts("PESO IDEAL!");
    else if (IMC >= 25 && IMC < 30)
        puts("SOBREPESO!");
    else if (IMC >= 30 && IMC < 40)
        puts("OBESIDADE!");
    else    
        puts("OBESIDADE MÓRBIDA!");
        
    return 0;
} // end main