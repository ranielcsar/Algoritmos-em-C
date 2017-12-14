### Fila

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
void iniciaFila(Fila *f)
{	
    f-> comeco= 0;
    f-> fim= -1;
}
```
Na fila, existe uma condição a mais, que é a "falso cheio". (valeu @araujo21x pelo code)

```C
 int auxInicio=f->inicio, auxFim=f->fim, i;

 if ((f->fim == X-1) && (f->comeco =! 0)) /*Caso o fim esteja na ultima posição (X-1 pois o vetor vai de 0 a 9, ou seja, 10 posições)
{                                         E o começo seja diferente de 0 */

     f-> comeco= 0;
     f-> fim= -1;
    
     for(i=auxInicio; i<=auxFim; i++) //Usado para reorganizar elementos
     {
         f-> fim++;
         f-> elementos[f-> fim] = f-> elementos[i];
     }
}
```
Para inserir na fila é simples, basta inserir no final sempre. Sempre verificando se já está cheia!

```C
void inserir(Fila *f)
{
	
   if (f->fim > X-1) //Verifica se está cheia
   {
       printf("Fila cheia! \n");
   } else
   {
       f-> fim++;
		
       printf("Entre com o elemento: ");
       scanf("%d", &f-> elemento[f->fim]);		
   }
	
       printf("Adicionado!");
}
```
Remover, como sempre, é bem mais simples. Basta incrementar o começo (já que sempre o que tá na frente vai sair primeiro).

```C
void excluir(Fila *f)
{
	
	if (f->fim < f->comeco)
	{
	    printf("Fila vazia! \n");
	} else
	{
	    f->comeco++;
		
	    printf("Excluído! \n");
	}
}
```


- [Fila](https://github.com/ranielcsar/Algoritmos-em-C/blob/master/Estrutura%20de%20Dados/Fila/Fila.c "Código fonte")
