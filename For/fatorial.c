/* ----Fatorial---- */

#include <stdio.h>

int main()
{
    
    int n,i,f=1;
    printf("Entre com um número inteiro: ");
    scanf("%d",&n);
    
    /* Cálculo */
    for (i=1; i<=n; i++)
    {
        printf("%d x %d\n",f,i);
        f*=i;
        
    }
    printf("\n");
    printf("Resultado do fatorial: %d \n",f);
    return 0;
}



