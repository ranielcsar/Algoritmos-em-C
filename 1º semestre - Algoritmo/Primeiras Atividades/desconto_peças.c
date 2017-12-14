#include <stdio.h>

int main(void)
{
    int pecas;

    printf("Quantas pecas voce quer?\n");
    scanf("%d",&pecas);

    if (pecas < 10)
    {
        printf("\n");
        printf("Voce nao recebera desconto.");
    } else if ((pecas >= 10) && (pecas < 20))
    {
        printf("\n");
        printf("Voce recebera desconto de 10(porc).");
    } else if ((pecas >= 20) && (pecas < 30))
    {
        printf("\n");
        printf("Voce recebera desconto de 15(porc).");
    } else if ((pecas >= 30) && (pecas <= 100))
    {
        printf("\n");
        printf("Voce recebera desconto de 20(porc).");
    } else
    {
        printf("\n");
        printf("Voce recebera desconto de 25(porc).");
    }
return 0;
}
