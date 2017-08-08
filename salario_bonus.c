#include<stdio.h>
#include<string.h>

int main(void)
{
	float salario,bonus,ttl;
	char casado[100], filho[100];

	printf("Qual seu salário?\n");
	scanf("%f",&salario);
	printf("Você é casado? (sim ou não)\n");
	scanf("%s",casado);
	printf("Tem filhos? (sim ou não)\n");
	scanf("%s",filho);
	printf("\n");


	if (strcmp (casado,"sim") == 0 && strcmp(filho,"sim")==0)
	{
	    bonus = salario*20/100;
	    ttl = salario+bonus;

        printf("Salário R$ %.2f",salario);
		printf("\n");
		printf("Seu salário receberá um bônus de R$ %.2f (20%%). Ficará: R$ %.2f ",bonus,ttl);
		
	} else if (strcmp (casado,"sim") == 0 && strcmp(filho,"nao")==0)
	{
	    bonus = salario*15/100;
	    ttl = salario+bonus;

        printf("Salário R$ %.2f",salario);
		printf("\n");
		printf("Seu salário receberá um bônus de R$ %.2f (15%%). Ficará: R$ %.2f ",bonus,ttl);
	} else
	{
	    printf("Voce não receberá bônus.");
	    printf("\n");
	}
return 0;
}
