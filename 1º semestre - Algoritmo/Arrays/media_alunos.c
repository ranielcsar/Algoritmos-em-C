/* Receber duas notas de 10 alunos, calcular a média e dizer se foi aprovado ou não. */

#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL,"portuguese");
   float notas1[10],notas2[10],media[10];
   int i;

   printf("Entre com as duas notas bimestrais dos alunos:\n");

   for (i=0;i<10;i++)
   {
      printf("%do aluno >\n",i+1);
      printf("1a nota: ");
      scanf("%f",&notas1[i]);
      printf("2a nota: ");
      scanf("%f",&notas2[i]);
      printf("\n");

      media[i]=(notas1[i]+notas2[i])/2;
   }
   for (i=0;i<10;i++)
   {
      if (media[i]>=7)
      {
         printf("Aluno %d > Media %.2f: Aprovado!\n",i+1,media[i]);
      } else
      {
         printf("Aluno %d > Media %.2f: Reprovado!\n",i+1,media[i]);
      }
   }
}
