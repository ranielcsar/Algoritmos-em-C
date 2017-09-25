#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

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
				sleep(0.9);
			}
			if (i==1)
			{
				printf("%*s",43,"< LOADING >");
				sleep(0.9);
			}
			if (i==2)
			{
				printf("%*s",44,"<< LOADING >>");
				sleep(0.9);
			}
			if (i==3)
			{
				printf("%*s",45,"<<< LOADING >>>");
				sleep(0.9);
			}
			if (i==4)
			{
				printf("%*s",46,"<<<< LOADING >>>>");
				sleep(0.9);
			} 
			if (i==5)
			{
				printf("%*s",47,"<<<<< LOADING >>>>>");
				sleep(0.9);
			}
			if (i==6)
			{
				printf("%*s",46,"<<<< LOADING >>>>");
				sleep(0.9);
			}		
			if (i==7)
			{
				printf("%*s",45,"<<< LOADING >>>");
				sleep(0.9);
			}		
			if (i==8)
			{
				printf("%*s",44,"<< LOADING >>");
				sleep(0.9);
			}		
			if (i==9)
			{
				printf("%*s",43,"< LOADING >");
				sleep(0.9);
			}		
			if (i==10)
			{
				printf("%*s",42," LOADING ");
				sleep(0.9);
			}					
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

