void load()
{
	int i,x;	
		
		for (i=0; i<=10; i++)
		{	
		
			for (x=0; x<12; x++)
			{
				printf("\n");
			}				
			
			if (i==0)
			{
				printf("%*s",42," LOADING ");
			}
			if (i==1)
			{
				printf("%*s",43,"< LOADING >");
			}
			if (i==2)
			{
				printf("%*s",44,"<< LOADING >>");
			}
			if (i==3)
			{
				printf("%*s",45,"<<< LOADING >>>");
			}
			if (i==4)
			{
				printf("%*s",46,"<<<< LOADING >>>>");
			} 
			if (i==5)
			{
				printf("%*s",47,"<<<<< LOADING >>>>>");
			}
			if (i==6)
			{
				printf("%*s",46,"<<<< LOADING >>>>");
			}		
			if (i==7)
			{
				printf("%*s",45,"<<< LOADING >>>");
			}		
			if (i==8)
			{
				printf("%*s",44,"<< LOADING >>");
			}		
			if (i==9)
			{
				printf("%*s",43,"< LOADING >");
			}		
			if (i==10)
			{
				printf("%*s",42," LOADING ");
			}
			
            sleep(0.9);
			system("cls");					
	}		
}

void menuPrincipal()
{
	int i,op;
	
	for (i=0; i<11; i++)
	{
		printf("\n");
	}
	
	printf("%*s",22," ");
	printf("|----------------------------------|\n");
	printf("%*s",22," ");
	printf("|          MENU PRINCIPAL          |\n");
	printf("%*s",22," ");
	printf("|                                  |\n");
	printf("%*s",22," ");
	printf("|          1. Ver ranking          |\n");
	printf("%*s",22," ");
	printf("|          2. Jogar                |\n");
	printf("%*s",22," ");
	printf("|                                  |\n");
	printf("%*s",22," ");
	printf("|                                  |\n");
	printf("%*s",22," ");
	printf("|----------------------------------|\n");
	printf("%*s",22, " ");
	printf("> ");		
}
	
void mostraRank()
{
	FILE *rank;
	char nome[20];
	int der,vit;
	int i=0;	
	rank=fopen("arquivos/rank.txt","r");
	
	printf("%*s",16," ");
	printf("************************************************\n");	
	printf("%*s",16," ");
	printf("****************                ****************\n");	
	printf("%*s",16," ");
	printf("****************     RANKING    ****************\n");
	printf("%*s",16," ");
	printf("****************                ****************\n");
	printf("%*s",16," ");
	printf("************************************************\n\n");
		
	printf("\t\t    Jogador        Vitórias        Derrotas\n\n");
		
	while(fscanf(rank,"%s %d %d\n",nome,&vit,&der)!=EOF)
	{
		if (strlen(nome)<4)
		{
			printf("\t\t    %s\t\t\t%d\t\t%d\n",nome,vit,der);
		} else 
		{
			printf("\t\t    %s\t\t%d\t\t%d\n",nome,vit,der);
		}		
	}	
		
	fclose(rank);
	printf("\n\n");
	system("pause");
	system("cls");	
}

void intro() //Função de introdução
{
	printf("*********************************************************\
			*********************************************************\
			*********************************************************\
			********************               **********************\
			******************** JOGO DA FORCA **********************\
			********************               **********************\
			*********************************************************\
			*********************************************************\
			*********************************************************\n\n");
	system("pause");
	system("cls");
	
	printf("*********************************************************\
			*********************************************************\
			*********************************************************\
			********************               **********************\
			********************     REGRAS    **********************\
			********************               **********************\
			*********************************************************\
			*********************************************************\
			*********************************************************\n\n");
	printf("Você perde quando a quantidade de erros chegar em 6.\n\n");
	printf("Digite letra por letra.\n\n");
	printf("Letra repetida conta como erro!\n\n");
	system("pause");
	system("cls");
}

void menuTemas()
{
	printf("*********************************\n");
	printf("************  TEMAS  ************\n");
	printf("*********************************\n\n");
	printf("Escolha um tema:\n");
	printf("1. Animais\n");
	printf("2. Frutas\n");
}

