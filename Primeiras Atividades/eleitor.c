#include <stdio.h>

int main(void)
{
    char nome[100];
    int idade;

    printf("Inform seu nome: ");
    scanf("%s",nome);
    printf("Informe sua idade: ");
    scanf("%d",&idade);
    printf("\n");

    if (idade<16)
    {
        printf("Nao eleitor.");
    } else if ((idade>=18) && (idade<65))
    {
        printf("Eleitor obrigatorio.");
    } else
    {
        printf("Eleitor facultativo.");
    }
return 0;
}
