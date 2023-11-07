/* Exercício 05 - Escreva um programa que simule contas bancárias com as seguintes especificações: 
Ao iniciar o programa deverá ser criado uma estrutura para as contas bancárias contendo o número da conta, o nome do titular da conta e o saldo.
Devem ser cadastrados 3 clientes diretamente no programa, com saldo inicial de 0. 
Crie um menu para o programa com as seguintes opções:
[1] Listagem de clientes
[2] Depósito
[3] Saque
[4] Fim
Para cada depósito ou saque realizado, deverá ser mostrado o nome do titular e o saldo atualizado. 
O programa não deve permitir saques com valores superiores ao saldo atual docliente. */


#include<stdio.h>
#include<locale.h>

	struct Conta{
		int numConta;
		char nome[31];
		float saldo;
		
	};


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	struct Conta conta[3];
	int i, op;
	float deposito, saque;
	
	for(i = 0; i < 3; i++){
		printf("\nInforme o número da conta: ");
		scanf("%d", &conta[i].numConta);
		printf("Informe o nome do títular: ");
		scanf(" %30[^\n]", conta[i].nome);
		printf("Informe o saldo inicial da conta: ");
		scanf("%f", &conta[i].saldo);
	}
	
	do {
	
	printf("\n\n");
	printf("[1] - Listagem de clientes\n");
	printf("[2] - Depósito\n");
	printf("[3] - Saque\n");
	printf("[4] - Fim\n");
	
	printf("\nDigite o número da operação desejada: ");
	
	scanf("%d", &op);
	
		switch(op){
		
			case 1: 
				for(i = 0; i < 3; i++){
					printf("\n%s", conta[i].nome);
				}
			break;
		
			case 2: 
				for(i = 0; i < 3; i++) {
					printf("\nInforme o valor do depósito: ");
					scanf("%f", &deposito);
					conta[i].saldo += deposito;
				}
				for (i = 0; i < 3; i++) {
					printf("\n");
					printf("\nNúmero da conta: %d", conta[i].numConta);
					printf("\nTítular da conta: %s", conta[i].nome);
					printf("\nSaldo atualizado: R$%.2f", conta[i].saldo);
				}
			break;
		
			case 3:
				for(i = 0; i < 3; i++){
					printf("\nInforme o valor do saque: ");
					scanf("%f", &saque);
					if (saque > conta[i].saldo) {
						printf("\nSaldo insuficiente!");
					} else {
						conta[i].saldo -= saque;
						printf("\nO novo saldo é de R$%.2f", conta[i].saldo);
					}
				}
			break;
		}
		
	} while (op != 4);
	printf("Fim do programa!");
	return 0;
}
