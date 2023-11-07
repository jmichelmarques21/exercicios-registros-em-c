/* Exercício 01 - Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter o nome do aluno, 
	o nome da disciplina e as notas do aluno em duas provas. Em seguida, leia os dados de trêsalunos e os armazena nessa estrutura. 
	Por fim, exiba o nome do aluno, o nome da disciplina e a médiados alunos que foram aprovados com média igual ou superior a 6. */

#include<stdio.h>
#include<locale.h>

	struct Aluno {
		char nome[31];
		char disciplina[31];
		float nota1, nota2;
	};



int main(){
	setlocale(LC_ALL, "Portuguese");
	
	struct Aluno alunos[3];
	float media;
	int i;
	
	
	for (i = 0; i < 3; i++) {
		printf("Informe o nome do aluno: ");
		scanf(" %30[^\n]", alunos[i].nome);
		
		printf("Informe a disciplina: ");
		scanf(" %30[^\n]", alunos[i].disciplina);
		
		printf("Informe a primeira nota: ");
		scanf(" %f", &alunos[i].nota1);
		
		printf("Informe a segunda nota: ");
		scanf(" %f", &alunos[i].nota2);
	}
	
	for(i = 0; i < 3; i++) {
		if (((alunos[i].nota1 + alunos[i].nota2) / 2) >= 6.0) {
			printf("\nAluno: %s", alunos[i].nome);
			printf("\nDisciplina: %s", alunos[i].disciplina);
			printf("\nMédia: %.2f", (alunos[i].nota1 + alunos[i].nota2)/ 2);
		}
	}
	
	
	return 0;
}
