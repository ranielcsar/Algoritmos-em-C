<h1 align="center"> FILA </h1>

- Esse nome não é por acaso. Até porque a fila é realmente uma fila (nossa). Sim, o sentido é o mesmo de uma fila de banco, uma fila que você
pega pra pagar as contas (horrível), etc. É uma fila. O primeiro que chegar vai ser o primeiro a sair. E, sempre que aparecer algum novo, vai pro final.


Por exemplo, temos uma fila com 5 pessoas:

1 | 2 | 3 | 4 | 5
--- | --- | --- | --- | ---

Caso a primeira pessoa seja chamada, a fila irá diminuir:

 2 | 3 | 4 | 5
 --- | --- | --- | ---
 
 3 | 4 | 5
 --- | --- | ---
 
 E assim por diante...
 
 Caso chegue alguma pessoa, ela não entrará em qualquer lugar da fila, apenas no final.
 
  3 | 4 | 5 | 6
 --- | --- | --- | ---
 
  3 | 4 | 5 | 6 | 7
 --- | --- | --- | --- | ---
 
 ### Código exemplo
 
 Primeiramente definimos nossa estrutura (struct):
 
 ```C
 #define X 10
 
 typedef struct
{
    int comeco, fim;
    int elementos[X];
} Fila;
```

Após isso, iniciamos.

```C
void iniciaFila(Fila *fila)
{   
    fila-> comeco = 0;
    fila-> fim = -1;
}
```
Na fila, existe uma condição a mais, que é a "falso cheio". (valeu @araujo21x pelo code)

```C
 int auxInicio = fila->inicio, auxFim = fila->fim, i;

 if ((fila->fim == X-1) && (fila->comeco =! 0)) /* caso o fim esteja na ultima posição (X-1 pois o vetor vai de 0 a 9, ou seja, 10 posições)
{                                         e o começo seja diferente de 0 */

     fila-> comeco = 0;
     fila-> fim = -1;
    
     for (i = auxInicio; i <= auxFim; i++) // usado para reorganizar elementos
     {
         fila-> fim++;
         fila-> elementos[fila-> fim] = fila-> elementos[i];
     }
}
```
Para inserir na fila é simples, basta inserir no final sempre. Sempre verificando se já está cheia!

```C
void inserir(Fila *fila)
{
    
   if (fila->fim > X-1) // verifica se está cheia
   {
       printf("Fila cheia! \n");
   } else {
       fila-> fim++;
        
       printf("Entre com o elemento: ");
       scanf("%d", &fila-> elemento[fila->fim]);      
   }
    
       printf("Adicionado!");
}
```
Remover, como sempre, é bem mais simples. Basta incrementar o começo (já que sempre o que tá na frente vai sair primeiro).

```C
void excluir(Fila *fila)
{
    
    if (fila->fim < fila->comeco)
    {
        printf("Fila vazia! \n");
    } else {
        fila-> comeco++;
        
        printf("Excluído! \n");
    }
}
```
