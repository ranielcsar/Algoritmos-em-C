#include<stdio.h>
#include<string.h>

int main(void)
{
    double sal,aux,ttl;
    char estc[100], filho[100];

    printf("Qual seu salario?\n");
    scanf("%f",&sal);
    printf("Voce e casada? Responda com sim ou nao.\n");
    scanf("%s",estc);
    printf("Tem filhos? Responda com sim ou nao.\n");
    scanf("%s",filho);

    if (strcmp (filho,"sim") ==0)
    {
        aux= sal*35/100;
        ttl= sal+aux;

        printf("\n");
        printf("Você receberá um auxílio de R$: %.2f (35%%). Seu salário ficou: R$ %.2f",aux,ttl);
        
    } else if (strcmp (estc,"sim")==0 && strcmp (filho,"nao")==0)
    {
            aux= sal*15/100;
            ttl= sal+aux;

            printf("\n");
            printf("Você receberá um auxílio de R$: %.2f (15%%). Seu salário ficou: R$ %.2f",aux,ttl);
    } else
    {
        printf("\n");
        printf("Você não receberá auxílio.");
    }

}

