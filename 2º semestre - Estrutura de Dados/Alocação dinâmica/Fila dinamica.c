/*

   Fila diânimca.
   Raniel César -> 08/03/2018

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct fila {
   int info;
   struct fila *next;
} Fila;

Fila *alocaMemoria() { return (Fila*) malloc(sizeof(Fila)); }

Fila *inicio= NULL;
Fila *fim= NULL;
Fila *aux= NULL;
int contaElementos= 0;

void insere(int valor)
{
   aux= alocaMemoria();
   aux->info= valor;

   if ((inicio == NULL) && (fim == NULL)) // primeiro elemento
   {
      inicio= aux;
      fim= aux;
   }

   fim->next= aux; // liga o último elemento ao aux, que é o novo espaço
   fim= aux;
   aux->next= NULL; // fim da fila

   contaElementos++;
}

void exibe()
{
   if (inicio == NULL)
   {
      printf("Fila vazia!");
   } else {
      aux= inicio;

      printf("Elementos > ");

      while (aux != NULL)
      {
         printf("%d ", aux->info);
         aux= aux->next;
      }
   }
}

void remover()
{
   if (inicio == NULL)
   {
      printf("Fila vazia!");
   } else {
      aux= inicio; // recebe primeiro elemento
      inicio= inicio->next;

      free(aux);

      printf("Elemento removido!");
   }
}

void esvazia()
{
   aux= inicio;
   Fila *auxiliar;

   while (aux != NULL)
   {
      auxiliar= aux;
      aux= aux->next;
      free(auxiliar);
   }

   inicio= NULL;
   fim= NULL;
}

void valorMedio()
{
   int media;
   int somaValores= 0;
   aux= inicio;

   while (aux != NULL)
   {
      somaValores+= aux->info;
      aux= aux->next;
   }

   media= somaValores/contaElementos;

   printf("Valor medio da fila: %d", media);
}

void valoresPar()
{
   aux= inicio;

   printf("Valores pares da fila -> ");
   while (aux != NULL)
   {
      if (aux->info % 2 == 0)
      {
         printf("%d ", aux->info);
      }

      aux= aux->next;
   }
}

void mostraValor()
{
   int valorUsuario, contador= 0;
   aux= inicio;

   printf("Digite o valor que você quer saber quantas vezes se repetiu: ");
   scanf("%d", &valorUsuario);

   while (aux != NULL)
   {
      if (aux->info == valorUsuario)
      {
         contador++;
      }

      aux= aux->next;
   }
   
   printf("\n");
   printf("O numero digitado apareceu %d vezes!", contador);
}

void filaInvertida()
{
   int contador= 0;
   int i;
   aux= inicio;

   while (aux != NULL)
   {
      contador++;
      aux= aux->next;
   }

   aux= inicio;

   int vetor_paraInverter[contador];

   for (i= contador-1; i >= 0; i--)
   {
      vetor_paraInverter[i]= aux->info;
      aux= aux->next;
   }

   printf("Valores invertidos -> ");

   for (i= 0; i < contador; i++)
      printf("%d ", vetor_paraInverter[i]);
}


main() {
   setlocale(LC_ALL,"");
   menu();
}


void menu()
{
   int resposta, valor;
   int i;

   do
   {
      printf("\n                            FILA                                \n");
      printf(" -------------------------------------------------------------- \n");
      printf(" 1 - ADICIONAR NOVO \n");
      printf(" 2 - EXIBIR \n");
      printf(" 3 - REMOVER ELEMENTO \n");
      printf(" 4 - ESVAZIAR \n");
      printf(" 5 - VALOR MÉDIO \n");
      printf(" 6 - VALORES PARES \n");
      printf(" 7 - MOSTRAR QUANTAS VEZES VALOR APARECE \n");
      printf(" 8 - CRIAR SEGUNDA FILA COM ELEMENTOS INVERTIDOS \n");
      printf(" 9 - SAIR \n");
      scanf("%d", &resposta);

      printf("\n");

      switch (resposta)
      {
         case 1:
            printf("Insira o valor desejado: ");
            scanf("%d", &valor);
            
            insere(valor);
            
            break;
         case 2:
            exibe();
            break;
         case 3:
            remover();
            break;
         case 4:
            esvazia();
            break;
         case 5:
            valorMedio();
            break;
         case 6:
            valoresPar();
            break;
         case 7:
            mostraValor();
            break;
         case 8:
            filaInvertida();
            break;
         default:
            break;
      }

      if (resposta != 9)
      {
         printf("\n\n");
         system("pause");
         system("cls");
      }

   }
   while (resposta != 9);
}
