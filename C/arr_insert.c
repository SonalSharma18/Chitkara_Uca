#include<stdio.h>
void main()
{
 	int n,a[100],p,k,i;
 	printf("enter position");
 	scanf("%d",&n);
 	printf("printf enter value");
 	scanf("%d",&p);
 	printf("enter limit");
 	scanf("%d",&k);
 	for(i=0;i<k;i++)
 	{
 		scanf("%d",&a[i]);
 	}
 	k=k+1;
 	for(i=k;i>n;i--)
	{
		a[i]=a[i-1];

 	}
	a[i]=p;
	for(i=0;i<k;i++)
 	{
 		printf("%d\n",a[i]);
 	}
}
