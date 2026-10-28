/*
	Name: AnaliseDeterminante.cpp
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
	float determinante;
	ordem = 3;
	printf("Digite 9 números: ");
	for(int i = 0; i<ordem; i++){
		for(int j = 0; j<ordem; j++){
			scanf("%d", &mat[i][j]);
		}			
	}
	determinante = calcularDeterminante(mat);
	analisarDeterminante(&determinante);
}
float calcularDeterminante(int mat[3][3])
{
	int j, matE[3][5];
	float detA, detB, mult, det;
	detA = detB = det = 0.0;
	//alimentando expansão da matriz
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			matE[i][j] = mat[i][j];
			matE[i][j+3] = mat[i][j];
			matE[i][j+4] = mat[i][j];
		}
	}
	//imprimindo expansão
	for(int i=0; i<3;i++){
		for(int j=0; j<5;j++){
			printf("%d\t", matE[i][j]);
		}
		puts("\n");
	}
	//calcular a primária
	mult=1;
	for(int h = 0; h < 3; h++ )
	{
		
		for(int j=0; j<3;j++)
		{
			mult *= matE[j][j+h];
		}
		detA += mult;

		mult = 1;
		
	}
	//calcular a secundária
	mult=1;
	for(int h = 2; h >= 0; h-- )
	{
		int i = 0;
		for(int j=2; j>=0;j--)
		{
			mult*= matE[i][j+h];
			i++;
		}
		detB= detB + mult;
		
		mult = 1;
				
	}
	det = detA-detB;

	return det;
}

void analisarDeterminante(float *determinante)
{
	if (*determinante > 0)
		printf("Determinante POSITIVO cujo valor é igual a %.0f", *determinante);
		else
			printf("Determinante NEGATIVO cujo valor é igual a %.0f", *determinante);
}
