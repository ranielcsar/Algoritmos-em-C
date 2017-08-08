#include <stdio.h>

int main(void)
{
    int a,b;

    printf("Entre com dois valores:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("\n");

    if (a%b==0)
    {
        printf("Numeros divisiveis entre si.");
    } else
    {
        printf("Numeros nao divisiveis entre si.");
    }
}
