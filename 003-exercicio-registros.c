/* Exercício 03 - Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seuesporte, idade e altura. 
Em seguida, leia os dados de 5 atletas. Calcule e exiba os nomes do atleta maisalto e do atleta mais velho. */


#include<stdio.h>
#include<locale.h>
#include<string.h>

	struct Atleta{
		char nome[31];
		char esporte[31];
		int idade;
		float altura;
	};

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	struct Atleta atleta[5];
	int i, maisVelho;
	float maisAlto;
	char nomeMaisVelho[30];
	char nomeMaisAlto[30];
	
	maisVelho = 0;
	maisAlto = 0;
	
	for(i = 0; i < 5; i++) {
		printf("\nInforme o nome do atleta: ");
		scanf(" %30[^\n]", atleta[i].nome);
		printf("Informe o esporte desse atleta: ");
		scanf(" %30[^\n]", atleta[i].esporte);
		printf("Informe a idade desse atleta: ");
		scanf("%d", &atleta[i].idade);
		printf("Informe a altura desse atleta: ");
		scanf("%f", &atleta[i].altura);
	}
	
	for(i = 0; i < 5; i++){
		if (atleta[i].idade > maisVelho) {
			maisVelho = atleta[i].idade;
			strcpy(nomeMaisVelho, atleta[i].nome);
		}
		if (atleta[i].altura > maisAlto) {
			maisAlto = atleta[i].altura;
			strcpy(nomeMaisAlto, atleta[i].nome);
		}
	}
	
	printf("O atleta mais velho é o %s com %d anos de idade.", nomeMaisVelho, maisVelho);
	printf("\nO atleta mais alto é o %s com %.2fm de altura.", nomeMaisAlto, maisAlto);
	
	
	return 0;
}
