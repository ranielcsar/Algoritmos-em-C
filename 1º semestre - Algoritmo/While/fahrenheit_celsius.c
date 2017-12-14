#include <stdio.h>

int main(void)
{
    float i=50,c;
    
    
    printf("Tabela de graus Fahrenheit em Celsius, de 50 a 65.\n\n");
    
    do
    {
        c=(i-32)/1.8;
        printf("Fahrenheit: %.f = Celsius: %.2f\n",i,c);
        i++;
    } while(i<=65);
    
    
return 0;
}





