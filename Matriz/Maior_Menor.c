/*Maior e menor número da linha 2 e coluna 4*/

#include <stdio.h>

int main()
{
    int M[4][4];
    int imaior=0,imenor=0,jmaior=0,jmenor=0;
    int i,j;
    
    printf("Entre com vários números:\n");
    
    for (i=0;i<4;i++)
        for (j=0;j<4;j++)
        {
            printf("Linha [%d] Coluna [%d]: ",i+1,j+1);
            scanf("%d",&M[i][j]);
            
            if (i==1)
            {
                imenor=M[i][j];
                
                if (M[i][j]>imaior)
                {
                    imaior=M[i][j];
                } else if (M[i][j]<imenor)
                {
                    imenor=M[i][j];
                }
            }
            if (j==3)
            {
                jmenor=M[i][j];
                
                if (M[i][j]>jmaior)
                {
                    jmaior=M[i][j];
                } else if (M[i][j]<jmenor)
                {
                    jmenor=M[i][j];
                }
            }
        }
            printf("Maior número da linha 2: %d. Menor: %d.\n",imaior,imenor);
            printf("Maior número da coluna 4: %d. Menor: %d.\n",jmaior,jmenor);
        
}