#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define X 9

typedef struct {
	int comeco, fim;
	int matricula[X];
	float notaTrab[X], notaProva[X];
	float media[X];
} Fila;

void iniciaFila(Fila *f) {	
	f-> comeco= 0;
	f-> fim= -1;
}

void inserir(Fila *f) {
	
   //Falso cheio
   if ((f->fim == X-1) && (f->comeco == f->fim-2))
   {
      f-> comeco= 0;
      f-> fim= -1;
   }
	
   if (f->fim > X-1)
   {
   	printf("Fila cheia! \n");
   } else
   {
		f-> fim++;
		
		printf("Entre com a matrícula do aluno: ");
		scanf("%d", &f->matricula[f->fim]);	
		
		printf("Entre com a nota do trabalho do aluno: ");
		scanf("%f", &f->notaTrab[f->fim]);
		
		printf("Entre com a nota da prova do aluno: ");
		scanf("%f", &f->notaProva[f->fim]);
	}
	
	printf("Adicionado!");
}

void excluir(Fila *f) {
	
	if (f->fim < f->comeco)
	{
		printf("Fila vazia! \n");
	} else
	{
		f->comeco++;
		
		printf("Excluído! \n");
	}
}

void exibir(Fila *f) {
	
	int i;
	float media;
	
	for (i=0; i<f->fim; i++)
	{
		printf("Matrícula: %d \n", f->matricula[i]);
		printf("Nota do trabalho: %.1f \n", f->notaTrab[i]);
		printf("Nota da prova: %.1f \n", f->notaProva[i]);
		
		f-> media[i]= (f->notaTrab[i] + f->notaProva[i])/2;
		
		printf("Média: %.1f \n\n", media);
		
		if (f->media[i] >= 7)
		{
			printf("> APROVADO < \n\n");
		} else
		{
			printf("> REPROVADO < \n\n");
		}
	}
}

void maiorMedia(Fila *f) {
	
	int maior, posicao;
	int i;
	
	maior= f->media[0];
	
	for (i=0; i<f->fim; i++)
	{
		if (f->media[i] > maior)
		{
			maior= f->media[i];
			posicao= i;
		}
	}
	
	printf("Matricula com maior média: %d \n", f->matricula[posicao]);
	printf("Média: %.1f", f-> media[posicao]);
}

void primeiroElemento(Fila *f) {
	
	printf("Primeiro elemento da fila > \n\n");
	printf("Matrícula: %d \n", f->matricula[f->comeco]);
	printf("Nota do trabalho: %.1f \n", f->notaTrab[f->comeco]);
	printf("Nota da prova: %.1f \n", f->notaProva[f->comeco]);
}

main() {
	setlocale(LC_ALL,"");
	
	Fila fila;
	
	int escolha;
	
	iniciaFila(&fila);
	
	escolha= menu();
	
	
   do {
		
		switch (escolha)
		{
			case 1:
				inserir(&fila);
				break;
			case 2:
				excluir(&fila);
				break;
			case 3:
				exibir(&fila);
				break;
			case 4:
				maiorMedia(&fila);
				break;
			case 5:
				primeiroElemento(&fila);
				break;
			default:
				break;
		}
		printf("\n");		
		system("pause");
		system("cls");
		escolha= menu();
		
	} while (escolha != 0);
}

int menu() {
	
	int escolha;
	
   printf("                ( \n");
   printf("                  ) \n");
   printf("                (           ./\\. \n");
   printf("            |^^^^^^^^^|   ./LLLL\\. \n");
   printf("            |`.'`.`'`'| ./LLLLLLLL\\. \n");
   printf("            |.'`'.'`.'|/LLLL/^^\\LLLL\\. \n");
   printf("            |.`.''``./LLLL/^ () ^\\LLLL\\. \n");
   printf("            |.'`.`./LLLL/^  =   = ^\\LLLL\\. \n");
   printf("            |.`../LLLL/^  _.----._  ^\\LLLL\\. \n");
   printf("            |'./LLLL/^      FILA      ^\\LLLL\\. \n");
   printf("            |/LLLL/^                    ^\\LLLL\\. \n");
   printf("          ./LLLL/^                        ^\\LLLL\\. \n");
   printf("        ./LLLL/^                            ^\\LLLL\\. \n");
   printf("      ./LLLL/^                                ^\\LLLL\\. \n");
   printf("    ./LLLL/^                                    ^\\LLLL\\. \n");
   printf("   /LLLL/^                                        ^\\LLLL\\ \n");
   printf("   ~~|.~                                            ~.|~~ \n");
   printf("     ||           0 - SAIR                           || \n");
   printf("     ||           1 - INSERIR NA FILA                || \n");
   printf("     ||           2 - EXCLUIR DA FILA                || \n");
   printf("     ||           3 - EXIBIR FILA                    || \n");
   printf("     ||           4 - MATRICULA COM MAIOR MÉDIA      || \n");
   printf("     ||           5 - PRIMEIRO DA FILA               || \n");   
   printf("     ||                                              || \n");
   printf("     |------------------------------------------------| \n\n");
   
   printf("Digite sua opção > ");
   scanf("%d", &escolha);
   
   return escolha;
}
