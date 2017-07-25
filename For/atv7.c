/* Faça um algoritmo que imprima os múltiplos positivos de 7, inferiores a 1000 */

#include <stdio.h>
#include <locale.h>


int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int i;
    printf("Múltiplos de 7: ");
    for (i=1;i<1000;i++)
    {
        if (i%7==0)
        {
            printf("%d ",i);
        }
    }
}
