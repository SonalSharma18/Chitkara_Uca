#include<stdio.h>
void main()
{
	 int n, r, i, count = 0;
	printf("enter the number \n");
	scanf("%d", &n);
	for(i = 31; i >= 0; i--)
	{
		r = n%2;
		n = n/2;
		if(r == 0)
		{
		count = count +1;
		continue;
		}
		else
		break;
	}
	printf("%d",count);
}

