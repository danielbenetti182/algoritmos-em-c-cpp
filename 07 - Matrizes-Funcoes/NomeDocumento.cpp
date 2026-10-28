/*
	Name: NomeDocumento
	Author: Daniel Benetti
	Date: 07/09/26 17:28
	Description: Programa que recebe dois vetores contendo nome e dados e mistura em um terceiro vetor
*/

#include <stdio.h>
#include <locale.h>
//prototipação

void merge (char *, char *, char *);
void imprimirVetor(char *);

main()
{
	char nome[50], dado[50], crypto[100];
	printf("Digite seu nome completo: ");
	fgets(nome, 50, stdin);
	printf("Digite os números do seu CPF e RG: ");
	fgets(dado, 50, stdin);
	merge(nome, dado, crypto);
	imprimirVetor(crypto);
}
void merge (char *ptrN, char *ptrD, char *ptrC)
{
	int j, k; j = k = 0;
	for(int i = 0; i<100; i++)
	{
		ptrC[i] = ptrN[j];
		i++; j++;
		ptrC[i] = ptrD[k];
		k++;
	}
	
}
void imprimirVetor(char *ptrC)
{
	printf("%s", ptrC);
}
