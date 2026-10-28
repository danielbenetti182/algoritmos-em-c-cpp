/*
	Name: SomatorioRecursivo.cpp
	Author: Daniel Benetti
	Date: 19/10/26 11:40
	Description: Programa que recebe um número inteiro positivo e calcula somatório de 1 até N
*/

#include<stdio.h>
#include<locale.h>

int Somatorio(int);
main()
{
	int n = 0;
	int soma;
	setlocale(LC_ALL, "portuguese");
	printf("Digite um número a ser somado: ");
	scanf("%d", &n);
	if(n >= 0)
		printf("soma de números até %d = %d", n, Somatorio(n));
	else printf("Digite número positivo");
	
}
Somatorio(int n)
{
	if (n==1)
		return 1;
	else if (n==0)
		return 0; 
	return n + Somatorio(n-1);
}
