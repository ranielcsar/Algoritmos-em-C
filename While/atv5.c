#include <stdio.h>

int main(void)
{
    int i=100,calc,num;
    
    printf("Múltiplos de 7 de 100 a 200: ");
    do
    {
        if (i%7==0)
        {
            printf("%d ",i);
            calc+=i;
        }
        i++;
    } while (i<=200);
    
    printf("\n");
    printf("Soma dos múltiplos: %d",calc);
    
    
    
    
return 0;
}



