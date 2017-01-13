#include<stdio.h>
void main()
 {
	   int roll[100] = {0};
	   char name[100][100] = {0}, z[100] = {0};
	   int i, j, k, n, t;
	   printf("enter range");
	   scanf("%d", &n);
	   printf("enter roll");
	   for(i = 0; i < n; i++)
	   {
		 scanf("%d", &roll[i]);
	   }
	   getchar();
	   printf("enter names");
	   for(i = 0; i < n; i++)
		{
		     gets(name[i]);
		}
	    for(j = 0; j < n-1; j++)
		{
		     for(k = 0; k < n-1-j; k++)
		     {
		       	if(roll[k] > roll[k+1])
		        {
		            t = roll[k];
		            roll[k] = roll[k+1];
		            roll[k+1] = t;
		            strcpy(z, name[k]);
		            strcpy(name[k], name[k+1]);
		            strcpy(name[k+1], z);
		        }
		     }
		 }
	     for(i = 0; i < n; i++)
	     {
		      printf("%d %s \n",roll[i],name[i]);
	     }
}
		  
	   
