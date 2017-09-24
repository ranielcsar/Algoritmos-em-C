#include <stdio.h>
#include <string.h>
#include <locale.h>

typedef struct
{
    char nome[100];
    int idade;
    float altura, peso;
}pessoa;

int main()
{
    setlocale(LC_ALL,"");
    
    pessoa p[5];
    char nome[30];
    int i,sair=1;
    printf("Entre com o nome das pessoas:\n");
    
    for (i=0;i<5;i++)
    {
        printf("%da pessoa: ",i+1);
        scanf(" %[^\n]s",p[i].nome);
    }
    printf("\n");
    printf("Entre com as idades:\n");
    
    for (i=0;i<5;i++)
    {
        printf("%da pessoa: ",i+1);
        scanf("%d",&p[i].idade);
    }
    printf("\n");
    printf("Entre com as alturas:\n");
    
    for (i=0;i<5;i++)
    {
        printf("%da pessoa: ",i+1);
        scanf("%f",&p[i].altura);
    }
    printf("\n");
    printf("Entre com os pesos:\n");
    
    for (i=0;i<5;i++)
    {
        printf("%da pessoa: ",i+1);
        scanf("%f",&p[i].peso);
    }
    printf("\n");
    
    do
    {
    printf("Entre com um nome para saber os dados: ");
    scanf("%s",nome);
    
    for (i=0;i<5;i++)
    {
        if (strcmp (p[i].nome,nome)==0)
        {
            printf("Nome da pessoa: %s\n",p[i].nome);
            printf("Idade: %d\n",p[i].idade);
            printf("Altura: %.2f\n",p[i].altura);
            printf("Peso: %.2f\n",p[i].peso);
        }
    }
        printf("\n");
        printf("Deseja consultar outra pessoa?\n");
        printf("1. Sim\n");
        printf("2. Não\n");
        scanf("%d",&sair);      
        
    } while (sair==1);
    
}
