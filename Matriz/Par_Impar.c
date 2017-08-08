#include <stdio.h>

int main()
{
    int par=0,impar=0,num[3][3],i,j;
    
    printf("Entre com vários números inteiros:\n");
    
    for (i=0;i<3;i++)
        for (j=0;j<3;j++)
        {
            scanf("%d",&num[i][j]);
            
            if (num[i][j]%2==0)
            {
                par++;
            } else
            {
                impar++;
            }
        }
        printf("Quantidade de números pares: %d\n",par);
        printf("Quantidade de números impares: %d\n",impar);
}