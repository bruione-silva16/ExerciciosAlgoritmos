// --- Bibliotecas Iniciais ---
#include <stdio.h>
#include <stdlib.h>
/*
  PASSO 09 - PROCEDIMENTOS
  --- CURSO DE ALGORITMOS ---
  Autor: Phelipe Bruione da Silva
  Exercício 89: Crie um programa que melhore o procedimento Gerador() da questão anterior para que o programador possa escolher uma entre três bordas:
  +-------=======------+ Borda 1
  ~~~~~~~~:::::::~~~~~~~ Borda 2
  <<<<<<<<------->>>>>>> Borda 3
  Ex: Uma chamada válida seria Gerador("Portugol Studio", 3, 2)
  ~~~~~~~~:::::::~~~~~~~
  Portugol Studio
  Portugol Studio
  Portugol Studio
  ~~~~~~~~:::::::~~~~~~~
  Data do programa: 16/11/2023
*/
// --- Protótipo da Função ---
void Gerador(char s[], int n, int b);
// --- Função Principal ---
int main() 
{
    // --- Declaração das variáveis ---
    int op_borda, quant_msg;
    
    puts("====================================");
    puts("        ESCOLHENDO UMA BORDA        ");
    puts("====================================");
    puts("[1] - +-------=======------+");
    puts("[2] - ~~~~~~~~:::::::~~~~~~~");
    puts("[3] - <<<<<<<<------->>>>>>>");
    printf("Escolha uma das bordas abaixo: ");
    scanf("%d", &op_borda);

    printf("Escolha quantas vezes a mensagem aparecerá: ");
    scanf("%d", &quant_msg);

    Gerador("Linguagem C", quant_msg, op_borda);
    
    printf("--- FIM DO PROGRAMA ---\n");
    return 0;
} // end main

// --- Desenvolvimento da Função ---
void Gerador(char s[], int n, int b)
{
    int i;

    switch(b)
    {
        case 1:
        puts("+-------=======------+");
        for (i = 0; i < n; i++)
            printf("%s\n", s);
        puts("+-------=======------+");
        break;
        case 2:
        puts("~~~~~~~~:::::::~~~~~~~");
        for (i = 0; i < n; i++)
            printf("%s\n", s);
        puts("~~~~~~~~:::::::~~~~~~~");
        break;
        case 3:
        puts("<<<<<<<<------->>>>>>>");
        for (i = 0; i < n; i++)
            printf("%s\n", s);
        puts("<<<<<<<<------->>>>>>>");
        break;
        default:
        puts("OPÇÃO INVÁLIDA");
        break;
    } // end switch
} // end Gerador