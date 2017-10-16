#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int* ordenacaoBolha(int num[]) //Bubble sort
{
	int i, j, troca;
	static int x[30];
	
	for (i=0; i<10; i++){
		for (j=i+1; j<10; j++)
		{
			if (num[i] > num[j])
			{
				troca=num[i]; //Guarda o valor de i, que é maior que j, para ser trocado
				num[i]=num[j]; //"num", na posição i, recebe o "num" da posição j
				num[j]=troca; //o número guardado passa para a posição do num[j]									
			}
		}
		x[i]=num[i];
	}
	
	return x;	
}

int main()
{
	setlocale(LC_ALL,"");
	int i, num[10];
	int *bubble;
	
	srand(time(NULL));
	
	printf("Números desordenados > ");
	
	for (i=0; i<10; i++)
	{
		num[i]=rand()%10;
		printf("%d ",num[i]);
	}
	printf("\n\n");
	
	printf("Números ordenados > ");
	
	bubble=ordenacaoBolha(num);
	
	for (i=0; i<10; i++)
	{
		printf("%d ", *(bubble + i));
	}
	
}
