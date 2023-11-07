#include<stdio.h>
#include<locale.h>

	struct Tablets {
		char loja[25];
		float preco;
	};

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	struct Tablets tab[5];
	int i;
	float soma, media;
	
	soma = 0;
	media = 0;
	
	for(i = 0; i < 5; i++) {
		printf("Informe o nome da loja: ");
		scanf(" %24[^\n]", tab[i].loja);
		printf("Informe o valor: R$");
		scanf("%f", &tab[i].preco);
		soma += tab[i].preco;
	}
	
	media = soma / 5;
	
	for(i = 0; i < 5; i++) {
		if (tab[i].preco < media) {
			printf("\nA loja %s vende o produto por R$%.2f.", tab[i].loja, tab[i].preco);
		}
	}
	
	return 0;
}
