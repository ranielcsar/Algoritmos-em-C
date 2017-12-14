#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct
{
	char nome[30];
	int matricula;
	float nota1, nota2;
	float media;
	
} aluno;

void mostraAlunos (aluno *a)
{
	int i;
	
	for (i=0; i<5; i++)
	{
		printf("Nome > %s\n", a[i].nome);
		printf("Matrícula > %d\n", a[i].matricula);
		printf("Média > %.1f\n\n", a[i].media);
	}
}

int main()
{
	setlocale(LC_ALL,"");
	int i;
	 
	aluno infos[5];
	 
	printf("Entre com as informações dos alunos >\n\n");
	 
	for (i=0; i<5; i++)
	{
	 	printf("%dº aluno >\n\n", i+1);
	 	printf("Nome: ");
	 	scanf("%s", infos[i].nome);	 	
	 	printf("Matrícula: ");
	 	scanf("%d", &infos[i].matricula);
	 	printf("Nota 1: ");
	 	scanf("%f", &infos[i].nota1);
	 	printf("Nota 2: ");
	 	scanf("%f", &infos[i].nota2);
	 	printf("\n\n");
	 	infos[i].media= (infos[i].nota1 + infos[i].nota2)/2;
	}
	system("cls");
	mostraAlunos(&infos);	     
   system("pause"); 
}
