#include<stdio.h>
int m, n, l, a[100][100], b[100][100], c[100][100], p, q, t;
void multiply(int [100][100], int [100][100]);
void main()
{
 	 int i,j;
  	printf("enter number of rows of 1");
  	scanf("%d", &m);
  	printf("enter number of columns of 1");
  	scanf("%d", &n);
  	printf("enter values");
  	for(i = 1; i <= m; i++)
   	{
     	for(j = 1; j <= n; j++)
     	scanf("%d", &a[i][j]);
   	}
   	printf("enter number of rows of 2");
  	scanf("%d", &p);
  	printf("enter number of columns of 2");
  	scanf("%d", &q);
   	printf("enter values");
  	for(i = 1; i <= p; i++)
    {
      	 for(j = 1; j <= q; j++)
   		{
     		scanf("%d", &b[i][j]);
   		}
  	}
    if(n == p)
	multiply(a,b);
 	else 
   	printf("not possible");
}

void multiply (int a[100][100], int b[100][100])
{
     int i, j, k;
     for(i = 1; i <= n; i++)
     {
         for(j = 1; j <= m; j++)
         {
            c[i][j] = 0;
            for(k = 1; k <= n; k++)
            {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
         }
     }
     for(i = 1; i <= m; i++)
     {
     	for(j = 1; j <= n; j++)
     	{
     		printf("%d\t", c[i][j]);
  	 	}
	 	printf("\n");
	}
}
