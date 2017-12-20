#include <stdio.h>
#define max 5

typedef struct
{
    int elementoUm;
    char nome[30];
} teste;

void geraNumeros(teste *t)
{
    int i;

    printf("Entre com os nomes > \n\n");
    
    for (i=0; i<max; i++)
    {
        printf("%dº nome: ", i+1);
        scanf("%s", t[i].nome);
        t[i].elementoUm= rand()%10;
    }
    printf("\n\n");
}

void ordena(teste *t)
{
    int i, j;
    teste aux;
    
    for (i=0; i<max; i++) {
        for (j=0; j<max; j++)
        {
            if (t[i].elementoUm < t[j].elementoUm)
            {
                aux= t[i];
                t[i]= t[j];
                t[j]= aux;
            }
        }
    }
    
    printf("*- Elementos ordenados -* \n");
    
    for (i=0; i<max; i++)
    {
        printf("Nome: %s \n", t[i].nome);
        printf("Número: %d \n\n", t[i].elementoUm);
    }
}

main()
{
    srand(time(NULL));
    
    teste T[max];
    
    geraNumeros(T);
    
    ordena(T);
}
