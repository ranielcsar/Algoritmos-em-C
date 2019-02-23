/*

   Pilha dinâmica. Pode ter o tamanho que quiser!
   Raniel César (ranoob) - 10/03/2018

   Apenas funções básicas como inserir, remover e exibir;
   
   Revisado: 23 fev. 2019.
   
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void menuPrincipal();

typedef struct pilha {
   int numero;
   struct pilha *next;
} Pilha;

Pilha *alocaMemoria() { return (Pilha*)malloc(sizeof(Pilha)); } // retorna um espaço de memória do tamanho da struct Pilha

// variáveis que podem ser usadas em todo código (globais)
Pilha *inicio = NULL;
Pilha *topo = NULL;
Pilha *aux = NULL;
int contaElementos= 0;

void cria_novoNo()
{
   if (inicio == NULL)
   {
      inicio = alocaMemoria();
      inicio->next = NULL;
      aux = inicio;
      inserir(inicio);
   } else {
      topo = alocaMemoria();
      topo->next = NULL;
      aux->next = topo; // liga o topo com o elemento anterior
      aux = topo; // passa topo para auxiliar para não inserir 'por cima'
      inserir(topo);
   }
   
   contaElementos++;
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
   } else if ((inicio->next == NULL) && (topo == NULL)) {
      free(inicio);
      inicio = NULL;
   } else {
      Pilha *ultimaPos = inicio,
      *penultimaPosicao = NULL;

      while (ultimaPos->next != NULL)
      {
         penultimaPosicao = ultimaPos; // recebe valor anterior ao da última posição
         ultimaPos = ultimaPos->next; // usado para mudar posição
      }

      penultimaPosicao->next = NULL; // ao sair do loop, a penultima posição aponta para null
      free(ultimaPos); // libera a memória
   }
}

void exibe()
{
   Pilha *indice = inicio; // primeiro elemento da pilha

   if (indice == NULL)
   {
      printf("Sua lista não tem elementos a serem mostrados!");
   } else {
      printf("Números > ");

      while (indice != NULL)
      {
         printf("%d ", indice->numero);
         indice = indice->next;
      }
   }
}

main() {
   setlocale(LC_ALL,"");
   menuPrincipal();
}


void menuPrincipal()
{
   Pilha *pilha;
   int opcaoMenu;
   
   do
   {
      printf(" 1 - ADICIONAR NOVO \n");
      printf(" 2 - EXIBIR \n");
      printf(" 3 - REMOVER ELEMENTO DA PILHA \n");
      printf(" 4 - ORDENAR EM ORDEM CRESCENTE \n");
      printf(" 5 - SAIR \n"); scanf("%d", &opcaoMenu);

      printf("\n");

      switch (opcaoMenu)
      {
         case 1:
            cria_novoNo();
            break;
         case 2:
            exibe();
            break;
         case 3:
            remover(pilha);
            break;
         default:
            break;
      }

      if (opcaoMenu != 5)
      {
         printf("\n\n");
         system("pause");
         system("cls");
      }

   } while (opcaoMenu != 5);
}
