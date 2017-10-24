#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct
{
    int elemento[20];
    int t;
} pilha;

void iniciaPilha (pilha *p)
{
    p-> t=NULL;
}

void preenchePilha (pilha *p, int valor)
{
    p-> elemento[p->t++]= valor;
}

void verificaMaior (pilha *p)
{
    int i;
    int maior=0;

    for (i=0; i<p->t; i++)
    {
        if (p->elemento[i] > maior)
        {
            maior= p->elemento[i];
        }
    }
    printf("Maior elemento da pilha: %d\n", maior);
}

void mostraPilha (pilha *p)
{
	int i;
	
	for (i=p->t-1; i<p->t; i++)
	{
		printf("%d ", p->elemento[i]);
	}   
}


int main()
{
    setlocale(LC_ALL,"");
    int i, x=0;
    pilha pilha[20];
    int random, opcao;
    srand(time(NULL));

    iniciaPilha(&pilha);

    printf("Números gerados aleatoriamente:\n");

    for (i=0; i<20; i++)
    {
        random=rand()%20;
        preenchePilha(&pilha, random);
        mostraPilha(&pilha);
    }
    
    printf("\n\n");
    printf("Verificar maior elemento da pilha?\n");
    printf("1. Sim // 2. Não\n");
    scanf("%d",&opcao);	
	
	if (opcao == 1)
	{
		verificaMaior(&pilha);
	}
	system("pause");
}