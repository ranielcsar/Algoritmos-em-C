#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    char cpf[15];
    int icpf[15];
    int mPdigito,sPdigito,diviP,pDigi; //Váriaveis usadas para validação do 1º digito
    int mSdigito,sSdigito=0,diviS,sDigi; //Váriaveis usadas para validação do 2º digito
    int p=10,s=11,i; //contadoras

    printf("Entre com seu CPF (111.111.111-11): ");
    scanf("%s",cpf);

    for (i=0; i<strlen(cpf);i++)
    {
       if ((cpf[i]=='.') || (cpf[i]=='-'))
        {
           i++;
        }

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

    if ((pDigi==icpf[12]) && (sDigi==icpf[13]))
    {
        printf("CPF Válido!\n");
    } else
    {
        printf("CPF inválido!\n");
    }

    system("pause");
}
