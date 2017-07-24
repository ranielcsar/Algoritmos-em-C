/* Desafio: O perfil de uma pessoa pode ser determinado a partir da sua data de nascimento. */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int dia,mes,ano;
    int cMesDia,cAno,resto1,resto2,soma,divisao;
    printf("-----------------------------------------------------------\n");
    printf("Sua idade revela seu perfil! Teste agora e veja qual o seu!\n");
    printf("-----------------------------------------------------------\n\n");
    printf("Entre com sua data de nascimento (11/11/1111): ");
    scanf("%d/%d/%d",&dia,&mes,&ano);
    printf("\n");

    cMesDia=(dia*100)+mes;
    cAno=cMesDia+ano;
    resto1=cAno%100;
    resto2=cAno/100;
    soma=resto1+resto2;
    divisao=soma%5;

    if (divisao==0)
    {
        printf("Você é tímido!");
    } else if (divisao==1)
    {
        printf("Você é sonhador!");
    } else if (divisao==2)
    {
        printf("Você é paquerador!");
    } else if (divisao==3)
    {
        printf("Você é atraente!");
    } else
    {
        printf("Você é irresistível!");
    }
    printf("\n");
    system("pause");

}
