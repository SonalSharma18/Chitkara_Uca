#include<stdio.h>
void main()
{
	int n,x,i,c=0;
	printf("enter number");
	scanf("%d",&n);
	for(i = 0;i < 32; i++)
	{
 		x = n>>i;
		if(x&1)
		{
			c++;
		}
	}
	if(c < 2)
	printf("number is power of 2");
	else 
	printf("number is not power of 2");
}
