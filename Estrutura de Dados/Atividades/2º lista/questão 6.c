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
		printf("%dº produto >\n\n");
		printf("Nome: %s\n", p[i].nomeProduto);
		printf("Código: %d\n", p[i].codigo);
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
		printf("Nome do %dº produto: ", i+1);
		scanf("%s", prod[i].nomeProduto);
		printf("Código númerico: ");
		scanf("%d", &prod[i].codigo);
		printf("Preço: ");
		scanf("%f", &prod[i].preco);
		printf("\n");		
	}
	
	imprimeLista(&prod);
	
	
	do
	{
		printf("Digite o código do produto para saber o preço: ");
		scanf("%d", &codigo);
		
		for (i=0; i<5; i++)
		{
			if (codigo==prod[i].codigo)
			{
				printf("Nome do produto: %s\n", prod[i].nomeProduto);
				printf("Preço: R$%.2f\n\n", prod[i].preco);
			}
		}
		
		printf("Deseja procurar outro produto?\n");
		printf("1. Sim | 2. Não\n");
		printf("> ");
		scanf("%d", &opcao);
		
	} while (opcao==1);
	system("pause");
	
}
