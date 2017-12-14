#include <stdio.h>

int main(void)
{
    int a,b,c,d,e,f,sPar,sImpar;
    int n1,n2,n3,n4,n5,n6;

    printf("Entre com 6 numeros: \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    scanf("%d",&e);
    scanf("%d",&f);
    printf("\n");


    //Par
    if (a%2==0)
    {
        n1=a;
    } else
    {
        n1=0;
    }
    if (b%2==0)
    {
        n2=b;
    } else
    {
        n2=0;
    }
    if (c%2==0)
    {
        n3=c;
    } else
    {
        n3=0;
    }
    if (d%2==0)
    {
        n4=d;
    } else
    {
        n4=0;
    }
    if (e%2==0)
    {
        n5=e;
    } else
    {
        n5=0;
    }
    if (f%2==0)
    {
        n6=f;
    } else
    {
        n6=0;
    }
    sPar=(n1+n2+n3+n4+n5+n6);

    //Impar
    if (a%2!=0)
    {
        n1=a;
    } else
    {
        n1=0;
    }
    if (b%2!=0)
    {
        n2=b;
    } else
    {
        n2=0;
    }
    if (c%2!=0)
    {
        n3=c;
    } else
    {
        n3=0;
    }
    if (d%2!=0)
    {
        n4=d;
    } else
    {
        n4=0;
    }
    if (e%2!=0)
    {
        n5=e;
    } else
    {
        n5=0;
    }
    if (f%2!=0)
    {
        n6=f;
    } else
    {
        n6=0;
    }
    sImpar=(n1+n2+n3+n4+n5+n6);


    printf("Soma dos numeros pares: %d\n",sPar);
    printf("Soma dos numeros impares: %d\n",sImpar);

}
