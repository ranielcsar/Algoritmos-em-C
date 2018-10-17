/*

   Lista din�mica. Ainda faltam as fun��es de inserir ordenado,
   excluir elemento no meio da lista e etc.
   
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct lista {
   float salario;
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

void insere(Lista *lista, float valor) { lista->salario= valor; }

void exibir()
{
   aux= primeiro;

   if (primeiro == NULL)
   {
       printf("Sua lista est� vazia!");
   } else {
       printf("Elementos da lista -> ");

       while (aux != NULL)
       {
          printf("%.2f ", aux->salario);
          aux= aux->next;
       }
   }
}

void conta_elementoMaior(float valorUsuario)
{
   int contador= 0;
   aux= primeiro;

   while (aux != NULL)
   {
      if (aux->salario > valorUsuario)
      {
         contador++;
      }

      aux= aux->next;
   }

   printf("Quantidade de valores maior que %.2f -> %d", valorUsuario, contador);
}

void remover()
{
   if (primeiro == NULL)
   {
      printf("Lista vazia!");
   } else if ((primeiro->next == NULL) && (novo == NULL)) {
      free(primeiro);
      primeiro= NULL;
   } else {
      Lista *ultimaPos= primeiro,
      *penultimaPosicao= NULL;\

      while (ultimaPos->next != NULL)
      {
         penultimaPosicao= ultimaPos;
         ultimaPos= ultimaPos->next;
      }

      penultimaPosicao->next= NULL;
      free(ultimaPos);
   }
}

void enderecoMemoria(float salario)
{
   aux= primeiro;

   while (aux != NULL)
   {
      if (aux->salario == salario)
      {
         printf("Endere�o de mem�ria do sal�rio %.2f �: %d", salario, &aux->salario);
      }

      aux= aux->next;
   }
}

void vezes_queAparece(float salario)
{
   int contador= 0;
   aux= primeiro;

   while (aux != NULL)
   {
      if (aux->salario == salario)
      {
         contador++;
      }

      aux= aux->next;
   }

   printf("Sal�rio aparece %d vezes!", contador);
}

void ordenar()
{
    float vetorOrdem[contaElementos];
    int i, j;
    float auxiliar;

    aux= primeiro;

    for (i= 0; i < contaElementos; i++)
    {
        vetorOrdem[i]= aux->salario;
        aux= aux->next;
    }


    for (i= 0; i < contaElementos; i++) {
        for (j= i+1; j < contaElementos; j++)
        {
            if (vetorOrdem[i] < vetorOrdem[j])
            {
                auxiliar= vetorOrdem[i];
                vetorOrdem[i]= vetorOrdem[j];
                vetorOrdem[j]= auxiliar;
            }
        }
    }

    i= 0;
    aux= primeiro;

    while (aux != NULL)
    {
        aux->salario= vetorOrdem[i];
        aux= aux->next;
        i++;
    }
}

void esvazia()
{
    if (primeiro == NULL)
    {
        printf("Voc� n�o tem elementos para esvaziar!");
    } else {
       aux= primeiro;
       Lista *auxiliar;

       while (aux != NULL)
       {
          auxiliar= aux;
          aux= aux->next;
          free(auxiliar);
       }

       primeiro= NULL;
       novo= NULL;

       printf("Lista esvaziada com sucesso!");
    }
}

void maiorMenor()
{
   aux= primeiro;
   int atribui= 0;
   float maior, menor;

   while (aux != NULL)
   {
      if (atribui == 0)
      {
         maior= aux->salario;
         menor= aux->salario;
         atribui= 1;
      }

      if (menor > aux->salario)
        menor= aux->salario;

      if (aux->salario > maior)
        maior= aux->salario;

      aux= aux->next;
   }

   printf("Maior valor -> %d \n", maior);
   printf("Menor valor -> %d", menor);
}



main() {
   setlocale(LC_ALL,"");
   menuPrincipal();
}


void menuPrincipal()
{
   Lista *lista;
   int resposta;
   float valorUsuario;

   do
   {

      printf("\n                           LISTA                            \n");
      printf("|------------------------------------------------------------| \n");
      printf("| 1 - INSERIR                                                | \n");
      printf("| 2 - EXIBIR LISTA                                           | \n");
      printf("| 3 - CONTAR VALORES MAIORES QUE K                           | \n");
      printf("| 4 - REMOVER ELEMENTO                                       | \n");
      printf("| 5 - ENDERE�O DE MEM�RIA DE DETERMINADO SAL�RIO             | \n");
      printf("| 6 - CONTAR QUANTAS VEZES SAL�RIO APARECE                   | \n");
      printf("| 7 - ORDENAR EM ORDEM DECRESCENTE                           | \n");
      printf("| 8 - ESVAZIAR LISTA                                         | \n");
      printf("| 9 - MAIOR E MENOR SAL�RIO                                  | \n");
      printf("| 10- SAIR                                                   | \n");
      printf("|------------------------------------------------------------| \n");
      printf(" -> "); scanf("%d", &resposta);

      printf("\n");
     // system("cls");

      printf("\n                           LISTA                            \n");
      printf("|------------------------------------------------------------| \n\n");

      switch (resposta)
      {
         case 1:
          printf("Digite o valor > ");
          scanf("%f", &valorUsuario);
          
            criaNovo(valorUsuario);
            break;
         case 2:
            exibir();
            break;
          case 3:
            printf("Digite o valor para saber quantos, na lista, � maior que ele -> ");
            scanf("%f", &valorUsuario);

            conta_elementoMaior(valorUsuario);
            break;
         case 4:
            remover(lista);
            break;
         case 5:
            printf("Entre com o valor do sal�rio para saber seu endere�o de mem�ria -> ");
            scanf("%f", &valorUsuario);
            printf("\n");

            enderecoMemoria(valorUsuario);
            break;
         case 6:
            printf("Entre com o valor do sal�rio para saber quantas vezes ele aparece -> ");
            scanf("%f", &valorUsuario);

            vezes_queAparece(valorUsuario);
            break;
         case 7:
            ordenar();
            break;
         case 8:
            esvazia();
            break;
         case 9:
            maiorMenor();
            break;
         default:
            break;
      }

         printf("\n\n");
        system("pause");
        system("cls");

   } while (resposta != 10);
}
