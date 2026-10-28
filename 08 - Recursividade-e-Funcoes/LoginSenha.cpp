/*
	Name: LoginSenha.cpp
	Author: Daniel Benetti
	Date: 28/10/26 09:57
	Description: programa que reconhece login e senha por meio de recursividade indireta
*/

//biblioteca
#include <stdio.h>
#include <locale.h>
//biblioteca de strings
#include <string.h>

//prototipação
void verLogin();
void verSenha();

//global
char user[] = "Usuario";
int senha = 1234;
int tentativa;

main()
{
	setlocale (LC_ALL, "portuguese");
	verLogin();
}

//função para verificar Login
void verLogin()
{
	char login[20];
	printf("Login: ");
	gets(login);
		if (strcmp (login,user) == 0) //string compare
			{
			tentativa = 2;
			verSenha();
			}
		else
			{
				printf("Digite usuário válido!\n");
				verLogin();
			}
}
//função para verificar a senha
void verSenha()
{
	int pwd;
	printf("Senha: ");
	scanf("%d", &pwd);
		if(pwd == senha)
			printf("Acesso liberado");
		else 
		{
			if (tentativa > 0)
				{
				printf("Senha inválida!\n");
				tentativa--;
				verSenha();
				}
			else
				{	
					fflush(stdin); //Limpa o buffer do teclado
					verLogin();
				}
		}
			
}
