/* Digite 10 números e diga qual o maior e o segundo maior. */

#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int num,i=0,maior=0,M=0,c=0;

	printf("Entre com 10 números inteiros:\n");

	while(i<10)
	{
		c++;
		printf("%dº número: ",c);
		scanf("%d",&num);
		i++;

		if (num>maior)
		{
		    M=maior;
		    maior=num;
        	} else if ((num>M) && (num!=maior))
        	{
          	  M=num;
       		}

    	}
    	printf("\n");
	printf("Maior número: %d\n",maior);
	printf("Segundo maior número: %d",M);
}
