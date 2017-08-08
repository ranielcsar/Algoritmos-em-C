/*  algoritmo que recebe a idade e o peso de 7 pessoas, calcula e mostra:
•	A quantidade de pessoas com mais de 90 quilos;
•	A média das idades das 7 pessoas. */

#include <stdio.h>

int main()
{
    
    int idade,peso,calc=0,media,p=0;
    
    
    for (int i=1; i<=7; i++)
    {
    printf("Entre com a idade da %dª pessoa: ",i);
    scanf("%d",&idade);
    printf("Entre com o peso da %dª pessoa: ",i);
    scanf("%d",&peso);
    
        if (peso > 90)
        {
            p++;
        }
        calc+=idade;
    }
    media=calc/7;
    
    printf("Quantidade de pessoas com mais de 90Kg: %d \n",p);
    printf("Media da idade das 7 pessoas: %d",media);
    

    return 0;
}



