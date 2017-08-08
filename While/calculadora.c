/* Escreva um algoritmo que exiba uma mensagem com as opções "1-multiplicar","2-somar"
"3-Subtrair", "4-Dividir", "5-Sair". Leia a opção desejada (1, 2, 3, 4), leia dois valores,
execute a operação escolhida e exiba o resultado. O programa deve ficar repetindo sua
execução, até que seja escolhida a opção sair. */

#include <stdio.h>

int main()
{
    int op,n1,n2,ttl;
    
    do
    {
        printf("Escolha uma das opções abaixo:\n");
        printf("1. Multiplicar\n2. Somar\n3. Subtrair\n4. Dividir\n5. Sair\n");
        scanf("%d",&op);
        
    //Multiplicação
        if (op == 1)
        {
            printf("Entre com o 1º número: ");
            scanf("%d",&n1);
            printf("Entre com o 2º número: ");
            scanf("%d",&n2);
            ttl=n1*n2;
            printf("Resultado: %d",ttl);
            printf("\n\n");
        }
    //Soma
        if (op == 2)
        {
            printf("Entre com o 1º número: ");
            scanf("%d",&n1);
            printf("Entre com o 2º número: ");
            scanf("%d",&n2);
            ttl=n1+n2;
            printf("Resultado: %d",ttl);
            printf("\n\n");
        }
    //Subtração
        if (op == 3)
        {
            printf("Entre com o 1º número: ");
            scanf("%d",&n1);
            printf("Entre com o 2º número: ");
            scanf("%d",&n2);
            ttl=n1-n2;
            printf("Resultado: %d",ttl);
            printf("\n\n");
        }
    //Divisão
        if (op == 4)
        {
            printf("Entre com o 1º número: ");
            scanf("%d",&n1);
            printf("Entre com o 2º número: ");
            scanf("%d",&n2);
            ttl=n1/n2;
            printf("Resultado: %d",ttl);
            printf("\n\n");
        }
        if ((op==0) || (op>5))
        {
            printf("Escolha inválida.");
            printf("\n\n");
        }
        
        
    } while (op != 5);
}



