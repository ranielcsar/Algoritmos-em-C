#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct
{
	char nome[30], estilo[30];
	int integrantes,rank;
}banda;

void exibe(banda b[])
{
	int i;
	for (i=0;i<5;i++)
	{
		printf("Nome da %da banda: %s\n",i+1,b[i].nome);
		printf("Estilo da banda: %s\n",b[i].estilo);
		printf("Número de integrantes: %d\n",b[i].integrantes);
		printf("Ranking no meu top 5: %d\n\n",b[i].rank);
	}
}

int main()
{
	setlocale(LC_ALL,"");
	int i;
	
	banda info[5];
	
	printf("Entre com as informações:\n");
	
	for (i=0;i<5;i++)
	{
		printf("%da banda >\n",i+1);
		printf("Nome da banda: ");
		scanf("%[^\n]s",info[i].nome);
		printf("Estilo da banda: ");
		scanf("%s",info[i].estilo);
		printf("Número de integrantes da banda: ");
		scanf("%d",&info[i].integrantes);
		printf("Ranking no seu top 5: ");
		scanf("%d",&info[i].rank);
		printf("\n");		
	}
	printf("\n\n");
	
	exibe(info);
}