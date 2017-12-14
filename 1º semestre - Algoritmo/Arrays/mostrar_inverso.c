/*  Dada uma seqüência de n números, imprimi-la na ordem inversa à da leitura.  */

#include <stdio.h>
#include <locale.h>

int main()
{
   int i,num,numV[1000];

   printf("Quantos número você quer digitar?: ");
   scanf("%d",&num);
   printf("Digite %d números: ",num);

   for (i=0;i<num;i++)
   {
      scanf("%d",&numV[i]);
   }
   for (i=num-1;i>=0;i--)
   {
      printf("%d",numV[i]);
      printf("\n");
   }

}
