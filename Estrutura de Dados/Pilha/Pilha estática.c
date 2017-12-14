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
	float nota[M];
} pilha;

void menu();

void criaPilha (pilha *p)
{
	p->topo= NULL;
}

void mostraPilha (pilha *p)
{
	int i;
	int x=p->topo;
	
	if (pilhaVazia(&p)==true)
	{
		printf("Preencha a pilha primeiro!\n\n");
		system("pause");				
	} else 
	{
		for (i=0;i<x;i++)
		{
			printf("%dª nota: %.1f\n", i+1, p->nota[i]);
		}
	}		
	printf("\n\n");
}

int pilhaVazia (pilha *p)
{
	if (p->topo==NULL)
	{
		return true;
	}
}

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


void preenchePilha (pilha *p, float valor)
{
	int i;
		
	for (i=p->topo; i<p->topo+1 ;i++) //Loop usado para adicionar elemento de onde parou e não substituir
	{								 //um elemento já guardado
		if (pilhaCheia(p)==false)
		{
			p->nota[i]= valor;	
		}		
	}
	p->topo++; //Incrementa índice para mudar a posição	
}

void esvaziaPilha (pilha *p)
{
	p->nota[--p->topo];	
}

void localizaNo(pilha *p)
{
	int i;
	float valor;
	
	printf("Digite o valor que queira procurar: ");
	scanf("%f", &valor);
	
	for (i=0; i<p->topo; i++)
	{
		if (valor == p->nota[i])
		{
			printf("Valor encontrado: %.1f\n", p->nota[i]);
			printf("Posição: %d\n", p->topo);
		}
	}
}

void valorDoNo(pilha *p)
{
	int i;
	int posicao;
	
	printf("Entre com a posição do nó que deseja saber o valor: ");
	scanf("%d", &posicao);
	
   printf("Valor encontrado: %.1f \n\n", p->nota[posicao-1]);
}

void mostraTopo(pilha *p)
{
	printf("Valor que está no topo: %.1f \n\n", p->nota[p->topo-1]);
}

void maiorMenor(pilha *p)
{
	float maior, menor;
	int i;
	
	maior= p->nota[0];
	menor= p->nota[0];
	
	for (i=0; i<p->topo; i++)
	{
		if (p->nota[i] > maior)
		{
			maior= p->nota[i];
		}
		
		if (p->nota[i] < menor)
		{
			menor= p->nota[i];
		}
	}
	
	printf("Maior valor: %.1f \n", maior);
	printf("Menor valor: %.1f \n\n", menor);
}

void mostraPares(pilha *p)
{
	int i;
	
	printf("Valores das posições pares da pilha > ");
	for (i=0; i<p->topo; i++)
	{
		if (i % 2 == 0)
		{
			printf("%.1f ", p->nota[i]);
		}
	}
	printf("\n\n");
}

void ordenar(pilha *p)
{
	int i, j;
	float aux;
	
	for (i=0; i<p->topo; i++) {
		for (j=i+1; j<p->topo; j++)
		{
			if (p->nota[i] > p->nota[j])
			{
				aux= p->nota[i];
				p->nota[i]= p->nota[j];
				p->nota[j]= aux;
			}
		}
	}
	
	printf("Notas ordenadas!\n\n");
}

int main()
{
	setlocale(LC_ALL,"");
	pilha p; //váriavél usada para acessar a pilha na função main
	float num;
	int i;
	int opcaoMenu,qntElementos;
	
	criaPilha(&p); /*Como as funções têm parametros de ponteiros, precisamos passar como referência
					ou seja, passando o end. de memória da váriavel. Por isso usa-se o & */
	
	do
	{
		menu();
		scanf("%d", &opcaoMenu);
		printf("\n");	
		
		if (opcaoMenu==0)
		{
			if (pilhaCheia(&p)==true)
			{
				printf("A pilha já está preenchida!\n");
			} else
			{
				printf("Preencha com as notas!\n");
				printf("Quantos elementos deseja adicionar?\n");
				scanf("%d",&qntElementos);
				printf("\n");
				
				for (i=0; i<qntElementos; i++)
				{
					printf("%da nota: ",i+1);
					fflush(stdin);
					scanf("%f", &num);
					preenchePilha(&p,num);	
				}
				printf("\n");
				printf("Pilha preenchida!\n");
			}					
		}
		
		if (opcaoMenu==1)
		{
			if (pilhaVazia(&p)==true)
			{
				printf("Não se pode esvaziar algo que já está vazio!\n");
			} else
			{
				printf("Quantos elementos deseja retirar da pilha? > ");
				scanf("%d",&qntElementos);
				
				for (i=qntElementos; i>0 ;i--)
				{
					esvaziaPilha(&p);
				}
				printf("\nPilha esvaziada!\n");
			}			
		}
		
		if (opcaoMenu==2)
		{
			mostraPilha(&p);
		}
		
		if (opcaoMenu==3)
		{
			localizaNo(&p);
		}		
		
		if (opcaoMenu==4)
		{
			valorDoNo(&p);
		}
		
		if (opcaoMenu==5)
		{
			maiorMenor(&p);
		}	
		
		if (opcaoMenu==6)
		{
			mostraTopo(&p);
		}
		
		if (opcaoMenu==7)
		{
			mostraPares(&p);
		}
		
		if (opcaoMenu==8)
		{
			ordenar(&p);
		}
		
		if (opcaoMenu != 9) 
		{
			system("pause");
			system("cls");
		}	
		
	} while (opcaoMenu != 9);
		
}

void menu()
{
	printf("\n");
	printf(" ||___________________MENU___________________|| \n");
	printf(" ||                                          || \n");
	printf(" || 0 >   Empilhar                           || \n");
	printf(" || 1 >   Desempilhar                        || \n");	
	printf(" || 2 >   Exibir pilha                       || \n");
	printf(" || 3 >   Localizar nó com determinado valor || \n");
	printf(" || 4 >   Mostrar valor de um nó             || \n");
	printf(" || 5 >   Mostrar maior e menor valor        || \n");
	printf(" || 6 >   Mostrar elemento do topo           || \n");
	printf(" || 7 >   Mostrar posições pares             || \n");
	printf(" || 8 >   Ordenar em ordem crescente         || \n");
	printf(" || 9 >   Sair                               || \n");
	printf(" ||__________________________________________|| \n");
	printf("\n > ");	
}
