#include <stdio.h>

//Função que deixa o usuário determinar o tamanho do vetor
void tamanhoVetor(int v)
{
    int a[v],i;
    
    for (i=0;i<v;i++)
    {
        a[i]=i+1;
        printf("%d ",a[i]);
    }
    
}

int main()
{
    int num;
    printf("Entre com o tamanho do vetor: ");
    scanf("%d",&num);
    printf("\n");
    
    tamanhoVetor(num);
}
