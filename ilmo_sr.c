#include<stdio.h>
#include<string.h>

int main(void)
{
    char nome[100], sexo[100];

    printf("Entre com seu nome: ");
    scanf("%s",nome);
    printf("Qual seu sexo? (masculino ou feminino): ");
    scanf("%s",sexo);

    if (strcmp (sexo,"masculino")==0)
    {
        printf("\n");
        printf("Ilmo. Sr. %s", nome);
    } else
    {
        printf("\n");
        printf("Ilma. Sra. %s", nome);
    }
return 0;
}
