#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int idade,i=0,menor=0,smenor=0;

	printf("Entre com 6 idades:\n");

	while(i<6)
	{

	   printf("%da idade > ",i+1);
		scanf("%d",&idade);

		if (i==0)
      {
         menor=idade;
      }
      if (i==1)
      {
         smenor=idade;
      }

		if (idade<menor)
		{
         smenor=menor;
          menor=idade;
      } else if (idade<smenor)
      {
         smenor=idade;
      }
      i++;

   }
    	printf("\n");
      printf("Menor número: %d\n",menor);
      printf("Segundo menor número: %d\n",smenor);
}
