/*
	Name: QuadradoMagico.cpp
	Author: Daniel Benetti
	Date: 22/09/26 18:15
	Description: Programa que identifica se uma matriz é um quadrado mágico por meio de funções
*/


#include<stdio.h>
#include<locale.h>

//prototipação
void carregarMatriz(int i, int j, int [i][j]);
//void analisarQuadradoMagico(int [i][j]);

main()
{
	setlocale (LC_ALL, "portuguese");
	int i, j; i = j = 0;
	printf("Digite o tamanho em linhas e colunas:\n");
	printf("Linhas: "); scanf("%d", &i);
	printf("Colunas: "); scanf("%d", &j);
	int mat[i][j];
	carregarMatriz(i, j, mat);
}
void carregarMatriz(int i, int j,int mat[i][j])
{
	for(int ii = 0; ii<i; ii++){
		for(int jj = 0; jj<j; jj++){
			scanf("%d", &mat[ii][jj]);
		}			
	}
	for(int i=0; i<3;i++){
		for(int j=0; j<5;j++){
			printf("%d\t", mat[i][j]);
		}
		puts("\n");
	}
}
