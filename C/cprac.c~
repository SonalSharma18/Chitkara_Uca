// Program to print a 2D array containing the sum of two different 2D arrays.



#include<stdio.h>
#include<math.h>
int main()
{
  	int a[100][100] = {0}, b[100][100] = {0}, i, j, k, m, n, c[100][100] = {0};
    printf("enter the range");
  	scanf("%d %d",&m,&n);
  	printf("enter the elements of first array");
  	for(i = 0; i < m; i++)
  	{
     	for(j = 0; j < n; j++)
     	{
       		scanf("%d", &a[i][j]);
        }
    }
  	printf("enter the elements of second array");
  
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
     	{
       		scanf("%d", &b[i][j]);
       	}
  	}
  
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
     	{
        	c[i][j]=a[i][j]+b[i][j];
        }
   }
         
   printf("sum is");
   printf("\n");
   for(i = 0; i < m; i++)
   {
       for(j = 0; j < n; j++)
       {
       		printf("%d", c[i][j]);
       		printf(" ");
       
       }
       printf("\n");
   }
}
         
