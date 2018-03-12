#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef struct lista {
   int info;
   struct lista *next;
} Lista;

Lista *primeiro= NULL;
Lista *novo= NULL;
Lista *aux= NULL;
int contaElementos= 0;

Lista *alocaMemoria() { return (Lista*) malloc(sizeof (Lista)); }

void criaNovo(int valor)
{
   if (primeiro == NULL)
   {
      primeiro= alocaMemoria();
      primeiro->next= NULL;
      aux= primeiro;
      insere(primeiro, valor);
   } else {
      novo= alocaMemoria();
      novo->next= NULL;
      aux->next= novo;
      aux= novo;
      insere(novo, valor);
   }

   contaElementos++;
}

void insere(Lista *lista, int valor) { lista->info= valor; }

void exibir()
{
   aux= primeiro;

   if (primeiro == NULL)
   {
       printf("Sua lista estÃ¡ vazia!");
   } else {
       printf("Elementos da lista -> ");

       while (aux != NULL)
       {
          printf("%d ", aux->info);
          aux= aux->next;
       }
   }
}

void ordena()
{
   int i= 0, j;
   Lista *indice= primeiro;
   Lista *vetorLista[contaElementos]; // vetor usado para ordenar
   Lista *auxiliar;

   // passa todos os elementos para o vetor
   while (indice != NULL)
   {
      vetorLista[i]= indice;
      indice= indice->next;
      i++;
   }

   // ordena o vetor
   for (i= 0; i < contaElementos; i++) {
      for (j= i+1; j < contaElementos; j++)
      {
         if (vetorLista[i]->info > vetorLista[j]->info)
         {
            auxiliar= vetorLista[i];
            vetorLista[i]= vetorLista[j];
            vetorLista[j]= auxiliar;
         }
      }
   }

   // religa todos os endereços
  for (i= 0; i < contaElementos; i++)
  {
     vetorLista[i]->next= vetorLista[i + 1];

     if (i  == contaElementos - 1) // quando chegar ao último elemento
      vetorLista[i]->next= NULL; // aponta para NULL
  }

  primeiro= vetorLista[0]; // aponta para a primeira posição do vetor que ordena
}


main() {
   setlocale(LC_ALL, "");
   menu();
}


void menu()
{
   int resposta;
   int i;

   do {
      printf(" 1 - ADICIONAR \n");
      printf(" 2 - EXIBIR \n");
      printf(" 3 - ORDENAR \n");
      printf(" 4 - SAIR \n\n");
      printf(" > "); scanf("%d", &resposta);

      printf("\n");

      switch (resposta)
      {
         case 1:
            for (i= 5; i > 0; i--)
               criaNovo(i);

            break;
         case 2:
            exibir();
            break;
         case 3:
            ordena();
            break;
         default:
            break;
      }

      if (resposta != 4)
      {
         printf("\n\n");
         system("pause");
         system("cls");
      }

   } while (resposta != 4);
}
