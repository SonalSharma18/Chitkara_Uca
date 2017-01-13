#include<stdio.h>
#include<stdlib.h>
int power(int x, int n, int d)
{
	if(x ==0)
	return 0;
	
	if(n == 0)
	return 1;
	
	if(n == 1)
	return x%d;
	
	if(!(n%2))
	{
		int res = power(x,n/2,d);
		return (res*res);
	}
	else
	return(x*(power(x,n-1,d)));
}		

int main()
{
	int x,n,d;
	scanf("%d %d %d", &x,&n,&d);
	
	int t = power(x,n,d);
	printf("%d", t);
	return 0;
}	
