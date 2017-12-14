#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char nome[20];
	int numMatricula;
} matricula;

int main()
{
	setlocale(LC_ALL,"");	
	int i, opcao;
	char nome[20], achei;
	
	matricula m[10];
	
	printf("Informe o nome dos alunos:\n");
	
	for (i=0; i<10; i++)
	{
		printf("%dº aluno: ",i+1);
		scanf("%s",m[i].nome);
		m[i].numMatricula=i+1;
	}
	printf("\n\n");
	
	do
	{
		achei=0;
		
		printf("Entre com um nome para verificar matrícula: ");
		scanf("%s",nome);
		printf("\n");
		
		for (i=0;i<10;i++)
		{
			if (strcmp (m[i].nome, nome)==0)
			{
				printf("Achei!\n");
				printf("Nome do aluno: %s\n",m[i].nome);
				printf("Número da matrícula: %d\n\n",m[i].numMatricula);
				achei=1;
			}
		}
		
		if (achei==0)
		{
			printf("Não achei :/\n\n");
		}
		
		printf("Deseja procurar outro?\n");
		printf("1 > Sim\n");
		printf("2 > Não\n");
		scanf("%d",&opcao);
		printf("\n\n");
	
	} while (opcao==1);		
}