// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    PASSO 03 - CONDIÇÕES COMPOSTAS 
    --- CURSO DE ALGORITMOS ---
    Autor: Phelipe Bruione da Silva
    Exercício 31: [DESAFIO] Crie um jogo de JoKenPo (Pedra-Papel-Tesoura)
    Data do programa: 02/10/2023
*/
// --- Função Principal ---
int main()
{
    // --- Declaração das variáveis ---
    char jog1[50], jog2[50];
    int op1, op2;

    puts("========== JOGO DO JOKENPO ==========");
    puts("[1] - PEDRA");
    puts("[2] - PAPEL");
    puts("[3]- TESOURA");

    printf("Nome do 1º jogador: ");
    fgets(jog1, sizeof(jog1), stdin);

    printf("Nome do 2º jogador: ");
    fgets(jog2, sizeof(jog2), stdin);

    printf("Jogada de %s >>> ", jog1);
    scanf("%d", &op1);

    printf("Jogada de %s >>> ", jog2);
    scanf("%d", &op2);

    puts("========================================");
                                                                     //  Condições de empate do jogo 
    if (op1 == 1 && op2 == 1)
    {
        printf("%sJOGOU -> PEDRA!\n", jog1);
        printf("%sJOGOU -> PEDRA!\n", jog2);
    } else if (op1 == 2 && op2 == 2)
    {
        printf("%s JOGOU -> PAPEL!\n", jog1);
        printf("%s JOGOU -> PAPEL!\n", jog2);
    } else if (op1 == 3 && op2 == 3)
    {
        printf("%s JOGOU -> TESOURA!\n", jog1);
        printf("%s JOGOU -> TESOURA!\n", jog2);
    }
        
    if ((op1 == 1 && op2 == 1) || (op1 == 2 && op2 == 2) || (op1 == 3 && op2 == 3))
        puts("JOGO EMPATADO!");

                                                                     // Vitória papel > pedra: jog2
    if (op1 == 1 && op2 == 2)
    {
        printf("%sJOGOU -> PEDRA!\n", jog1);
        printf("%sJOGOU -> PAPEL!\n", jog2);
        printf("Vitória de %s\n", jog2);
    } else if (op1 == 1 && op2 == 3)                                 // Vitória pedra > tesoura: jog1
    {
        printf("%sJOGOU -> PEDRA!\n", jog1);
        printf("%sJOGOU -> TESOURA\n", jog2);
        printf("Vitória de %s\n", jog1);
    } else if (op1 == 2 && op2 == 1)                                 // Vitória papel > pedra: jog1
    {
        printf("%sJOGOU -> PAPEL!\n", jog1);
        printf("%sJOGOU -> PEDRA!\n", jog2);
        printf("Vitória de %s\n", jog1);
    } else if (op1 == 2 && op2 == 3)                                 // Vitória tesoura > papel: jog2
    {
        printf("%sJOGOU -> PAPEL!\n", jog1);
        printf("%sJOGOU -> TESOURA!\n", jog2);
        printf("Vitória de %s\n", jog2);
    } else if (op1 == 3 && op2 == 1)                                 // Vitória pedra > tesoura: jog2
    {
        printf("%sJOGOU -> TESOURA!\n", jog1);
        printf("%sJOGOU -> PEDRA!\n", jog2);
        printf("Vitória de %s\n", jog2);
    } else if (op1 == 3 && op2 == 2)                                 // Vitória tesoura > papel: jog1
    {
        printf("%sJOGOU -> TESOURA!\n", jog1);
        printf("%sJOGOU -> PAPEL!\n", jog2);
        printf("Vitória de %s\n", jog1);
    } else 
        puts("OPÇÃO INVÁLIDA");

    return 0;
} // end main