<h1 align="center"> LISTA </h1>

- Ao contrário de pilha e da fila, a lista não tem um lugar específico para adicionar elemento ou remover. Quem diz isso é o usuário

- Por exemplo, você tem uma lista de supermercado e vai às compras. Você pode seguir a lista na ordem que você colocou, ou simplesmente
ir pegando o que vir na frente e excluindo aquele item da lista.

Em programação não é diferente. Temos 5 elementos, caso o usuário deseja excluir o elemento na posição 3, temos que excluir o terceiro e reorganizar os outros
elementos para que aquele espaço não fique vazio.

1 | 2 | 3 | 4 | 5
--- | --- | --- | --- | ---

Exclui elemento [3]:

1 | 2 | 4 | 5
--- | --- | --- | ---

Reorganiza:

1 | 2 | 3 | 4 
--- | --- | --- | ---

Nesse caso, deletamos o elemento que está na posição [3], depois pegamos os elementos de [4] e [5] e colocamos em [3] e [4]. Diminuindo a lista no final.

### Código exemplo

Criamos a estrutura (struct) para ser usada como lista:

```C
typedef struct
{
    int i;
    int elementos[max];
} Lista;
```

Iniciamos a lista.

```C
void iniciaLista(Lista *lista)
{
    lista-> i = 0;
}
```

Na lista você pode inserir tanto no final quanto em qualquer lugar.

- Inserir no final (sempre verificando se a lista já está cheia)

```C
void inserirNoFinal(Lista *lista)
{
    if (lista->i > max - 1)
    {
        printf("Lista cheia! \n");
    } else {
        printf("Número da matrícula: ");
        scanf("%d", &lista-> elementos[lista-> i]);		
        lista-> i++;
    }	
}
```

- Inserir um novo elemento em qualquer lugar

```C
void inserirNovo(Lista *lista)
{
    int posicao;
    int i;

    printf("Em qual posição deseja adicionar?\n");
    scanf("%d", &posicao);
    printf("\n");

    if (posicao > max - 1)
    {
        printf("Opção inválida!\n");
    } else {    
        lista-> i++; // incrementa para criar uma posição vazia no final

        // usado para deslocar os elementos para frente e abrir espaço para o novo elemento que vai ser inserido
        for (i = max - 1; i > posicao; i--)
        {
            if (lista->i < max - 1)
            {			
               lista[i + 1] = lista[i];
            }			
        }

        printf("Elemento: ");
        scanf("%d", &lista->elemento[posicao - 1]); // posição -1 pois caso a pessoa digite 2, será a posição 1 do vetor (0, 1 [posição 2])		

        printf("\n\n Adicionado!\n");		
    }
}
```
Para excluir algum elemento do final basta decrementar a variável que está sendo usada como índice. [i] nesse caso. Mas, para excluir em outra
posição, devemos jogar o elemento a ser excluido para o final e reorganizar os demais.

```C
void excluirPosicao(Lista *lista)
{

    int remover;
    int i;

    printf("Entre com a posição que deseja remover: ");
    scanf("%d", &remover);

    remover--; // mesma lógica do "posicao - 1"

    // [i] começa na posição de remover e vai até o indice
    for (i = remover; i < lista->indice; i++)
    {		
      	lista-> num[i] = lista-> num[i+1]; // deslocando elemento a ser removido até o final
    }

    lista-> indice--; // decrementa o indice para deletar o elemento

    printf("Posição removida! \n");
}
```
