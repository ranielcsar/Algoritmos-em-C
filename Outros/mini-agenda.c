#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define tamanho 2

typedef struct
{
    char nome[30];
    char email[30];
} ID;

typedef struct
{
    char rua[30], bairro[30],
    cidade[30], cep[30], 
    estado[20], pais[30], complemento[30];
    int numero;   
} Endereco;

typedef struct
{
    char numeroTelefone[30];
} Telefone;

typedef struct
{
    char dia[2], mes[15], ano[4];
} Aniversario;

typedef struct
{
    ID id;
    Endereco local;
    Telefone tel;
    Aniversario anirvs;
    char obs[60];
} Agenda;

void busca_porNome(Agenda *agenda)
{
    int i;
    char nome[30];
    
    printf("Entre com o nome que deseja procurar: ");
    scanf(" %[^\n]s", nome);
    
    for (i=0; i<tamanho; i++)
    {
        if (strcmp (agenda[i].id.nome, nome) == 0)
        {
            printf("\n\n <---------------------- %s ----------------------> \n\n", agenda[i].id.nome);
            
            printf(" ------ ENDEREÇO ------ \n\n");
            
            printf(" Rua: %s \n", agenda[i].local.rua);
            printf(" Número: %d \n", agenda[i].local.numero);
            printf(" Complemento: %s \n", agenda[i].local.complemento);
            printf(" Bairro: %s \n", agenda[i].local.bairro);
            printf(" Cidade: %s \n", agenda[i].local.cidade);
            printf(" CEP: %s \n", agenda[i].local.cep);
            printf(" Estado: %s \n", agenda[i].local.estado);
            printf(" País: %s \n\n", agenda[i].local.pais);
            
            printf(" ------ CONTATO ------ \n\n");
            
            printf(" Telefone: %s \n", agenda[i].tel.numeroTelefone);
            printf(" Email: %s \n\n", agenda[i].id.email);
        }
    }
}

void preencheAgenda(Agenda *agenda)
{
    int i;
    
    printf("------ ENTRE COM OS DADOS ------ \n\n");
    
    for (i=0; i<tamanho; i++)
    {
        printf("Nome: ");
        scanf(" %[^\n]s", agenda[i].id.nome);
        printf("Email: ");
        scanf(" %[^\n]s", agenda[i].id.email);
        printf("Telefone (DDD) 12345-6789: ");
        scanf(" %[^\n]s", agenda[i].tel.numeroTelefone);
        printf("Rua: ");
        scanf(" %[^\n]s", agenda[i].local.rua);
        printf("Bairro: ");
        scanf(" %[^\n]s", agenda[i].local.bairro);
        printf("Cidade: ");
        scanf(" %[^\n]s", agenda[i].local.cidade);
        printf("CEP: ");
        scanf(" %[^\n]s", agenda[i].local.cep);
        printf("Estado: ");
        scanf(" %[^\n]s", agenda[i].local.estado);
        printf("País: ");
        scanf(" %[^\n]s", agenda[i].local.pais);
        printf("Complemento: ");
        scanf(" %[^\n]s", agenda[i].local.complemento);
        printf("Número do(a) %s: ", agenda[i].local.complemento);
        scanf("%d", &agenda[i].local.numero);
        printf("\n\n");
    }
}

void exibeContatos(Agenda *agenda)
{
    int i;
    
    for (i=0; i<tamanho; i++)
    {
        
        printf("\n\n <---------------------- %s ----------------------> \n\n", agenda[i].id.nome);

        printf(" ------ ENDEREÇO ------ \n\n");

        printf(" Rua: %s \n", agenda[i].local.rua);
        printf(" Número: %d \n", agenda[i].local.numero);
        printf(" Complemento: %s \n", agenda[i].local.complemento);
        printf(" Bairro: %s \n", agenda[i].local.bairro);
        printf(" Cidade: %s \n", agenda[i].local.cidade);
        printf(" CEP: %s \n", agenda[i].local.cep);
        printf(" Estado: %s \n", agenda[i].local.estado);
        printf(" País: %s \n\n", agenda[i].local.pais);

        printf(" ------ CONTATO ------ \n\n");

        printf(" Telefone: %s \n", agenda[i].tel.numeroTelefone);
        printf(" Email: %s \n", agenda[i].id.email);
    }
}

void ordemAlfabetica(Agenda *agenda)
{
    int i, j;
    Agenda aux;
    
	for (i=0; i<tamanho; i++) {
    	for (j=i; j<tamanho; j++)
    	{
    		if (strcmp (agenda[i].id.nome, agenda[j].id.nome) > 0)
    		{
    			aux= agenda[i];
    			agenda[i]= agenda[j];
    			agenda[j]= aux;
    		}
    	}
    }
    
    printf("Agenda ordenada! \n\n");
}

main()
{
    setlocale(LC_ALL,"");
    
    Agenda agenda[tamanho];
    
    int opcao;
    
    
    do {
        
        printf("1 - PREENCHER AGENDA \n");
        printf("2 - BUSCAR CONTATO POR NOME \n");
        printf("3 - EXIBIR CONTATOS \n");
        printf("4 - DEIXAR EM ORDEM ALFABÉTICA \n");
        printf("5 - SAIR \n\n");
        printf("> ");
        scanf("%d", &opcao);
        
        printf("\n\n");
        
        switch (opcao)
        {
            case 1:
                preencheAgenda(agenda);
                break;
            case 2:
                busca_porNome(agenda);
                break;
            case 3:
                exibeContatos(agenda);
                break;
            case 4:
                ordemAlfabetica(agenda);
                break;
            default:
                break;
        }
        
        if (opcao != 5)
        {
            system("pause");
            system("cls");
        }
        
    } while (opcao != 5);
}
