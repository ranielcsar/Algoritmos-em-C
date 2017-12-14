#include <stdio.h>

int main(void)
{
    int num1,n1,i;

    printf("Entre com um número: ");
    scanf("%d",&num1);
    printf("\n");

    i=1;
    while (i<=num1)
    {
        n1+=i;
        i++;
    }

    printf("A soma dos números entre 1 até %d é igual a: %d",num1,n1);
    
    return 0;
}