char* buscaPalavra(FILE* arq) //Função que pega palavra aleatória do arquivo desejado
{
	char nome[20],*nomeCopia[20],palavraRandom[20];
	int i=0,x;
	fopen("arq", "r"); //Abre arquivo

	if (arq==NULL)
	{
		printf("Erro. Arquivo não encontrado!\n");
	}
	else
	{
		while (fgets(nome,sizeof nome,arq)!=NULL)
		{
			nomeCopia[i]=strdup(nome); //Guardar nomes no vetor
			i++;
		}
	}
	
	fclose(arq);
	srand((unsigned)time(NULL));
	x=rand()%i; //Número aleatória para ser usado no índice
	strcpy(palavraRandom,nomeCopia[x]); //Copia um nome, na posição [x] do vetor, para "palavraRandom"
	return(palavraRandom); //Retorna palavra aleatória
}

void boneco(int a) //Função usada para mostrar o "desenho" da forca e do boneco
{
	switch (a)
	{
		case 0:
			printf("   _________________\n");
			printf("  |                 |\n");
			printf("  |                 |\n");
			printf("  |\n");
			printf("  |\n");
			printf("  |\n");
			printf("  |\n");
			printf("  |\n");
			printf("  |\n");
			printf("  |\n");
			printf("__|__\n\n");
			break;
		case 1:
			printf("   _________________\n");
			printf("  |                 |\n");
			printf("  |                 |\n");
			printf("  |               (o.o)\n");
			printf("  |\n");
			printf("  |\n");
			printf("  |\n");
			printf("  |\n");
			printf("  |\n");
			printf("  |\n");
			printf("__|__\n\n");
			break;
		case 2:
			printf("   _________________\n");
			printf("  |                 |\n");
			printf("  |                 |\n");
			printf("  |               (o.o)\n");
			printf("  |                 |\n");
			printf("  |                 |\n");
			printf("  |                 |\n");
			printf("  |\n");
			printf("  |\n");
			printf("  |\n");
			printf("__|__\n\n");
			break;
		case 3:
			printf("   _________________\n");
			printf("  |                 |\n");
			printf("  |                 |\n");
			printf("  |               (o.o)\n");
			printf("  |                /|\n");
			printf("  |               / |\n");
			printf("  |                 |\n");
			printf("  |\n");
			printf("  |\n");
			printf("  |\n");
			printf("__|__\n\n");
			break;
		case 4:
			printf("   _________________\n");
			printf("  |                 |\n");
			printf("  |                 |\n");
			printf("  |               (o.o)\n");
			printf("  |                /|\\\n");
			printf("  |               / | \\\n");
			printf("  |                 |\n");
			printf("  |\n");
			printf("  |\n");
			printf("  |\n");
			printf("__|__\n\n");
			break;
		case 5:
			printf("   _________________\n");
			printf("  |                 |\n");
			printf("  |                 |\n");
			printf("  |               (o.o)\n");
			printf("  |                /|\\\n");
			printf("  |               / | \\\n");
			printf("  |                 |\n");
			printf("  |                / \\\n");
			printf("  |               /   \\\n");
			printf("  |\n");
			printf("__|__\n\n");
			break;
		case 6:
			printf("   _________________\n");
			printf("  |                 |\n");
			printf("  |                 |\n");
			printf("  |               (x.x)\n");
			printf("  |                /|\\\n");
			printf("  |               / | \\\n");
			printf("  |                 |\n");
			printf("  |                / \\\n");
			printf("  |               /   \\\n");
			printf("  |\n");
			printf("__|__\n\n");
			break;
		case 7:
			printf("   _________________\n");
			printf("  |                 |\n");
			printf("  |                 |\n");
			printf("  |               \n");
			printf("  |             \\       /\n");
			printf("  |              \\(^.^)/\n");
			printf("  |                 |\n");
			printf("  |                 | \n");
			printf("  |                 |\n");
			printf("  |                / \\\n");
			printf("__|__             /   \\\n\n");
			break;
		default:
			break;
	}
}

void cred()
{
	printf("###############################\n");
	printf("> Desenvolvido por Raniel César\n");
	printf("###############################\n\n");
	system("pause");
}
