#include<stdio.h>
void main()
{
  int  n,p,q,i,j,k,t,a,b,l=2;
  int c[100][100] = {0};
  printf("enter value");
  scanf("%d", &n);
  p = 2*n-1;
  q = 2*n-1;
   
  for(i = 1; i <= p; i++)
  {
       for(j = 1;j <= q;j++)
         {
           if(i == 1)
           c[i][j] = n;
            if(i > 1 && i <= p && j == 1 || j == q)
            c[i][j] = n;
            if(i == p)
            c[i][j] = n;
           
        }
  }
  

    for(i = 1 ;i <= p; i++)
    {
    	for(j = 1; j <= q; j++)
    	{
     		printf("%d\t", c[i][j]);
   		}
		printf("\n");
	}

}
  
