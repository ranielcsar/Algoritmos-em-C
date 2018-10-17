#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct
{
	char nome[50], endereco[50], telefone[50];	
} Pessoas;

void inserePessoas(Pessoas *p)
{
	int i;
	
	for (i=0; i<5; i++)
	{
		printf("Nome da %dª pessoa: ", i+1);
		scanf("%[^\n]%*c", p[i].nome);
		printf("Endereço: ");
		scanf("%[^\n]%*c", p[i].endereco);
		printf("Telefone: ");
		scanf("%[^\n]%*c", p[i].telefone);
		printf("\n");
	}
}

void imprimePessoas(Pessoas *p)
{
	int i, j;
	Pessoas aux;
	
	for (i=0; i<5; i++){
		for (j=i; j<5; j++)
		{
			if (strcmp (p[i].nome, p[j].nome) > 0)
			{
				aux= p[i];
				p[i]= p[j];
				p[j]= aux;
			}
		}				
	}
	
	for (i=0; i<5; i++)
	{
		printf("Nome: %s\n", p[i].nome);
		printf("Endereço: %s\n", p[i].endereco);
		printf("Telefone: %s\n\n", p[i].telefone);
	}	
}

int main()
{
	setlocale(LC_ALL,"");
	
	Pessoas ppl[5];
		
	inserePessoas(ppl);
	imprimePessoas(ppl);
	system("pause");
}
