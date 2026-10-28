/*
	Name: Banco.cpp
	Author: Daniel Benetti
	Date: 28/10/26 09:57
	Description: programa que simular operações bancárias
*/

//biblioteca
#include <stdio.h>
#include <locale.h>
//biblioteca de strings
#include <string.h>
#include <windows.h>

//prototipação
void escolha();
void retorno();
void consultarSaldo();
void realizarDeposito();
void efetuarSaque();	
void trocarSenha();
int verSenha();
int verConta();
//globais
float saldo = 2500;
int senha = 1234;
int tentativa = 2;
int tentativaC = 2;
int conta = 789789;

main()
{
	setlocale(LC_ALL, "portuguese");
	escolha();

}
//função de escolha
void escolha()
{
	tentativa = 2;
	tentativaC = 2;
	while (1){
	system("cls");
	int escolha;
	printf("Bem vindo!\n1)Consultar saldo \n2)Realizar depósito \n3)Efetuar saque\n4)Trocar senha\n99)encerrar programa \nDigite a opção que deseja acessar: ");
	scanf("%d", &escolha);
		switch (escolha) {
		case 1:
			consultarSaldo();
		case 2:
			realizarDeposito();
		case 3:
			efetuarSaque();	
		case 4:
			trocarSenha();
		case 99:
			exit(0);
		default:
		puts("Opção inválida");
			
		} 
	}
}
//função para chamar ou encerrar programa
void retorno()
{
	int opt;
	printf("\nDeseja realizar mais alguma operação?\n 1)Sim\n 2)Não\n");
	scanf("%d", &opt);
		if(opt == 1)
			escolha();
		else
			exit(0);
}
//consulta de saldo
void consultarSaldo()
{
	if(verConta() == 1 && verSenha() == 1)
		{
			printf("Seu saldo é de: R$%.2f", saldo);
			retorno();
		}
	
}
//função de depósito no saldo
void realizarDeposito()
{
	if(verConta() == 1 && verSenha() == 1)
	{
		float soma;
		printf("Digite o valor a ser depositado: ");
		scanf("%f", &soma);
		if(soma > 0)
			{
			saldo += saldo;
			retorno();
			}
		else
			{
			printf("Digite valor válido\n");
			realizarDeposito();
			}
	}
}
//consulta de saldo
void efetuarSaque()
{
	
	if(verConta() == 1 && verSenha() == 1)
	{
		float saque;
		printf("Digite o valor a ser sacado:\nR$ ");
		scanf("%f", &saque);
		if(saque <= saldo)
			saldo = saldo - saque;
		else
			printf("Saldo insuficiente, consulte seu saldo");
		retorno();
	}
}
//troca de senha
void trocarSenha()
{
	if(verConta() == 1 && verSenha() == 1)
	{
			printf("Digite sua nova senha: ");
			scanf("%d", &senha);
			retorno();
	}
}
//analise senha
int verSenha()
{
	int pwd;
	printf("Senha: ");
	scanf("%d", &pwd);
		if(pwd == senha)
		return 1;
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
					printf("Acesso bloqueado, fale com seu gerente!");
					exit(0);
				}
		}
}
int verConta()
{
	int lclconta;
	printf("Conta: ");
	scanf("%d", &lclconta);
		if(lclconta == conta)
		return 1;
	else
		{
			if (tentativa > 0)
				{
				printf("Conta não encontrada\n");
				tentativaC--;
				verConta();
				}
			else
				{	
					printf("Acesso bloqueado, fale com seu gerente!");
					exit(0);
				}
		}
}
