/*
	Name: Media.cpp
	Author: Daniel Benetti
	Date: 02/09/26 12:09
	Description: Programa que armazena 6 notas em vetor e calcula média via função
				 e analisa a media por meio de outra
*/
//importação
#include<stdio.h>
#include<locale.h>

//prototipação
float calcularMedia(float *);
void analisarMedia(float);

main()
{
	setlocale(LC_ALL, "portuguese");
	float notas[6], media;
	media = 0.0;
	printf("Digite as 6 notas: ");
	for (int i = 0; i < 6; i++)
	{
		scanf("%f", &notas[i]);
	}
	media = calcularMedia(notas);
	printf("Sua média é %.2f", media);
	analisarMedia(media);
}
float calcularMedia(float *N)
{
	float soma = 0;
	for (int i = 0; i < 6; i++)
	{
	soma = soma + N[i];
	}
	float media = soma/6; 
	return media;
}
void analisarMedia(float M)
{
	if(M >= 6)
		printf("\nStatus: Aprovado");
	else if(M >= 4)
		printf("\nStatus: Exame");
	else if(M >= 0)
		printf("\nStatus: Reprovado");
}
