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
		printf("\nInforme o n�mero da conta: ");
		scanf("%d", &conta[i].numConta);
		printf("Informe o nome do t�tular: ");
		scanf(" %30[^\n]", conta[i].nome);
		printf("Informe o saldo inicial da conta: ");
		scanf("%f", &conta[i].saldo);
	}
	
	do {
	
	printf("\n\n");
	printf("[1] - Listagem de clientes\n");
	printf("[2] - Dep�sito\n");
	printf("[3] - Saque\n");
	printf("[4] - Fim\n");
	
	printf("\nDigite o n�mero da opera��o desejada: ");
	
	scanf("%d", &op);
	
		switch(op){
		
			case 1: 
				for(i = 0; i < 3; i++){
					printf("\n%s", conta[i].nome);
				}
			break;
		
			case 2: 
				for(i = 0; i < 3; i++) {
					printf("\nInforme o valor do dep�sito: ");
					scanf("%f", &deposito);
					conta[i].saldo += deposito;
				}
				for (i = 0; i < 3; i++) {
					printf("\n");
					printf("\nN�mero da conta: %d", conta[i].numConta);
					printf("\nT�tular da conta: %s", conta[i].nome);
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
						printf("\nO novo saldo � de R$%.2f", conta[i].saldo);
					}
				}
			break;
		}
		
	} while (op != 4);
	printf("Fim do programa!");
	return 0;
}
