/*
	Name: QuadradoMagico.c
	Author: Daniel Benetti
	Date: 22/09/26 18:15
	Description: Programa que identifica se uma matriz é um quadrado mágico por meio de funções
*/


#include<stdio.h>
#include<locale.h>

//prototipação
void carregarMatriz(int linha, int coluna, int [linha][coluna]);
void analisarQuadradoMagico(int linha, int coluna, int [linha][coluna]);

main()
{
	setlocale (LC_ALL, "portuguese");
	int linha, coluna; linha = coluna = 0;
	printf("Digite o tamanho em linhas e colunas:\n");
	printf("Linhas: "); scanf("%d", &linha);
	printf("Colunas: "); scanf("%d", &coluna);
	int mat[linha][coluna];
	carregarMatriz(linha, coluna, mat);
}
void carregarMatriz(int linha, int coluna,int mat[linha][coluna])
{
	int i, j;
	printf("digite os %d da matriz", linha*coluna);
	for(i = 0; i<linha; i++){
		for(j = 0; j<coluna; j++){
			scanf("%d", &mat[i][j]);
		}			
	}
	for(i = 0; i<linha; i++){
		for(j = 0; j<coluna; j++){
			printf("%d\t", mat[i][j]);
		}
		puts("\n");
	}
	analisarQuadradoMagico(linha, coluna, mat);
}
void analisarQuadradoMagico(int linha, int coluna,int mat[linha][coluna])
{
	int i, j;
	bool quadradoMagico = true;
	int checarValorMagico = mat[0][0]+mat[1][1]+mat[2][2];
	while(quadradoMagico = true){
	for(i = 0; i<linha; i++){
		for(j = 0; j<coluna; j++)
		{
			
		}
	}
	}
	
	
	
	
}
