#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese_Brazil");
	char tabela[3][3];
	char p1[30],p2[30]; //players
	char marca;
	int i,j,valida;
	int jogada,linha,coluna,sair=1;	
	
	printf("Digite o nome dos jogadores.\n");
	printf("Jogador 1 > ");
	scanf("%s",p1);
	printf("Jogador 2 > ");
	scanf("%s",p2);
	system("cls");
	
	printf("%s = X\n",p1);
	printf("%s = O\n",p2);
	sleep(3);
	system("cls");

	do
	{	
		jogada=9; //Inicia e reinicia caso o jogador queira jogar novamente
		system("cls");
	
		for (i=0; i<3; i++){
			for (j=0; j<3; j++)
			{
				tabela[i][j]=' ';
			}
		}	
		
		while (jogada>0)
		{
			valida=0; //Variável usada para validar jogada
			
			//Quebra 10 linhas
			for (i=0; i<10; i++)
			{
				printf("\n");
			}
			
			//Tabela
			for(i=0; i<3; i++){
				printf("%*s",37," "); //Digita 37 espaços para centralizar a tabela
				for (j=0; j<3; j++)
				{
					if (tabela[i][j]==' ')
					{
						printf("-");
					}
					else
					{
						printf("%c",tabela[i][j]);
					}
					if (j<2)
					printf("|");				
				}
				printf("\n");
			}
			printf("\n\n\n");	
			
				//Entrada e validação da jogada
				while (valida==0)
				{				
				
					if (jogada%2!=0)
					{
						marca='X';
						printf("Vez de %s. Escolha coluna e linha (1-3): ",p1);
						scanf("%d-%d",&coluna,&linha);
					}
					else
					{
						marca='O';
						printf("Vez de %s. Escolha coluna e linha (1-3): ",p2);
						scanf("%d-%d",&coluna,&linha);
					}
			
					for (i=linha-1; i<linha; i++)
					{
						for (j=coluna-1; j<coluna; j++)
						{
							if (tabela[i][j]==' ')
							{
								tabela[i][j]=marca;
								valida=1;
							} else
							{
								printf("Coordenada já usada! Tente novamente.\n\n");
							}
						}
					}
				}
				system("cls");
				
				//Condições que determinam vencedor	
				if ((tabela[0][0]=='X' && tabela[1][0]=='X' && tabela[2][0]=='X')||
			        (tabela[0][1]=='X' && tabela[1][1]=='X' && tabela[2][1]=='X')||
			        (tabela[0][2]=='X' && tabela[1][2]=='X' && tabela[2][2]=='X')||
			        (tabela[0][0]=='X' && tabela[0][1]=='X' && tabela[0][2]=='X')||
			        (tabela[1][0]=='X' && tabela[1][1]=='X' && tabela[1][2]=='X')||
			        (tabela[2][0]=='X' && tabela[2][1]=='X' && tabela[2][2]=='X')||
			        (tabela[0][0]=='X' && tabela[1][1]=='X' && tabela[2][2]=='X')||
			        (tabela[0][2]=='X' && tabela[1][1]=='X' && tabela[2][0]=='X'))
			{
				printf("Jogador %s venceu!\n\n",p1);
				jogada=-1;
			}
		
			if ((tabela[0][0]=='O' && tabela[1][0]=='O' && tabela[2][0]=='O')||
			        (tabela[0][1]=='O' && tabela[1][1]=='O' && tabela[2][1]=='O')||
			        (tabela[0][2]=='O' && tabela[1][2]=='O' && tabela[2][2]=='O')||
			        (tabela[0][0]=='O' && tabela[0][1]=='O' && tabela[0][2]=='O')||
			        (tabela[1][0]=='O' && tabela[1][1]=='O' && tabela[1][2]=='O')||
			        (tabela[2][0]=='O' && tabela[2][1]=='O' && tabela[2][2]=='O')||
			        (tabela[0][0]=='O' && tabela[1][1]=='O' && tabela[2][2]=='O')||
			        (tabela[0][2]=='O' && tabela[1][1]=='O' && tabela[2][0]=='O'))
			{
				printf("Jogador %s venceu!\n\n",p2);
				jogada=-2;
			}		
			jogada--;
			
			if (jogada==0)
			{
				printf("Deu empate!\n\n");
			}					
		}	
			printf("Deseja jogar novamente?\n");
			printf("1 > Sim\n");
			printf("2 > Não\n");
			scanf("%d",&sair);
			
	} while (sair==1);
	
	system("pause");
}
