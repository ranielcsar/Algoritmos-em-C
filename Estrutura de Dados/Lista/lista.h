typedef struct
{
	int i;
	int matricula[max];
	float nota[max];
} Lista;

typedef struct
{
	int a;
	int matricula[max];
	float nota[max];
} Aprovados;

void iniciaLista(Lista *L, Aprovados *ap)
{
	L-> i= 0;
	ap->a= 0;
}

void inserirNoFinal(Lista *L)
{
	if (L->i > max-1)
	{
		printf("Lista cheia! \n");
	} else
	{
		printf("Número da matrícula: ");
		scanf("%d", &L-> matricula[L-> i]);
		printf("Nota: ");
		scanf("%f", &L-> nota[L-> i]);
		L-> i++;
	}	
}

void totalDeNos(Lista *L)
{
	printf("Total de nós da lista: %d\n\n", L->i);
}

void localizaPorMatricula(Lista *L)
{
	int matricula;
	int i;
	
	printf("Digite o número da matrícula: ");
	scanf("%d", &matricula);
	
	for (i=0; i<L-> i; i++)
	{
		if (matricula == L-> matricula[i])
		{
			printf("Nota: %.1f \n", L-> nota[i]);
			printf("Posição na lista: %d \n\n", L-> i);
		}		
	}
	
}

void mostraValor(Lista *L)
{
	int numPosicao;
	
	printf("Entre com o número da posição: ");
	scanf("%d", &numPosicao);
	printf("\n");
	
	printf("Matrícula: %d \n", L-> matricula[numPosicao-1]);
	printf("Nota: %.1f \n", L-> nota[numPosicao-1]);
}

void excluirPosicao(Lista *L)
{
	int auxMatricula, auxNota;
	int remover;
	
	do
	{		
		printf("Entre com a posição que deseja remover: ");
		scanf("%d", &remover);
		
		if (remover > max-1)
		{
			printf("Opção inválida!\n");
		} else
		{
			remover--;
			
			auxMatricula= L-> matricula[remover];
			auxNota= L-> nota[remover];
			
			L-> matricula[remover+1]= L-> matricula[remover];
			L-> nota[remover+1]= L-> nota[remover];
			
			L-> matricula[L->i]= auxMatricula;
			L-> nota[L->i]= auxNota;
			
			L->i--;
		}
		
	} while (remover > max-1);
}

void maiorNota(Lista *L)
{
	int i;
	float maior= 0;
	
	for (i=0; i<L->i; i++)
	{
		if (L-> nota[i] > maior)
		{
			maior= L-> nota[i];
		}
	}
	
	printf("Maior nota: %.1f\n", maior);
}

void inserirNovo(Lista *L)
{
	int posicao;
	int i;
	
	printf("Em qual posição deseja adicionar?\n");
	scanf("%d", &posicao);
	printf("\n");
	
	if (posicao > max-1)
	{
		printf("Opção inválida!\n");
	} else
	{
		L->i++;
		
		for (i=max-1; i>posicao; i--)
		{
			if (L->i < max-1)
			{			
				L[i+1]= L[i];
			}			
		}
		
		printf("- Entre com os dados -\n\n");
		
		printf("Matrícula: ");
		scanf("%d", &L->matricula[posicao-1]);
		printf("Nota: ");
		scanf("%f", &L->nota[posicao-1]);
		
		printf("\n\n Adicionado!\n");		
	}
}

void ordenaLista(Lista *L)
{
	int i, j;
	Lista auxiliar;
	
	for (i=0; i<L->i; i++) {
		for (j=i+1; j<L->i; j++)
		{
			if (L[i].matricula > L[j].matricula)
			{
				auxiliar= L[i];
				L[i]= L[j];
				L[j]= auxiliar;
			}
		}
	}
	
	printf("Lista ordenada!\n\n");
}

void listaAprovados(Aprovados *ap, Lista *L)
{
	int i;
		
	for (i=0; i<L->i; i++)
	{
		if (L->nota >= 7)
		{
			ap= L;
			ap->a++;						
		}
	}	
}

void mostraAprovados(Aprovados *ap)
{
	int i;
	
	printf("- Lista de aprovados - \n\n");
	
	for (i=0; i<ap->a; i++)
	{
		printf("Matrícula: %d\n", ap->matricula[i]);
		printf("Nota: %.1f\n\n", ap->nota[i]);
	}
}

void mostraTodos(Lista *L)
{
	int i;
	
	printf("- Todos os cadastrados - \n\n");
	
	for (i=0; i<L->i; i++)
	{
		printf("Matrícula: %d\n", L->matricula[i]);
		printf("Nota: %.1f\n\n", L->nota[i]);
	}
}
