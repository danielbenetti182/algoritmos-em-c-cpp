/*
	Name: PiramideRecursiva.cpp
	Author: Daniel Benetti
	Date: 19/10/26 11:40
	Description: Programa que imprime uma pirâmide de forma recursiva, sendo o maior valor argumento
*/

#include<stdio.h>
#include<locale.h>

void ImprimePiramide(int);

main()
{
	setlocale(LC_ALL, "portuguese");
	int n;
	printf("Digite o número: ");
	scanf("%d", &n);
	ImprimePiramide(n);
}
void ImprimePiramide(int n)
{
	if (n <= 0)
		return;
	ImprimePiramide(n-1);
	for(int i = n-1; i >= 0; i--)
		{
		printf("%d", i+1);
		}
	puts(" ");
	}
