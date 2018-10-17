#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct
{
	int codigo;
	char nomeProduto[20];
	float preco;
} Produtos;

void imprimeLista (Produtos *p)
{
	int i;
	
	for (i=0; i<5; i++)
	{
		printf("%d� produto >\n\n");
		printf("Nome: %s\n", p[i].nomeProduto);
		printf("C�digo: %d\n", p[i].codigo);
	}
	printf("\n");
}

int main()
{
	setlocale(LC_ALL,"");
	int i, codigo, opcao;
	float preco;
	char nome[20];
	
	Produtos prod[5];
	
	
	printf("Cadastre seus produtos >\n\n");
	
	for (i=0; i<5; i++)
	{
		printf("Nome do %d� produto: ", i+1);
		scanf("%s", prod[i].nomeProduto);
		printf("C�digo n�merico: ");
		scanf("%d", &prod[i].codigo);
		printf("Pre�o: ");
		scanf("%f", &prod[i].preco);
		printf("\n");		
	}
	
	imprimeLista(&prod);
	
	
	do
	{
		printf("Digite o c�digo do produto para saber o pre�o: ");
		scanf("%d", &codigo);
		
		for (i=0; i<5; i++)
		{
			if (codigo==prod[i].codigo)
			{
				printf("Nome do produto: %s\n", prod[i].nomeProduto);
				printf("Pre�o: R$%.2f\n\n", prod[i].preco);
			}
		}
		
		printf("Deseja procurar outro produto?\n");
		printf("1. Sim | 2. N�o\n");
		printf("> ");
		scanf("%d", &opcao);
		
	} while (opcao==1);
	system("pause");
	
}
