#include<stdio.h>
void main()
{
	 int a[10], i, sum = 0, j;
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for(j = 0;j < 10; j++)
	{
	     sum = sum + a[j];
	}
	printf("%d\n",sum);
}
