/* Digite 7 valores e diga quantos pares existem e em que posição está cada par.*/

#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL,"portuguese");
   int i,num[7],par=0;

   printf("Entre com 7 valores: ");

   for (i=0;i<7;i++)
   {
      scanf("%d",&num[i]);
      if (num[i]%2==0)
      {
         par++;
      }
   }
   printf("%d números são pares.\n",par);

   for (i=0;i<7;i++)
   {
      if (num[i]%2==0)
      {
         printf("Valor par na posição: %d\n",i+1);
      }
   }


}
