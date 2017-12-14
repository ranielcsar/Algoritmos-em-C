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
 typedef struct
{
	  int comeco, fim;
	  int elementos[10];
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
