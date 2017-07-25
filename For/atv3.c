/* algoritmo que recebe 10 números, calcula e mostra a quantidade de números entre 30 e 90. */


#include <stdio.h>

int main()
{
    
    int num,cont=0;
    
    printf("Entre com 10 números: \n");
    
    for (int i=0; i<10; i++)
    {
        scanf("%d",&num);
        
        if ((num >30) && (num<90))
        {
            cont++;
        }
    }
    
    printf("Quantidade de números digitados que estão entre 30 e 90: %d\n",cont);
    
    return 0;
}



