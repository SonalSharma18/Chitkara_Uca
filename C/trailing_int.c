#include<stdio.h>
void main()
{
	 int n, c = 0, r;
	printf("enter number");
	scanf("%d", &n);
	while(n != 0)
	{
		r = n%10;
		if(r == 0)
		c++;
		if(r != 0)
		break;
		n = n/10;
	}
	printf("ans is %d \n",c);
}

