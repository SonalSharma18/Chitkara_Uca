#include<stdio.h>
#include<math.h>
void main()
{
 	int n,i,j,k;
 	printf("enter no of bits");
 	scanf("%d",&n);
 	for(i = 0;i < pow(2,n); i++)
   	{
     	for(j = n-1; j >= 0; j--)
       	{
	 		k = i >> j;
         	printf("%d", k&1);
       	}
	printf("\n");
    }
}	
