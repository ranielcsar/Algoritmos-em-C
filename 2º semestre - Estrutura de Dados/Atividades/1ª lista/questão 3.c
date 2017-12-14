#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL,"");	
	int i, j, troca;
	int num[10];
	
	printf("Entre com 10 números:\n");	
	for (i=0; i<10; i++)
	{
		printf("%do número: ", i+1);
		scanf("%d", &num[i]);
	}
	printf("\n");
	
	printf("Número digitados > ");
	for (i=0; i<10; i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n");
	
	printf("Números ordenados em ordem crescente > ");
	for (i=0; i<10; i++){
		for (j=i+1; j<10; j++)
		{
			if (num[i] > num[j])
			{
				troca=num[i];
				num[i]=num[j];
				num[j]=troca;
			}
		}
		printf("%d ",num[i]);
	}
	printf("\n\n");
	system("pause");		
}
