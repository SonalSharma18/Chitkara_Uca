#include<stdio.h>
void main()
{
   int n, i, j, k;
   printf("enter value");
   scanf("%d", &n);
   for(i = 1; i <= n; i++)
   {
       for(j = n; j >= i -1; j--)
       printf(" ");
    
       for(k = 1; k <= 2*i-1; k++)
     {
       printf("*");
     }
     printf("\n");
   }
}  
