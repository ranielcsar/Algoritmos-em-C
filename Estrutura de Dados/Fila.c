/*
   Atividade de fila
   - Raniel César (ranoob)
   - 01 de Dezembro de 2017
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define MAX 10

typedef struct {
   int fim;
   int comeco;
   int numeros[MAX];   
} Fila;

void iniciaFila(Fila *F) {
   
   F-> fim= -1;
   F-> comeco= 0;
}

void inserir(Fila *F) {
   
   int i;
   int qntElementos;
   
   if (F->fim == MAX-1)
   {
      printf("Fila cheia! \n");
   } else {
      
      printf("Quantos elementos deseja adicionar? \n");
      scanf("%d", &qntElementos);
      
      for (i=0; i<qntElementos; i++)
      {
         F-> fim++;
         F-> numeros[F->fim]= rand()%10;
      }     
   }
   
   printf("\n\nElementos adicionados!");
}

void remover(Fila *F) {
   
   int i;
   int qntElementos;
   
   if (F->fim < F->comeco)
   {
      printf("Fila vazia! \n");
   } else {
      
      printf("Quantos elementos deseja remover? \n");
      scanf("%d", &qntElementos);
      
      for (i=0; i<qntElementos; i++)
      {
         F-> comeco++;
      }      
   }
   
   printf("\n\nElementos removidos!");
}

int primeiroElemento(Fila *F) {
   
   int x;
   
   x= F->numeros[F->comeco];
   
   return x;   
}

void exibir(Fila *F) {
   
   int i;
   
   printf("Elementos da fila > ");
   
   for (i=F->comeco; i<=F->fim; i++)
   {
      printf("%d ", F->numeros[i]);
   }
}


main() {	
	setlocale(LC_ALL,"");
	srand(time(NULL));
   
   menu();	
}

void menu() {
   
   int escolha;
   
   Fila F;	
	
	while (escolha != 6)
   {
   
   
      printf("               ( \n");
      printf("                  ) \n");
      printf("               (            ./\\. \n");
      printf("            |^^^^^^^^^|   ./LLLL\\. \n");
      printf("            |`.'`.`'`'| ./LLLLLLLL\\. \n");
      printf("            |.'`'.'`.'|/LLLL/^^\LLLL\\. \n");
      printf("            |.`.''``./LLLL/^ () ^\LLLL\\. \n");
      printf("            |.'`.`./LLLL/^  =   = ^\LLLL\\. \n");
      printf("            |.`../LLLL/^  _.----._  ^\LLLL\\. \n");
      printf("            |'./LLLL/^      FILA      ^\LLLL\\. \n");
      printf("            |/LLLL/^                    ^\LLLL\\. \n");
      printf("          ./LLLL/^                        ^\LLLL\\. \n");
      printf("        ./LLLL/^                            ^\LLLL\\. \n");
      printf("      ./LLLL/^                                ^\LLLL\\. \n");
      printf("    ./LLLL/^                                    ^\LLLL\\. \n");
      printf("   /LLLL/^                                        ^\LLLL\\ \n");
      printf("   ~~|.~                                            ~.|~~ \n");
      printf("     ||                                              || \n");
      printf("     ||         1 - INSERIR                          || \n");
      printf("     ||         2 - REMOVER                          || \n");
      printf("     ||         3 - PRIMEIRO ELEMENTO DA FILA        || \n");
      printf("     ||         4 - EXIBIR FILA                      || \n");
      printf("     ||         5 - ESVAZIAR                         || \n");
      printf("     ||         6 - SAIR                             || \n");
      printf("     ||                                              || \n");
      printf("     ||                                              || \n");
      printf("     ||                                              || \n");
      printf("     |------------------------------------------------| \n");
     
      
   	printf("Digite sua opção > ");	
   	scanf("%d", &escolha);
      
      	   
      switch (escolha) {
         
         case 1:
            inserir(&F);
            break;
         case 2:
            remover(&F);
            break;
         case 3:
            primeiroElemento(&F);
            break;
         case 4:
            exibir(&F);
            break;
         case 5:
            iniciaFila(&F);
            printf("Fila esvaziada!");
            break;
         default:
            break;
      }
      
      system("pause");
      system("cls");	
   }  
}
