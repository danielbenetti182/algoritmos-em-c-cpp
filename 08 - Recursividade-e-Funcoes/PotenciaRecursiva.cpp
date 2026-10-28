/*
	Name: PotenciaRecursivo.cpp
	Author: Daniel Benetti
	Date: 19/10/26 11:40
	Description: Programa que recebe dois números inteiro positivo e calcula potencia de forma recursiva
*/

#include<stdio.h>
#include<locale.h>

int CalculoPotencia(int, int);
main()
{
	int x, k;
	setlocale(LC_ALL, "portuguese");
	printf("Digite o número e a potencia: ");
	scanf("%d %d", &x, &k);
	if(k >= 0)
		printf("%d elevado a %d = %d", x, k, CalculoPotencia(x, k));
	else printf("Digite uma potencia válida");
	
}
int CalculoPotencia(int x, int k)
{
	if (k == 0)
		return 1;
	else
		return x * CalculoPotencia(x, k-1);
}
