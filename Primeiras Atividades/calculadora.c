#include <stdio.h>
#include <string.h>

int main(void)
{
    int a,b,ttl;
    char op[5];

    printf("--------------------\n");
    printf("    CALCULADORA     \n");
    printf("--------------------\n");
    printf("\n");
    printf("Entre com o primeiro numero: ");
    scanf("%d",&a);
    printf("Entre com a operacao desejada (+,-,* ou /): ");
    scanf("%s",op);
    printf("Entre com o segundo numero: ");
    scanf("%d",&b);

    if (strcmp (op,"+") ==0)
    {
        ttl=a+b;
    } else if (strcmp (op,"-")==0)
    {
        ttl=a-b;
    } else if (strcmp (op,"*")==0)
    {
        ttl=a*b;
    } else
    {
        ttl=a/b;
    }

    printf("Total: ""%d",ttl);

return 0;
}
