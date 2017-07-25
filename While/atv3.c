#include <stdio.h>

int main(void)
{
    
    int num,i=0;
    
    do 
    {
        printf("Entre com um número: ");
        scanf("%d",&num);
        
        if ((num<0) || (num>10))
        {
            printf("Número inválido.\n");
        } else
        {
            printf("Número válido.\n");
            ++i;
        }
        
    } while (i==0);
   
return 0;
}



