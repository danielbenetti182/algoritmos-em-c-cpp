/*
	Name: AnaliseDeterminanteBunda.cpp
	Author: Daniel Benetti
	Date: 20/09/26 11:36
	Description: Programa que carrega uma matriz de ordem 3 e calcula sua determinante por meio de função
*/

#include<stdio.h>
#include<locale.h>

//prototipação
float calcularDeterminante(int [][3]);
void analisarDeterminante(float *);

main()
{
	setlocale (LC_ALL, "portuguese");
	int mat[3][3], ordem;
	float *determinante;
	ordem = 3;
	printf("Digite 9 números: ");
	for(int i = 0; i<ordem; i++){
		for(int j = 0; j<ordem; j++){
			scanf("%d", &mat[i][j]);
		}			
		}
	*determinante = calcularDeterminante(mat);
	analisarDeterminante(determinante);
}
float calcularDeterminante(int mat[3][3])
{
	int j;
	float detA, detB, mult, det;
	//calcular a primária coluna 1
	mult=1;
	j=0;
	for(int i = 0; i < 3; i++)
	{
	 	mult=mult*mat[i][j];
		j++;
	}
	detA = detA+mult;
	//coluna 2
	mult=1; j=1;
	for(int i = 0; i < 3; i++)
	{
	 	mult=mult*mat[i][j];
		j++;
		if(j == 3)
		j=0;
	}
	detA = detA+mult;
	//coluna 3
	mult=1; j=1;
	for(int i = 0; i < 3; i++)
	{
	 	mult=mult*mat[i][j];
		j++;
		if(j == 3)
		j=0;
	}
	detA = detA+mult;
	printf("%f", detA);
	return detA;
}

void analisarDeterminante(float *determinante)
{
	if (determinante > 0)
		printf("Determinante POSITIVO cujo valor é igual a %.1f", determinante);
		else
			printf("Determinante NEGATIVO cujo valor é igual a %.1f", determinante);
}
