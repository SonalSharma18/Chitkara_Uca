#include<stdio.h>
void main()
{
	 int a , b ;
	printf("enter numbers ");
	scanf("%d%d",&a,&b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("\n a= %d and b= %d",a , b);
}
