/*
   Pilha dinâmica. Pode ter o tamanho que quiser!
   Raniel César (ranoob) - 14/02/2018

   Apenas funções básicas como inserir, remover e exibir. Mais pra frente adicionarei a opção de ordenar
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
      aux= topo; // passa topo para auxiliar para não inserir 'por cima'
      inserir(topo);
   }
}

void inserir(Pilha *pilha)
{
   printf("Entre com o número: ");
   scanf("%d", &pilha->numero);
}

void remover(Pilha *pilha)
{
   if ((pilha->next == NULL) || (inicio == NULL))
   {
      printf("Pilha vazia!");
   } else {
      Pilha *ultimaPos= inicio,
      *penultimaPosicao= NULL;

      while (ultimaPos->next != NULL)
      {
         penultimaPosicao= ultimaPos; //recebe valor anterior ao da última posição
         ultimaPos= ultimaPos->next; //usado para mudar posição
      }

      penultimaPosicao->next= NULL; //ao sair do loop, a penultima posição aponta para null
      free(ultimaPos); //libera a memória
   }
}

void exibe()
{
   Pilha *indice= inicio;

   if (indice == NULL)
   {
      printf("Sua lista não tem elementos a serem mostrados!");
   } else {
      printf("Números > ");

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
