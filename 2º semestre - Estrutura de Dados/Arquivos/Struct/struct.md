<h1 align = "center">STRUCT</h1>


Tentarei explicar como funciona a **struct** com base no que aprendi na disciplina de Estrutura de Dados.

<p align = "justify">Ao meu ver, a <b>struct</b> funciona como uma caixa que você pode guardar coisas. Por exemplo, imagine que é uma caixa de chokito:</p>

```C
typedef struct {	
    int chokitos;	
} CaixaDeChokito;
```

<p align = "justify">O <b>typedef</b> serve para deixar o tipo definido, pra quando for chamar, não precisar dizer que ele é uma <b>struct</b>, pois já vai estar definido.</p>

<p align = "justify">Quando queremos colocar alguns chokitos, vamos precisar da caixa, certo? Então, faremos:</p>

```C
main() 
{
    CaixaDeChokito caixa;
		
    printf("Digite a quantidade de chokitos que você quer colocar na caixa: ");
    scanf("%d", &caixa.chokitos);
}
```

<p align = "justify">A variável <b>caixa</b> foi criada com o tipo <b>CaixaDeChokito</b> que é nossa <b>struct</b>, logo, essa variável terá tudo que a struct CaixaDeChokito tem. Usaremos ela para acessar o que tem <i>dentro</i> da CaixaDeChokito.</p>

<p align = "justify">E se quiséssemos mostrar a quantidade? Simples, faremos a mesma coisa usando nossa variável <b>caixa</b> como "ponte" para acessar o que tá dentro da struct.</p>

```C
main() 
{
    CaixaDeChokito caixa;
		
    printf("Sua caixa de bombons tem: %d chokitos!", caixa.chokitos); 
}
``` 
