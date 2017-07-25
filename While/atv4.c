#include <stdio.h>

int main(void)
{
    int num,i=1,calc;
    
    printf("Entre com um número para gerar a tabuada de 1 a 10: ");
    scanf("%d",&num);
    
    do
    {
        calc=num*i;
        printf("%d x %d = %d \n",num,i,calc);
        i++;
    } while (i<=10);    
    
return 0;
}



