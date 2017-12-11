#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define true 0
#define false 1
#define max 5
#include "lista.h" //funções e struct usados aqui

int menu();

main()
{
	setlocale(LC_ALL,"");
	int r;
	
	Lista list;
	Aprovados ap;
	
	iniciaLista(&list, &ap);	
	
	do
	{
		r= menu();
		printf("\n");
		
		switch (r)
		{
			case 0:
				inserirNoFinal(&list);
				break;
			case 1:
				totalDeNos(&list);
				break;
			case 2:
				localizaPorMatricula(&list);
				break;
			case 3:
				mostraValor(&list);
				break;
			case 4:
				excluirPosicao(&list);
				break;
			case 5:
				maiorNota(&list);
				break;
			case 6:
				inserirNovo(&list);
				break;
			case 7:
				ordenaLista(&list);
				break;
			case 8:
				listaAprovados(&ap, &list);
				break;
			case 9:
				mostraAprovados(&ap);				
				break;
			case 10:
				mostraTodos(&list);
				break;
			default:				
				break;												
		}
		
		system("pause");	
		system("cls"); 
		
	} while (r != 11);
}

int menu()
{
	int escolha;		
	
	printf("\n");
	printf(" ||___________________MENU___________________|| \n");
	printf(" ||                                          || \n");
	printf(" || 0 >   Inserir no final da lista          || \n");
	printf(" || 1 >   Determinar nº de nós               || \n");	
	printf(" || 2 >   Localizar por matrícula            || \n");
	printf(" || 3 >   Mostrar valor do nó                || \n");
	printf(" || 4 >   Excluir posição da lista           || \n");
	printf(" || 5 >   Mostrar maior nota                 || \n");
	printf(" || 6 >   Inserir um novo nó                 || \n");
	printf(" || 7 >   Ordenar lista                      || \n");
	printf(" || 8 >   Gerar sublista com aprovados       || \n");
	printf(" || 9 >   Mostrar lista de aprovados         || \n");
	printf(" || 10 >  Mostrar tudo                       || \n");
	printf(" || 11 >  Sair                               || \n");
	printf(" ||__________________________________________|| \n");
	printf("\n > ");
	scanf("%d", &escolha);
	
	return escolha;	
}
