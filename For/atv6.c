/*Programa que recebe a idade, o peso e o sexo de 10 pessoas. Calcula e imprime:
• total de homens;
• total de mulheres;
• a soma e a média das idades dos homens;
• a soma e a média dos pesos das mulheres.*/


#include <stdio.h>
#include <string.h>

int main()
{
    int id,peso,tH=0,tM=0,somaH=0,somaM=0,a=0;
    double mediaH=0,mediaM=0;
    char sexo[100];
    
    for (int i=0;i<10;i++)
    {
        a++;
        printf("Entre com a idade da %dª pessoa: \n",a);
        scanf("%d",&id);
        printf("Entre com o peso da %dª pessoa: \n",a);
        scanf("%d",&peso);
        printf("Entre com o sexo da %dª pessoa (masculino ou feminino): \n",a);
        scanf("%s",sexo);
        
            if (strcmp (sexo,"masculino")==0)
            {
                somaH+=id;
                tH++;
            } else
            {
                somaM+=peso;
                tM++;
            }
    }
    if (tH != 0)
    {
        mediaH=somaH/tH;
    }
    if (tM != 0)
    {
        mediaM=somaM/tM;
    }
    
    printf("\n");
    printf("Total de mulheres: %d\n",tM);
    printf("Total de homens: %d\n",tH);
    printf("Soma da idade dos homens: %d\n",somaH);
    printf("Média da idade dos homens: %.2f\n",mediaH);
    printf("Soma do peso das mulheres: %d\n",somaM);
    printf("Média do peso das mulheres: %.2f\n",mediaM);

    return 0;
}



