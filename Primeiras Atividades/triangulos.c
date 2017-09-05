#include <stdio.h>

int main(void)
{
    int a,b,c;

    printf("Entre com o valor dos lados para determinar o tipo de triangulo:\n");
    printf("A: ");
    scanf("%d",&a);
    printf("B: ");
    scanf("%d",&b);
    printf("C: ");
    scanf("%d",&c);

    if ((a==b) && (b==c))
    {
        printf("\n");
        printf("Triangulo equilatero.");
    } else if ((a==b) || (b==c) || (a==c))
    {
        printf("\n");
        printf("Triangulo isoceles.");
    } else
    {
        printf("\n");
        printf("Triangulo escaleno.");
    }
return 0;
}
