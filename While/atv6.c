#include <stdio.h>

int main(void)
{
    float i=50,c;
    
    
    printf("Tabela de graus Farenheit em Celcius, de 50 a 65.\n\n");
    
    do
    {
        c=(i-32)/1.8;
        printf("Farenheit: %.f = Celcius: %.2f\n",i,c);
        i++;
    } while(i<=65);
    
    
return 0;
}





