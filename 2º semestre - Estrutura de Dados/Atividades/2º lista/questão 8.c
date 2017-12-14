#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct
{
	char nome[50], telefone[50], rua[50], complemento[50];
	char bairro[50], cep[50], cidade[50], estado[50];
	char pais[50], anirvs[50], email[50];
} Agenda;

void preencheAgenda(Agenda *dados, int num)
{
	int i;
	
	for (i=0; i<num; i++)
	{
		if (num > 1)
		{
			printf("%dª pessoa >\n\n", i+1);
		}
		
		printf("Nome: ");
		scanf("%[^\n]%*c", dados[i].nome);
		printf("Telefone: ");
		scanf("%[^\n]%*c", dados[i].telefone);
		printf("Email: ");
		scanf("%[^\n]%*c", dados[i].email);	
		printf("País: ");
		scanf("%[^\n]%*c", dados[i].pais);
		printf("Estado: ");
		scanf("%[^\n]%*c", dados[i].estado);	
		printf("Cidade: ");
		scanf("%[^\n]%*c", dados[i].cidade);
		printf("CEP: ");
		scanf("%[^\n]%*c", dados[i].cep);
		printf("Bairro: ");
		scanf("%[^\n]%*c", dados[i].nome);		
		printf("Rua: ");
		scanf("%[^\n]%*c", dados[i].nome);
		printf("Complemento: ");
		scanf("%[^\n]%*c", dados[i].nome);		
		printf("Data de nascimento: ");
		scanf("%[^\n]%*c", dados[i].nome);
		printf("\n\n");				
	}
}

int main()
{
	setlocale(LC_ALL,"");
	int num;	
	
	printf("Quantas pessoas deseja adicionar na agenda?\n");
	scanf("%d", &num);
	
	Agenda pessoas[num];	
	
	preencheAgenda(pessoas, num);
	

}
