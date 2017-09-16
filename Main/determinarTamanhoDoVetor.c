#include <stdio.h>

void tamanhoVetor(int v)
{
    int a[v]; //o parâmetro "v" recebe o número que o usuário digitar e atribui ao tamanho do vetor
    int i;
    
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
