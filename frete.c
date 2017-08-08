#include<stdio.h>

int main(void)
{
    int qnt,reg;
    double frete, ttl,ttlf;

    printf("Sapatos a R$ 70 reais! Quantos voce quer?\n");
    scanf("%d",&qnt);
    printf("Qual sua regiao?\n");
    printf("1. Nordeste\n");
    printf("2. Sudeste\n");
    scanf("%d",&reg);

    ttl=qnt*70;

    if (reg==1)
    {
        frete=ttl*5/100;
        ttlf=ttl+frete;
        printf("\n");
        printf("Valor total: R$""%f\n",ttl);
        printf("Valor do frete: R$""%f\n",frete);
        printf("Valor final da compra: R$""%f\n",ttlf);
    } else if (reg==2)
    {
        frete=ttl*2/100;
        ttlf=ttl+frete;
        printf("\n");
        printf("Valor total: R$""%f\n",ttl);
        printf("Valor do frete: R$""%f\n",frete);
        printf("Valor final da compra: R$""%f\n",ttlf);
    } else
    {
        printf("\n");
        printf("Região inválida.");
    }
return 0;
}
