/*
	Name: crypto.cpp
	Author: Daniel Benetti
	Date: 09/09/26 11:38
	Description: Programa para fazer o merge entre 2 vetores de string
*/

#include <stdio.h>
#include <locale.h>
//prototipação
void merge(char *, char *); //funçao para combinar os dois vetores
main()
{
	setlocale (LC_ALL, "portuguese");
	char nome[50], docs[21];
	printf("Digite seu nome completo: "); gets(nome);
	printf("\nDigite seu CPF e RG: "); gets(docs);
	merge(nome, docs);
}
void merge (char *Nome, char *Docs)
{
	int i, j, tam;
	for(i = 0; Nome[i] != '\0' ; i++)
	{}
	tam = i + 21;
	char crypto[tam];
			
	for(i = 0, j = 0; i < tam; i++)
	{
		if(Nome[i] != '\0')
		{
			crypto[j] = Nome[i];
			crypto[j+1] = Docs[i];
			j = j + 2;
		}
	}
	puts("\nConteudo do vetor crypto:");
	for(i = 0; crypto[i] != '\0'; i++)
		printf("%c|", crypto[i]);
}
