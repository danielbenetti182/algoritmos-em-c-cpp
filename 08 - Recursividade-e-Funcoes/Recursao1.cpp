/*
	Name: Recursao1.cpp
	Author: Daniel Benetti
	Date: 14/10/26 11:11
	Description: Aprendendo a aplicar recursividade
*/

#include <stdio.h>
#include <locale.h>

//prototipação
void funcao1();
void linha(int);
void lerNum();
int  cont = 0; //variavel global
main()
{
/*
	int qtde;
	printf("Qual a quantidade de caracteres para desenhar a linha: ");
	scanf("%d", &qtde);
	linha(qtde);
	funcao1();
*/
	lerNum();
}
//Funcão recursiva
void funcao1()
{
	if (cont == 20000)
		return;
	printf("-");
	cont++;
	printf("%d", cont);
	funcao1();
}

//Função recursiva para ler  números
void lerNum()
{
	int num;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if(num == 99)
		return;
	lerNum();
}



/*
	 Função recursiva que desenha uma linha
	 com a quantidade de caracteres escolhido
	 pelo usuário
*/
void linha(int qtde)
{
	if(qtde == 0)
		return;
	printf("\xDB");
//	printf("%d", qtde);
	linha(--qtde); //decrementa e depois usa
}
