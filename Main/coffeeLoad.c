#include <stdio.h>
#include <stdlib.h>

void coffeeLoad() {
	
   int i, j, x=0;
   
   do {
      
      for (i=0; i<2; i++)
      {
         
         for (j=0; j<11; j++)
         {
            printf("\n");
         }
         
   	 if (i==0)
   	 {
   	    printf("                                    (( \n");
   	    printf("                                     )) \n");
   	    printf("                                    |~~| \n");
   	    printf("                                   C|__| \n\n");
   	    printf("                               > CARREGANDO < \n");
   	 } else
   	 {
   	    printf("                                      )) \n");
   	    printf("                                     (( \n");
   	    printf("                                    |~~| \n");
   	    printf("                                   C|__| \n\n");
   	    printf("                               > CARREGANDO < \n");
   	 }
   		
   	sleep(0.9);
	      
        if (x < 10)
      	{
      	   system("cls");
      	}
      }
      
      x++;      
      
   } while (x < 7);	
}

main()
{
   coffeLoad();
}
