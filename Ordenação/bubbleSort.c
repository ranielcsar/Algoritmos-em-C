/*

      Raniel C�sar (ranoob) - Ordena��o Bolha (Bubble Sort)
      06 abr. 2018. 

*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define max 10

void preenche();
void ordena();
void exibe();


main() {
   srand(time(NULL));
   int vetor[max];
   preenche(vetor);
}


void preenche(int vetor[])
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
                auxiliar= vetor[i]; // auxiliar guarda valor da posi��o [i] do vetor
                vetor[i]= vetor[j]; // a posi��o [i] agora recebe o valor da posi��o [j]
                vetor[j]= auxiliar; // a posi��o [j] recebe o valor que est� na auxiliar
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
