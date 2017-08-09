#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    char cpf[11];
    int icpf[11];
    int mPdigito,sPdigito,diviP,pDigi; //Váriaveis usadas para validação do 1º digito
    int mSdigito,sSdigito,diviS,sDigi; //Váriaveis usadas para validação do 2º digito
    int p=10,s=11,i; //contadoras

    printf("Entre com seu CPF (11111111111): ");
    scanf("%s",cpf);

    for (i=0; i<strlen(cpf);i++)
    {
        icpf[i]=cpf[i] - '0'; //converte char em int
        if (p>1)
        {
            mPdigito=icpf[i]*p; //multiplicação de cada número do cpf
            sPdigito+=mPdigito; //soma de todos os resultados do cálculo acima
            p--;
        }
        if (s>1)
        {
            mSdigito=icpf[i]*s;
            sSdigito+=mSdigito;
            s--;
        }
    }
    diviP=sPdigito%11;
    pDigi=11-diviP;
    diviS=sSdigito%11;
    sDigi=11-diviS;

    if (diviS<2)
    {
        pDigi=0;
    }
    if (diviP<2)
    {
        sDigi=0;
    }

    if ((pDigi==icpf[9]) && (sDigi==icpf[10]) || (pDigi==icpf[10]) && (sDigi==icpf[11]))
    {
        printf("CPF Válido!\n");
    } else
    {
        printf("CPF inválido!\n");
    }

    system("pause");

}
