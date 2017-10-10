#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main()
{
	setlocale(LC_ALL,"");
	int i;
	int senha[7];
	char senhaChar[7];
	
	srand(time(NULL));
	
	for (i=0;i<12;i+=2)
	{
		senha[i]=rand()%10; //Gera número aleatório de 0 a 9
		senhaChar[i]=senha[i]+'0'; //Converte int em char		
		senhaChar[i-1]='a'+rand()%26; //Gera letra aleatória		
	}
	printf("\n\n");
	printf("Senha gerada > ");
	
	for (i=0;i<6;i++)
	{
		printf("%c",senhaChar[i]);
	}
	printf("\n\n");
	system("pause");		
}
