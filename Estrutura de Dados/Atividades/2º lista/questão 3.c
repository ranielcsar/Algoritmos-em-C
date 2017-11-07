#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void maximoMinimo(int *v, int N, int *maximo, int *minimo)
{
	int i;
	
	printf("Valores do vetor > ");
	
	for (i=0; i<N; i++)
	{
		printf("%d ",v[i]);
	}
	printf("\n");
	
	printf("Número de elementos: %d\n", N);
	printf("Valor máximo: %d\n", *maximo);
	printf("Valor mínimo: %d\n\n", *minimo);
}

int main()
{
    setlocale(LC_ALL,"");
	 int i, vetor[30];
	 int num, maior=0, menor;
	 
	 srand(time(NULL));
	 
	 printf("Quantos números deseja adicionar?\n");
	 scanf("%d", &num);
	 
	 for (i=0; i<num; i++)
	 {
	 		vetor[i]= rand()%31;
	 		
	 		if (i==0)
	 		{
	 			menor= vetor[i];
			}
	 		
	 		if (vetor[i] > maior)
	 		{
	 			maior= vetor[i];
			}
			
			if (vetor[i] < menor)
			{
				menor= vetor[i];
			}
	 }
	 printf("\n\n");
	 maximoMinimo(&vetor, num, &maior, &menor);    
    
}
