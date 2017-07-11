#include<stdio.h>
#include<string.h>

int main(void)
{
    double sal,aux,ttl;
    char estc[100], filho[100];

    printf("Qual seu salario?\n");
    scanf("%lf",&sal);
    printf("Voce e casada? Responda com sim ou nao.\n");
    scanf("%s",estc);
    printf("Tem filhos? Responda com sim ou nao.\n");
    scanf("%s",filho);

    if (strcmp (filho,"sim") ==0)
    {
        aux= sal*35/100;
        ttl= sal+aux;

        printf("\n");
        printf("Voce recebera um auxilio de R$: ""%f",aux);
        printf("\n");
        printf("Seu salario ficou: R$: ""%f",ttl);
    } else if (strcmp (estc,"sim")==0 && strcmp (filho,"nao")==0)
    {
            aux= sal*15/100;
            ttl= sal+aux;

            printf("\n");
            printf("Voce recebera um auxilio de R$: ""%f",aux);
            printf("\n");
            printf("Seu salario ficou: R$: ""%f",ttl);
    } else
    {
        printf("\n");
        printf("Voce nao recebera auxilio.");
    }

}

