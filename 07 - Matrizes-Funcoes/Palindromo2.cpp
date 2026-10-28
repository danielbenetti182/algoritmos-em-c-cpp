/*
	Name: Palindromo2.cpp
	Author: 
	Date: 09/09/26 10:26
	Description: Programa para identificar se uma string é palindromo
*/

#include <stdio.h>
#include <locale.h>

//prototipação
int verificarPalindromo(char *);
void removerEspaco(char *, char *);
main()
{
	setlocale(LC_ALL, "portuguese");
	char palavra[50], novaP[50];
	int tamanho; //recebe o tamanho da palavra
	int teste;
	
	tamanho = sizeof(palavra)/sizeof(char); //devolve o tamanho do vetor em bytes
	printf("digite uma palavra: ");
	gets(palavra);
	removerEspaco(palavra, novaP);
	teste = verificarPalindromo(novaP);
	if (teste == 1)
		puts("\nÉ um palindromo");
	else
		puts("\nNão é um palindromo");
}
void removerEspaco(char *P, char *N)
{
	int j = 0;
	for(int i = 0; P[i] != '\0' ; i++)
	{
		if(P[i] != ' ')
		{
			N[j] = P[i];
			j++;
		}
	}
}
int verificarPalindromo(char *N)
{
	int i, dir, esq;
	for(i = 0; N[i] != '\0' ; i++)
	{
		printf("%c|", N[i]);
	}
	
	dir = i - 1;
	esq = 0;
	
	for(i = esq; esq <= dir; i++)
	{
		if(N[esq] != N[dir])
			return 0; //falso - não é palindromo
		else
		{
			esq++;
			dir--;
		}
	}
return 1; //verdadeiro - é palindromo

}
