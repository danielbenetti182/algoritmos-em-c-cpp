/*
	Name: contagemRegressiva.c
	Author: Daniel Benetti
	Date: 22/08/26 22:37
	Description: Programa que faz contagem regressiva com base em input do usuario
*/

//seção de importação
#include <stdio.h>
#include <locale.h>

//seção de prototipação
int contador(int);

main()
{
	setlocale(LC_ALL, "portuguese");
	int contagem;
	printf("Insira o tempo da contagem regressiva: ");
	scanf("%d", &contagem);
	contador(contagem);
}
contador(int num)
{
	int i, countdown;
	countdown = num;
	for(i = 0; i < num; i++){
		printf("\n%d...", countdown);
		countdown --;
	}
	printf("\nFOGO!!!");
}