int main()
{
	setlocale(LC_ALL,"");
	char palavra[20],pFinal[20],letra,letraUsada[20];
	char nome[20];
	int vit=0,der=0;
	int numErros,verificaErro,numLetras,contaAcertos,contaLetras,win,verificaLetra=1,letraRep;
	int sair=1,opcaoTemas,opcaoMenu;
	int i; //Contadora
	FILE *arq,*rank;
	rank=fopen("arquivos/rank.txt","a+");
	
	if (rank==NULL)
	{
		printf("Arquivo não encontrado!\n");
	}	
		
	load();
	
	do
	{
		menuPrincipal();
		scanf("%d",&opcaoMenu);
		printf("\n");
		if (opcaoMenu==1)
		{
			mostraRank();
		}
		system("cls");
	} while (opcaoMenu!=2);
	
	intro();		
	
	printf("Digite seu nome: ");	
	scanf("%s",nome);
	fprintf(rank,"%s ",nome); //Guarda nome no rank.txt
	printf("\n\n");				
	
	do
	{
		//Inicia as variáveis e, caso o jogador queira jogar novamente, zera todas
		numErros=0;
		numLetras=0;
		contaAcertos=0;
		contaLetras=0;
		win=0;		
		
		do
		{
			menuTemas();	
			scanf("%d",&opcaoTemas);
					
			if (opcaoTemas>2)
			{
				printf("Opção inválida! Tente novamente >\n\n");			
			}		
		} while (opcaoTemas>2);
		
	
		if (opcaoTemas==1)
		{
			arq=fopen("arquivos/animais.txt","r");
			strcpy(palavra,buscaPalavra(arq));
		}
	
		if (opcaoTemas==2)
		{
			arq=fopen("arquivos/frutas.txt","r");
			strcpy(palavra,buscaPalavra(arq));
		}
		system("cls");
		fflush(stdin); //Limpa memória temporária
		
		/* O fflush(stdin) foi usado pois, quando a variável "palavra" recebe a "palavraRandom" da função buscaPalavra,
			vem com um "\n" no final, o que acaba ocasionando um bug em que a variável "letra" recebe \n e, quando
			o loop verifica as letras, conta como erro. Por isso foi necessário limpar o buffer.*/
		
		numLetras=strlen(palavra)-1; /*Conta o total de letras na palavra (o -1 é pra não contar o \n).
		 							   Mesmo depois da "limpeza" no buffer, o \n ainda é contado*/
		
		//Adiciona espaço em branco nos vetores para evitar caracteres estranhos durante a execução
		for (i=0; i<numLetras; i++)
		{
			pFinal[i]=' ';
			letraUsada[i]=' ';						
		}
		
		printf("\n\n");
		printf("Palavra: ");			
		for (i=0; i<numLetras; i++)
		{
			if (pFinal[i]==' ')
			{
				printf("_ ");
			}
		}
		
		printf("%*s",25-numLetras," "); //Usado para manipular a tabulação do printf abaixo 25 espaços - numéro de letras da pakavra
		printf("Letras usadas: ");
		for (i=0; i<contaLetras; i++)
		{
			printf("%c ",toupper(letraUsada[i]));						
		}			
		printf("\n\n");	
	
		while (win==0)
		{
			printf("\n");		
			printf("Erros: %d\t\t Número de letras da palavra: %d\n\n",numErros,numLetras);
			boneco(numErros);
			printf("Letra: ");						
			
			//Loop usado para ler outra letra, caso a mesma seja igual a alguma já usada			
			do
			{	
				scanf("%c",&letra);
				fflush(stdin);				
				
				verificaLetra=0;
				letraRep=0;																	
				
				//Verifica se a letra já foi usada
				if (contaLetras>0)
				{
					for (i=0; i<contaLetras; i++)
					{
						if (letra==letraUsada[i])
						{
							printf("Esta letra já foi usada! Tente novamente.");
							verificaLetra=1;
							numErros++;
							sleep(2);
							
							if (numErros==6)
							{
								win=1;
							}								
						} 												  
					}
					
					if (letra!=letraUsada[i])
					{
						verificaLetra=0;
					}
				}
									
			} while (verificaLetra!=0);			
			
			//Guarda as letras usadas no vetor e, se for a mesma letra, não guarda
			if (letra!=letraUsada[i])
			{
				for (i=0; i<contaLetras; i++)
				{
					if (letra==letraUsada[i])
					{
						letraRep=1;
					}
				}
				
				if (letraRep!=1)
				{
					for (i=contaLetras; i<contaLetras+1; i++) 
					{
						letraUsada[i]=letra;
					}
				}				
			}			
			letraRep=0;
			
			contaLetras++; //Variável que conta quantas letras foram digitadas				
	
			fflush(stdin);
			verificaErro=0;
	
			for (i=0; i<numLetras; i++)
			{
				if (letra==palavra[i])
				{
					if (letra!=pFinal[i])
					{
						contaAcertos++;
					}
					
					pFinal[i]=letra;
					verificaErro=1;															
				}															
			}			
	
			if (verificaErro==0)
			{
				numErros++;
				if (numErros==6)
				{
					win=1;
				}
			}
	
			if (contaAcertos==numLetras)
			{
				win=2;
			}
			system("cls");
			printf("\n\n");
			
			printf("Palavra: "); //Palavra que será encontrada			
			for (i=0; i<numLetras; i++)
			{
				if (pFinal[i]==' ')
				{
					printf("_ ");
				} else 
				{
					printf("%c ",toupper(pFinal[i]));
				}			
			}
			
			printf("%*s",25-numLetras," ");
			printf("Letras usadas: "); //Mostra as letras que o usuário digitou
			for (i=0; i<contaLetras; i++)
			{
				if (letraUsada[i]==' ')
				{
					printf("- ");
				} else
				{
					printf("%c ",toupper(letraUsada[i]));
				}														
			}					
			printf("\n\n");				
		} 
		printf("\n");		
		
		
		
		if (win==1)
		{
			der++;			
		} else	
		{
			vit++;			
		}	
	
		if (win==1)
		{
			boneco(6);
			printf("Você perdeu, %s :'(\n\n",nome);
			printf("A palavra era: %s\n",palavra);			
		}
		
		if (win==2)
		{
			boneco(7);
			printf("Parabéns, %s! Você ganhou! \\o/\n\n",nome);
			printf("Total de erros: %d\n\n",numErros);					
		}
		
		printf("Deseja jogar novamente?\n");
		printf("1. Sim\n");
		printf("2. Não\n");
		scanf("%d",&sair);
		printf("\n");	
		
	} while (sair==1);
	fprintf(rank,"%d %d\n",vit,der);	
	
	printf("\n");
	printf("OBRIGADO POR JOGAR! VOLTE SEMPRE!\n\n");
	cred();		
}
