//program to convert the zero bits to one and vice versa.	

#include<stdio.h>
void main()
{
 	int n, i, m, b;
	printf("enter number");
	scanf("%d",& n);
	for(i = 31; i >= 0; i--)
	{
		m = n>>i;
		if(m & 1)
		{
   			b = 0;
		}
		else
		{
			b = 1;
		}

		printf("%d", b);
	}
}
