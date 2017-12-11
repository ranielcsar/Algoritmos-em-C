#include <stdio.h>
#include <stdlib.h>

main()
{
	int i, voltas= 0;
	
	do
	{
		for (i=0; i<4; i++)
		{
			if (i == 0)
			{
				printf("\t\t\t   \\O_ \n");
				printf("\t\t\t,/\\/ \n");
				printf("\t\t\t  / \n");
				printf("\t\t\t  \\ \n");
				printf("\t\t\t  ` \n");
				sleep(0.9);
			}
			
			if (i == 1)
			{
				printf("\t\t    , \n");
				printf("\t\t   / \n");
				printf("\t\t`\\_\\ \n");
				printf("\t\t    \\ \n");
				printf("\t\t   /O\\ \n");
				sleep(0.9);
			}
			
			if (i == 2)
			{
				printf("\n\n");
				printf("\t   , \n");
				printf("\tO/ / \n");
				printf("\t/\\|/\\. \n");
				sleep(0.9);
			}
			
			if (i == 3)
			{
				printf("_O/ \n");
				printf("  \\ \n");
				printf("  /\\_  \n");
				printf("  \\  ` \n");
				printf("  ` \n");
				sleep(0.9);	
			}
			
			if (voltas < 19)
			{
				system("cls");
			}
								
			voltas++;
		}				
	} while (voltas < 20);
	system("pause");
}
