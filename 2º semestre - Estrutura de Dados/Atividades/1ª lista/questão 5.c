#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL,"");	
	int M1[5][5],M2[5][5],M3[5][5],M4[5][5];	
	int i,j;
	int num;
	
	printf("Matriz 1 (M1)\n\n");
	num=26;
	
	for (i=0; i<5; i++){
		for (j=0; j<5; j++)
		{
			M1[i][j]=num;
			num++;
			printf("[%d]",M1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("Matriz 2 (M2)\n\n");
	num=1;
	
	for (i=0; i<5; i++){
		for (j=0; j<5; j++)
		{
			M2[i][j]=num;
			num++;
			printf("[%d]",M2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("Matriz 3 (M3)\n\n");
	num=0;
	
	for (i=0; i<5; i++){
		num+=10*i;
		for (j=0; j<5; j++)
		{
			M3[i][j]=num;
			num++;
			printf("[%d]",M3[i][j]);
		}
		printf("\n");
		num=0;
	}
	printf("\n");
	
	printf("Matriz 4 (M4)\n\n");
	for (i=0; i<5; i++){
		for (j=0; j<5; j++)
		{
			if (i==j)
			{
				M4[i][j]=M3[i][j];
			}
			
			if (i < j)
			{
				M4[i][j]=M1[i][j];
			}
			
			if (i > j)
			{
				M4[i][j]=M2[i][j];
			} 
						
			printf("[%d]",M4[i][j]);
		}		
		printf("\n");
	}
	
}