#include<stdio.h>
#include<string.h>

int main(void)
{
	float salario,bonus,ttl;
	char casado[100], filho[100];

	printf("Qual seu salário?\n");
	scanf("%g",&salario);
	printf("Você é casado? (sim ou não)\n");
	scanf("%s",casado);
	printf("Tem filhos? (sim ou não)\n");
	scanf("%s",filho);
	printf("\n");


	if (strcmp (casado,"sim") == 0 && strcmp(filho,"sim")==0)
	{
	    bonus = salario*20/100;
	    ttl = salario+bonus;

        printf("Salário R$""%g",salario);
		printf("\n");
		printf("Seu salário receberá um bônus de 20%. R$""%g",bonus);
		printf("\n");
		printf("Ficará R$""%g",ttl);
		printf("\n");

	} else if (strcmp (casado,"sim") == 0 && strcmp(filho,"nao")==0)
	{
	    bonus = salario*15/100;
	    ttl = salario+bonus;

        printf("Salário R$""%g",salario);
		printf("\n");
		printf("Seu salário receberá um bônus de 15%. R$""%g",bonus);
		printf("\n");
		printf("Ficará R$""%g",ttl);
		printf("\n");
	} else
	{
	    printf("Voce não receberá bônus.");
	    printf("\n");
	}
return 0;
}
