/* Maior e menor número. */

#include <stdio.h>
#include <math.h>

int main()
{
   int num[10],i,maior,menor;

   printf("Entre com 10 valores inteiros:\n");

   for (i=0;i<10;i++)
   {
      printf("%do valor: ",i+1);
      scanf("%d",&num[i]);
   }
   maior=num[0];
   menor=num[0];

   for (i=0;i<5;i++)
   {
       if (num[i]>maior)
      {
         maior=num[i];
      } else if (num[i]<menor)
      {
         menor=num[i];
      }
   }
   printf("Maior número: %d\n",maior);
   printf("Menor número: %d",menor);

}
