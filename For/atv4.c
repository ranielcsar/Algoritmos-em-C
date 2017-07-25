/* Número inteiros de 1 a (valor fornecido pelo usuário) */

#include <stdio.h>

int main(void)
{
    
    int num;
    printf("Entre com um número: ");
    scanf("%d",&num);
    printf("Números inteiros de 1 a %d: ",num);
    
    for (int i=1;i<num;i++)
    {
        printf("\n%d",i);
    }
    return 0;
}



