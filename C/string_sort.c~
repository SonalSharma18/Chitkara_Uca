#include<stdio.h>
#include<string.h>

void main()
{
	  char a[100][100], t[100];
	  int i, j, k, n;
	 scanf("%d", &n);
	 getchar();
	  printf("enter strings"); 
	  for(i = 0; i < n; i++)
		
	  {
		 gets(a[i]);
	  }
	  for(j = 0; j < n-1; j++)
	  {
		   for(k = 0; k < n-1-j; k++)
		    {

		        if(strcmp(a[k], a[k+1]) > 0)
		        {
		          strcpy(t, a[k]);
		          strcpy(a[k], a[k+1]);
		          strcpy(a[k+1], t);
		        }
		    }
		}
		printf("sorted strings \n");
		for(i = 0; i < n; i++)
		 {
	           puts(a[i]);
		 }
}
    
 

     
     
