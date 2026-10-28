/*
	Name: somaMatriz.cpp
	Author: Daniel Benetti
	Date: 16/09/26 11:49
	Description: Programa que soma uma matriz via função e imprime por meio de outra função
*/


# include<stdio.h>
# include<locale.h>
//prototipação
void somarMatriz(int [][3], int [][3]);
void imprimirMatriz(int [][3], int [][3], int[][3]); //tudo que é matriz virar um vetor em C


main()
{
	setlocale (LC_ALL, "portuguese");
	int matA[3][3] = {{3,6,2},{1,4,9},{5,6,7}}; //hardcode - valroes imutaveis.
	int matB[3][3] = {{2,1,9},{5,3,7},{8,2,6}}; 
	somarMatriz(matA, matB);
}
//função para somar matriz
void somarMatriz(int Ma[][3], int Mb[][3])
{
	int matS[3][3];
	for(int i = 0; i<3; i++){
		for(int j=0; j<3; j++)
		{
		matS[i][j] = Ma[i][j]+Mb[i][j];
		printf("%d = %d + %d\n", matS[i][j], Ma[i][j],Mb[i][j]);
		}
	}
	imprimirMatriz(Ma, Mb, matS);	
}
//função para imprimir uma matriz quadrada
void imprimirMatriz(int Ma[][3], int Mb[][3], int Ms[][3])
{
	//impressão A
	printf("\n\nImpressão A\n");
	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			printf("%d\t", Ma[i][j]);
		}
		puts("\n");
	}
	//impressão B
	printf("\n\nImpressão B\n");
	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			printf("%d\t", Mb[i][j]);
		}
		puts("\n");
	}
	printf("\n\nImpressão Soma\n");
	//impressão Soma
		for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			printf("%d\t", Ms[i][j]);
		}
		puts("\n");
	}
}
