/*
	Name: ContagemRegressivaRecursiva.cpp
	Copyright: 
	Author: Daniel Benetti
	Date: 14/10/26 11:45
	Description: Função que exibe uma contagerm regressiva 
				 por meio de valor escolhido pelo usuário na main passado por recursão, 
				 ao final da contagem mostra a palavra "Fogo!!"
*/

#include <stdio.h>
//prototipação
void contagemRegressiva(int);

main()
{
	int cont = 0;
	printf("Insira a contagem: ");
	scanf("%d", &cont);
	contagemRegressiva(cont);
}

void contagemRegressiva(int cont)
{
	printf("\n\xDB %d \xDB", cont);
	if(cont == 0)
	{
		printf("\nFOGO!!");
		return;
	}
	contagemRegressiva(--cont);
}


