/* Exercício 04 - Crie uma estrutura com o código e a quantidade em estoque de 5 produtos. Em seguida, leia umpedido composto por um código de produto e quantidade. 
Se houver quantidade suficiente para atender ao pedido integralmente, atualize a quantidade em estoque do produto e apresente amensagem "Estoque atualizado", 
caso contrário, apresente a mensagem "Quantidade insuficiente emestoque". */


#include<stdio.h>
#include<locale.h>

	struct Estoque{
		int codigo;
		int quantidade;
	};
	
	struct Pedido {
		int codigo;
		int quantidade;
	};


int main(){
	setlocale(LC_ALL, "Portuguese");
	
	struct Estoque stock[5];
	int i;
	
	for(i = 0; i < 5; i++) {
		printf("\nInforme o código do produto: ");
		scanf("%d", &stock[i].codigo);
		printf("Informe a quantidade em estoque: ");
		scanf("%d", &stock[i].quantidade);		
	}
	
	struct Pedido order[1];
	
	for (i = 0; i < 1; i++) {
		printf("\nInforme o código do produto: ");
		scanf("%d", &order[i].codigo);
		printf("Informe a quantidade comprada: ");
		scanf("%d", &order[i].quantidade);
	}
	
	for (i = 0; i < 1; i++) {
		if (order[i].quantidade > stock[i].quantidade) {
			printf("Estoque insuficiente!");
		} else {
			stock[i].quantidade -= order[i].quantidade;
			printf("\nEstoque atualizado!");
			printf("\nNova quantidade em estoque: %d", stock[i].quantidade);
		}
	}
	
	
	
	
	
	return 0;
}
