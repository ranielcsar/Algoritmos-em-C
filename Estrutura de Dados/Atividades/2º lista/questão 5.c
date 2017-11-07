#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct
{
	char cpf[15];
	float altura, peso;
	float imc;
	
} pessoas;

int main()
{
	setlocale(LC_ALL,"");
	char cpf[15];
	int i, opcao;
	
	pessoas p[3];
	
	for (i=0; i<3; i++)
	{
		printf("%dª pessoa >\n\n", i+1);
		printf("Entre com seu CPF: ");
		scanf("%s", p[i].cpf);
		printf("Entre com sua altura: ");
		scanf("%f", &p[i].altura);
		printf("Entre com o seu peso: ");
		scanf("%f", &p[i].peso);
		printf("\n\n");
		
		p[i].imc= p[i].peso/(p[i].altura*p[i].altura);
	}
	
	
	do
	{
		printf("Entre com o CPF da pessoa a ser consultada: ");
		scanf("%s", cpf);
		
		for (i=0; i<3; i++)
		{
			if (strcmp (cpf, p[i].cpf) == 0)
			{
				printf("IMC da pessoa: %.1f\n\n", p[i].imc);
			}
		}
		
		printf("Deseja procurar outra pessoa?\n");
		printf("1. Sim | 2. Não\n");
		printf("> ");
		scanf("%d", &opcao);
		system("cls");
		
	} while (opcao == 1);
}
