#include <stdio.h>
#include <string.h>

int main()
{
    struct beta
    {
        char nome[30];
        int idade;
    };
    
    struct beta teste[5];
    char buscaNome[30];
    
    int i;
    
    for (i=0;i<5;i++)
    {
        printf("Nome da %da pessoa: ",i+1);
        scanf("%s",teste[i].nome);
        printf("Idade da %d pessoa: ",i+1);
        scanf("%d",&teste[i].idade);
    }
    printf("\n");
    printf("Digite o nome da pessoa que você queira ver a idade: ");
    scanf("%s",buscaNome);
    
    for (i=0;i<5;i++)
    {
        if (strcmp (teste[i].nome,buscaNome)==0)
        {
            printf("Nome da pessoa: %s\n",teste[i].nome);
            printf("Idade da pessoa: %d\n",teste[i].idade);
        }
    }
}
