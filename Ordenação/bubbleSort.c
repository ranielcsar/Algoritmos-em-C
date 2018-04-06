#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max 10

void preencheVetor();
void ordena();
void exibe();


main() {
   srand(time(NULL));
   int vetor[max];
   preencheVetor(vetor);
}

void preencheVetor(int vetor[])
{
   int i;
   
   for (i= 0; i < max; i++)
      vetor[i]= rand()%20;
      
   printf("Vetor sem ordenar > ");
   for (i= 0; i < max; i++)
      printf("%d ", vetor[i]);
      
   ordena(vetor);
}

void ordena(int vetor[])
{
   int i, j;
   int auxiliar;
    
    for (i= 0; i < max; i++) {
        for (j= 0; j < max; j++)
        {
            if (vetor[i] < vetor[j])
            {
                auxiliar= vetor[i]; // Guarda valor da posição [i] na auxiliar
                vetor[i]= vetor[j]; // Joga o valor de [j] na posição [i]
                vetor[j]= auxiliar; // Valor da posição [j] recebe a auxiliar,
		    		    // que recebeu o valor de [i] na 1ª linha
            }
        }
    }
    
    exibe(vetor);
}

void exibe(int vetor[])
{
   int i;
   
   printf("\n\n");
   
   printf("Vetor ordenado > ");   
   for (i= 0; i < max; i++)
      printf("%d ", vetor[i]);
}
