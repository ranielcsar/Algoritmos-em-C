#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int num,calc=0,i;

    printf("Entre com um número: ");
    scanf("%d",&num);
    printf("\n");

    i=2;
    while (num>i)
    {
        if (i%2==0)
        {
           calc+=i;
        }
        i++;
    }
        printf("A soma dos números pares entre 2 e %d é igual a: %d",num,calc);
return 0;

}


