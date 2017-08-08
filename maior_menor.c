#include <stdio.h>

int main (void)
{
    int a,b,c,d,e,maior,menor;

    printf("Entre com 5 numeros inteiros:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    printf("\n");

    //Maior
    if ((a>b) && (a>c) && (a>d) && (a>e))
    {
        maior=a;
    } else if ((b>a) && (b>c) && (b>d) && (b>e))
    {
        maior=b;
    } else if ((c>a) && (c>b) && (c>d) && (c>e))
    {
        maior=c;
    } else if ((d>a) && (d>b) && (d>c) && (d>e))
    {
        maior=d;
    } else
    {
        maior=e;
    }

    //Menor
    if ((a<b) && (a<c) && (a<d) && (a<e))
    {
        menor=a;
    } else if ((b<a) && (b<c) && (b<d) && (b<e))
    {
        menor=b;
    } else if ((c<a) && (c<b) && (c<d) && (c<e))
    {
        menor=c;
    } else if ((d<a) && (d<b) && (d<c) && (d<e))
    {
        menor=d;
    } else
    {
        menor=e;
    }


    printf("Maior numero: %d\n",maior);
    printf("Menor numero: %d",menor);
return 0;
}
