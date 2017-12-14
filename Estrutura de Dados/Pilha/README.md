### Pilha

- A pilha tem esse nome porque utilizamos a mesma ideia de vários objetos empilhados.
   - Como por exemplo uma pilha de livros.
   
Ou seja, se você quiser um livro que está na 1ª posição de uma pilha com 10 livros, você precisa retirar todos os outros 9 que estão em cima dele.


Na programação não é diferente. Para se empilhar elementos (seja ele números ou palavras), basta adicionar no fim dela.

No exemplo abaixo tem 5 números. Caso eu queria adicionar mais um, ele terá que ir para o final.

1 | 2 | 3 | 4 | 5 
--- | --- | --- | --- | --- 
    
- Adicionando mais um:
     
1 | 2 | 3 | 4 | 5 | 6
--- | --- | --- | --- | --- | ---

Para chegarmos ao 4º elemento, por exemplo, devemos tirar de um por um até chegar nele:

1 | 2 | 3 | 4 | 5
--- | --- | --- | --- | ---

1 | 2 | 3 | 4 
--- | --- | --- | ---

### Código com exemplo básico de adicionar e remover


- Primeiramente inicia-se uma estrutura (struct) que vai servir como pilha

```C
typedef struct
{
	int topo; // Esta variavel servirá como indíce [i]. Ela que vai ser incrementada ou decrementada.
	int elementos[10]; //Vetor que irá guardar elementos
} pilha;
```

- Após isso iremos iniciar nossa pilha

```C
void criaPilha(pilha *p) //*p será o ponteiro que irá direcionar todas as funções para a struct "pilha"
{
	p->topo= 0; //Inicia a posição em 0
}
```

- Como ainda é uma pilha estática, precisamos sempre verificar se ela já está cheia. No exemplo, o máximo que ela ocupa são 10 espaços, então, será a seguinte condição:

```C
if (p-> topo > 10) 
{
   printf("Pilha cheia! \n);
}
```

- Caso não esteja cheia, você pode adicionar mais elementos

```C
void preenchePilha(pilha *p, dado)
{
    if (p-> topo > 10) 
    {
        printf("Pilha cheia! \n);
    } else
    {
        p->nota[p->topo]= dado; //no momento a variável topo é 0, então, será adicionado o elemento na posição 0.
        p->topo++; //Incrementa índice para mudar a posição. Após isso, você terá uma nova posição para ser preenchida.	
    }
}
```

- Já no momento de remover o elemento, verificamos se a pilha está vazia, caso contrário, decrementamos o topo.

```C
void esvaziaPilha(pilha *p)
{
   if (p-> topo < 0)
   {
      printf("Pilha já vazia! \n");
   } else 
   {
      p-> topo--;
   }
```
