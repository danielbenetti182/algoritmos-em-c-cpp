/*
	Name: Palindromo.cpp
	Author: Daniel Benetti
	Date: 08/09/26 10:43
	Description: Programa que identifica palindromos
*/

#include<stdio.h>
#include<locale.h>

//prototipação
void decuparFrase(char *, char *, char *);
void checarPalindromo(char *, char *, char *);

main()
{
	setlocale (LC_ALL, "portuguese");
	char frase[40], analise[40], inversao[40];
	printf("Escreva uma frase: ");
	gets(frase);
	decuparFrase(frase, analise, inversao);
	checarPalindromo(frase, analise, inversao);
}
void decuparFrase(char *ptrF,char *ptrA, char *ptrI)
{
	char lixo[20];
	//remoção de espaços e alimentando analise
	int j = 0;
	for(int i = 0; ptrF[i] != '\0'; i++)
	{
		if(ptrF[i] == ' ')
			lixo[i] = ptrF[i];
		else
		{
			ptrA[j] = ptrF[i];
			printf("%c", ptrA[j]);
			j++;
				}
	}
	ptrA[j] = '\0';
	//inversão da string para devolução
	puts(" ");
	int i = 0;
	for(j = j - 1; j >= 0; j--)
	{
			ptrI[i] = ptrA[j];
			printf("%c", ptrI[i]);
			i++;
	}

}
void checarPalindromo(char *ptrF, char *ptrA, char *ptrI)
{
	bool pali = true;
	for(int i = 0; ptrA[i] != '\0'; i++)
	{
		if(ptrA[i] != ptrI[i])
		pali = false;
	}
	if(pali == true)
		printf("\na frase/palavra %s é um palindromo", ptrF);
	else
		printf("\na frase/palavra %s não é um palindromo", ptrF);
}
