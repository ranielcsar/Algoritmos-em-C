/* Pilha estática > tipo de pilha que já tem um tamanho definido. Nesse caso, 5.
Coloquei pouco espaço pelo fato de que seria só para entender o funcionamento da pilha.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define true 0
#define false 1
#define M 5

//Estrutura que vai ser usada como pilha
typedef struct
{
	int topo;
	char letras[M];
}pilha;

//Cria pilha com a primeira posição do topo, que vai ser usada como índice, vazia
void criaPilha (pilha *p) //"pilha" é o nome da estrutura e "p" é o ponteiro que aponta para ela
{
	p->topo=NULL;	//A seta "->" aponta para qual parte da estrutura será usada
}

int menu()
{
	printf("Entre com uma opção.\n\n");
	printf("1 > Preencher pilha\n");
	printf("2 > Mostrar elementos da pilha\n");
	printf("3 > Verificar pilha\n");
	printf("4 > Esvaziar pilha\n");
	printf("5 > Sair\n\n");
	printf("> ");	
}

void mostraPilha (pilha *p)
{
	int i;
	int x=p->topo;
	
	for (i=0;i<x;i++)
	{
		printf("%c ",p->letras[i]);
	}	
	printf("\n\n");
}

//Verifica se a pilha não tem nenhum elemento. Caso o valor do "topo" seja vazio, a pilha está vazia
int pilhaVazia (pilha *p)
{
	if (p->topo==NULL)
	{
		return true;
	}
}

//Como é uma pilha estática, temos que verificar se já chegou ao máximo da sua capacidade para evitar sobrecarregamento
//de memória. Um transbordamento > "overflow"
int pilhaCheia (pilha *p)
{
	if (p->topo==M)
	{
		return true;
	} else
	{
		return false;
	}	 
}

//Preenche a pilha caso ela não esteja cheia
void preenchePilha (pilha *p, char a[])
{
	int i;
		
	for (i=p->topo; i<p->topo+1 ;i++) //Loop usado para adicionar elemento de onde parou e não substituir
	{								 //um elemento já guardado
		if (pilhaCheia(p)==false)
		{
			p->letras[i]=a;	
		}		
	}
	p->topo++; //Incrementa índice para mudar a posição	
}

//Esvazia a pilha diminuindo o valor de "topo"
void esvaziaPilha (pilha *p)
{
	p->letras[--p->topo];	
}

void verificaPilha (pilha *p)
{
	if (pilhaCheia(p)==true)
	{
		printf("Pilha já está cheia!\n");
	} else if (p->topo > 0) 
	{
		printf("Sua pilha não está cheia. Faltam %d espaços para completar.\n",p->topo-1);
	} else	
	{
		printf("A pilha está totalmente vazia!\n");
	}
}

int main()
{
	setlocale(LC_ALL,"");
	pilha p[M]; //váriavél usada para acessar a pilha na função main
	char letra[M];
	int i;
	int opcaoMenu,qntElementos;
	
	criaPilha(&p); /*Como as funções têm parametros de ponteiros, precisamos passar como referência
					ou seja, passando o end. de memória da váriavel. Por isso usa-se o & */
	
	do
	{
		menu();
		scanf("%d",&opcaoMenu);
		printf("\n");	
		
		if (opcaoMenu==1)
		{
			if (pilhaCheia(&p)==true)
			{
				printf("A pilha já está preenchida!\n");
				system("pause");
			} else
			{
				printf("Preencha apenas com letras!\n");
				printf("Quantos elementos deseja adicionar?\n");
				scanf("%d",&qntElementos);
				
				for (i=0; i<qntElementos; i++)
				{
					printf("%da letra: ",i+1);
					fflush(stdin);
					scanf("%c",&letra[i]);
					preenchePilha(&p,letra[i]);	
				}
				printf("\n");
				printf("Pilha preenchida!\n");
				system("pause");	
			}					
		}
		
		if (opcaoMenu==2)
		{
			if (pilhaVazia(&p)==true)
			{
				printf("Preencha a pilha primeiro!\n\n");
				system("pause");				
			} else
			{
				mostraPilha(&p);
				system("pause");
			}
		}
		
		if (opcaoMenu==3)
		{
			verificaPilha(&p);
			system("pause");
		}
		
		if (opcaoMenu==4)
		{
			if (pilhaVazia(p)==true)
			{
				printf("Não se pode esvaziar algo que já está vazio!\n");
				system("pause");
			} else
			{
				printf("Quantos elementos deseja retirar da pilha? > ");
				scanf("%d",&qntElementos);
				
				for (i=qntElementos; i>0 ;i--)
				{
					esvaziaPilha(&p);
				}
				printf("\nPilha esvaziada!\n");
				system("pause");
			}			
		}
		system("cls");
	} while (opcaoMenu!=5);
		
}
