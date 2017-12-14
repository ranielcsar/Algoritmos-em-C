#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void maximoMinimo(int *v, int N, int *maximo, int *minimo)
{
	int i;
	
	*maximo= v[0];
	*minimo= v[0];
	
	for (i=0; i<N; i++)
	 {
		if (v[i] > *maximo)
		{
			*maximo= v[i];
		}
		
		if (v[i] < *minimo)
		{
			*minimo= v[i];
		}
	}
}

int main()
{
    setlocale(LC_ALL,"");
	 int i, vetor[30];
	 int num, maior=0, menor;
	 
	 srand(time(NULL));
	 
	 printf("Quantos números deseja adicionar?\n");
	 scanf("%d", &num);
	 printf("\n\n");
	 
	 printf("Valores sorteados > ");
	 
	 for (i=0; i<num; i++)
	 {
	 	vetor[i]= rand()%50;
	 	printf("%d ", vetor[i]);
	 }	 
	 
	 printf("\n\n");
	 maximoMinimo(vetor, num, &maior, &menor);
	 
	 printf("Maior valor: %d\n", maior);
	 printf("Menor valor: %d\n", menor);    
    
}
