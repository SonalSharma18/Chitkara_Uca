#include<stdio.h>
void main()
{
 	int n, a = 0, b = 1, s, j;
 	printf("enter range");
 	scanf("%d",&n);
 	printf("0\n");
 	printf("1\n");
  	for(j = 1; j <= n-2; j++)
	{
  		s = a+b;
  		a = b;
  		b = s;
 		printf("%d\n", s);
	}
}
 
