/* Série de Fibonacci (1,1,2,3,5,8...) */

#include <stdio.h>

int main(void)
{
    
    int num=1,a=0,b=0;
    printf("Série de Fibonacci até 20º termo: ");
    
    for (int i=0;i<20;i++)
    {
        b=num+a; //-b- recebe o valor de -num + a-
        printf("%d ",b); //saída da soma de -num + a-
        num=a; //aqui -num- recebe o valor de -a-
        a=b; //e -a- recebe o valor de -b-
        
    }
    return 0;
}