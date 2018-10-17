#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL,"");
	int Q[10],maior=0,i,num,posicao;
	
	printf("Entre com 10 números:\n");
	
	for (i=0; i<10; i++)
	{
		printf("%do número: ",i+1);
		scanf("%d",&num);
		
		if (num < 0)
		{
			printf("Digite apenas números positivos!\n\n");
			i--;			
		} else
		{
			Q[i]=num;
			
			if (Q[i] > maior)
			{
				maior=Q[i];
				posicao=i+1;
			}
		}
	}
	printf("\n\n");
	printf("O maior número: %d, está na posição: %d do vetor.", maior, posicao);
	
}
