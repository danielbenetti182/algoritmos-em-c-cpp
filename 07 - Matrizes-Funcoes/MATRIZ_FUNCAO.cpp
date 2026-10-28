/*
	Name:  matriz_funcao.cpp
	Author: Daniel Benetti 
	Date: 16/09/26 09:54
	Description: Programa para manipular matrizes dentro de uma função
*/


# include<stdio.h>
# include<locale.h>
//prototipação
void imprimirMatriz(int [][3]); //tudo que é matriz virar um vetor em C


main()
{
	setlocale (LC_ALL, "portuguese");
	int mat[3][3] = {{7,8,2},{0,1,4},{5,6,9}}; //hardcode - valroes imutaveis.
	imprimirMatriz(&mat);
		
}
//função para imprimir uma matriz quadrada
void imprimirMatriz(int M[][3])
{
	for(int i=0; i<3;i++){
		for(int j=0; j<3;j++){
			printf("%d\t", M[i][j]);
		}
		puts("\n");
	}
}
