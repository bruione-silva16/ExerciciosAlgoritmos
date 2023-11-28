#include <stdio.h>
/*
  PASSO 09 - PROCEDIMENTOS
  --- CURSO DE ALGORITMOS ---
  Autor: Phelipe Bruione da Silva
  Exercício 88: Crie um programa que melhore o procedimento Gerador() da questão anterior para que mostre uma mensagem várias vezes
  Ex: Ao chamar Gerador("Aprendendo Portugol", 4) aparece:
  +-------=======------+
   Aprendendo Portugol
   Aprendendo Portugol
   Aprendendo Portugol
   Aprendendo Portugol
  +-------=======------+
  Data do programa: 16/11/2023
*/
// --- Protótipo da Função ---
void Gerador(char s[], int n);
// --- Função Principal ---
int main()
{
    Gerador(" Aprendendo Linguagem C", 4);
  
    printf("--- FIM DO PROGRAMA ---\n");
    return 0;
} // end main

// --- Desenvolvimento da Função ---
void Gerador(char s[], int n)
{
  int i;
  puts(" +-------=======------+");
  for (i = 0; i < n; i++)
    printf("%s\n", s);
  puts(" +-------=======------+");
} // end Gerador