#include <stdio.h>

int main(void)
{
    int n1;

    printf("Entre com um numero: ");
    scanf("%d",&n1);
    printf("\n");

    //par ou ímpar
    if (n1 % 2 == 0)
    {
        printf("Numero par.");
        printf("\n");
    } else
    {
        printf("Numero impar.");
        printf("\n");
    }

    //positivo ou negativo

    if (n1>0)
    {
        printf("Numero positivo.");
    } else
    {
        printf("Numero negativo.");
    }

}
