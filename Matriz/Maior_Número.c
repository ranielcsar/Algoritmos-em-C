#include <stdio.h>

int main()
{
    int M[4][4];
    int maior=0,i,j,linha=0,coluna=0;
    
    printf("Entre com vários números para saber o maior digitado:\n");
    
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
        {
            printf("Linha [%d] Coluna [%d]: ",i+1,j+1);
            scanf("%d",&M[i][j]);
            
            if (M[i][j] > maior)
            {
                maior=M[i][j];
                linha=i;
                coluna=j;
            }
        }
            printf("Maior número digitado está na linha [%d] coluna [%d]: %d",linha+1,coluna+1,maior);
        
}