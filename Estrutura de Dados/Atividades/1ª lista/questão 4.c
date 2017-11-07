#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL,"");	
	int M[5][5];
	int i,j;
	int somaPrincipal=0,somaSecundaria=0,somaTotal=0;
	srand(time(NULL));
	
	printf("Números gerados aleatoriamente\n\n");
	for (i=0; i<5; i++){
		for (j=0; j<5; j++)
		{
			M[i][j]=rand()%10;
			
			if (i==j)
			{
				somaPrincipal+=M[i][j];
			}
			
			if (i + j + 1 == 5)
			{
				somaSecundaria+=M[i][j];
			}
			somaTotal+=M[i][j];
			
			printf("[%d]",M[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("Soma da diagonal primária: %d\n",somaPrincipal);
	printf("Soma da diagonal secundária: %d\n",somaSecundaria);
	printf("Soma total dos números: %d\n",somaTotal);
}
