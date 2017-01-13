#include<stdio.h>
void main()
{
	 int a[100][100] = {0}, t;
	 int i, m, n, j, k, l, x, y, z;
	 printf("enter rows");
	 scanf("%d", &m);
	 printf("enter columns");
	 scanf("%d", &n);
	 printf("enter values");
	  for(i = 0; i < m; i++)
	  {
		   for(j = 0; j < n; j++)
		   {
		    	scanf("%d", &a[i][j]);
		   }
	  }
	  for(i = 0; i < m-1; i++)
	  {
		   for(j = 0; j <n-1-m; j++)
		    
		     
		       {
		         if(a[i][j] > a[i][j+1])
		           {
				        t = a[i][j];
				        a[i][j] = a[i][j+1];
				        a[i][j+1] = t;
		           }
		       }
	  }
		
	for(x = 0; x < m; x++)
	{
		for(y = 0; y < n; y++)
		 {
		     printf("%d ", a[x][y]);
		  
		 }
		 printf("\n");

	 }
}

