/*
   Pilha din�mica. Pode ter o tamanho que quiser!
   Raniel C�sar (ranoob) - 14/02/2018

   Apenas fun��es b�sicas como inserir, remover e exibir. Mais pra frente adicionarei a op��o de ordenar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void menuPrincipal();

typedef struct pilha {
   int numero;
   struct pilha *next;
} Pilha;

Pilha *alocaMemoria() { return (Pilha*)malloc(sizeof(Pilha)); }

Pilha *inicio= NULL;
Pilha *topo= NULL;
Pilha *aux= NULL;

void cria_novoNo()
{
   if (inicio == NULL)
   {
      inicio= alocaMemoria();
      inicio->next= NULL;
      aux= inicio;
      inserir(inicio);
   } else {
      topo= alocaMemoria();
      topo->next= NULL;
      aux->next= topo; // liga o topo com o elemento anterior
      aux= topo; // passa topo para auxiliar para n�o inserir 'por cima'
      inserir(topo);
   }
}

void inserir(Pilha *pilha)
{
   printf("Entre com o n�mero: ");
   scanf("%d", &pilha->numero);
}

void remover(Pilha *pilha)
{
   if ((pilha->next == NULL) || (inicio == NULL))
   {
      printf("Pilha vazia!");
   } else if ((inicio->next == NULL) && (topo == NULL)) {
      free(inicio);
      inicio= NULL;
   } else {
      Pilha *ultimaPos= inicio,
      *penultimaPosicao= NULL;

      while (ultimaPos->next != NULL)
      {
         penultimaPosicao= ultimaPos; //recebe valor anterior ao da �ltima posi��o
         ultimaPos= ultimaPos->next; //usado para mudar posi��o
      }

      penultimaPosicao->next= NULL; //ao sair do loop, a penultima posi��o aponta para null
      free(ultimaPos); //libera a mem�ria
   }
}

void exibe()
{
   Pilha *indice= inicio;

   if (indice == NULL)
   {
      printf("Sua lista n�o tem elementos a serem mostrados!");
   } else {
      printf("N�meros > ");

      while (indice != NULL)
      {
         printf("%d ", indice->numero);
         indice= indice->next;
      }
   }
}


main() {
   setlocale(LC_ALL,"");
   menuPrincipal();
}


void menuPrincipal()
{
   Pilha *pi;
   int r;
   int num;

   do
   {
      printf("1 - ADICIONAR NOVO \n");
      printf("2 - EXIBIR \n");
      printf("3 - REMOVER ELEMENTO DA PILHA \n");
      printf("4 - SAIR \n"); scanf("%d", &r);

      printf("\n");

      switch (r)
      {
         case 1:
            cria_novoNo();
            break;
         case 2:
            exibe();
            break;
         case 3:
            remover(pi);
            break;
         default:
            break;
      }

      if (r != 4)
      {
         printf("\n\n");
         system("pause");
         system("cls");
      }

   } while (r != 4);
}
