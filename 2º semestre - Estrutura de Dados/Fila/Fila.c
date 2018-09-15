#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define tamanho 9

typedef struct {
    int comeco, fim;
    int matricula[tamanho];
    float notaTrabalho[tamanho], notaProva[tamanho];
    float media[tamanho];
} Fila;

void iniciaFila(Fila *fila)
{  
    fila-> comeco = 0;
    fila-> fim = -1;
}

void inserir(Fila *fila)
{    
   //Falso cheio
   if ((fila->fim == tamanho - 1) && (fila->comeco =! 0))
   {
      fila-> comeco = 0;
      fila-> fim = -1;
   }
    
   if (fila->fim > tamanho - 1)
   {
        printf("Fila cheia! \n");
   } else {
        fila-> fim++;
        
        printf("Entre com a matrícula do aluno: ");
        scanf("%d", &fila->matricula[fila->fim]); 
        
        printf("Entre com a nota do trabalho do aluno: ");
        scanf("%f", &fila->notaTrabalho[fila->fim]);
        
        printf("Entre com a nota da prova do aluno: ");
        scanf("%f", &fila->notaProva[fila->fim]);
    }
    
    printf("Adicionado!");
}

void excluir(Fila *fila)
{    
    if (fila->fim < fila->comeco)
    {
        printf("Fila vazia! \n");
    } else {
        fila->comeco++;
        
        printf("Excluído! \n");
    }
}

void exibir(Fila *fila) 
{    
    int i;
    float media;
    
    for (i = 0; i < fila->fim; i++)
    {
        printf("Matrícula: %d \n", fila->matricula[i]);
        printf("Nota do trabalho: %.1f \n", fila->notaTrabalho[i]);
        printf("Nota da prova: %.1f \n", fila->notaProva[i]);
        
        fila->media[i] = (fila->notaTrabalho[i] + fila->notaProva[i]) / 2;
        
        printf("Média: %.1f \n\n", media);
        
        if (fila->media[i] >= 7)
        {
            printf("> APROVADO < \n\n");
        } else {
            printf("> REPROVADO < \n\n");
        }
    }
}

void maiorMedia(Fila *fila)
{    
    int maior, posicao;
    int i;
    
    maior = fila->media[0];
    
    for (i = 0; i < fila->fim; i++)
    {
        if (fila->media[i] > maior)
        {
            maior = fila->media[i];
            posicao = i;
        }
    }
    
    printf("Matricula com maior média: %d \n", fila->matricula[posicao]);
    printf("Média: %.1f", fila-> media[posicao]);
}

void primeiroElemento(Fila *fila)
{    
    printf("Primeiro elemento da fila > \n\n");
	
    printf("Matrícula: %d \n", fila->matricula[fila->comeco]);
    printf("Nota do trabalho: %.1f \n", fila->notaTrabalho[fila->comeco]);
    printf("Nota da prova: %.1f \n", fila->notaProva[fila->comeco]);
}

main()
{
    setlocale(LC_ALL,"");
    
    Fila fila;
    
    int escolha;
    
    iniciaFila(&fila);
    
    escolha = menu();    
    
   do 
   {        
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
        escolha = menu();
        
    } while (escolha != 0);
}

int menu()
{	
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
