#include<stdio.h>
#include<stdlib.h>
int sqrt1(int n)
{
	int i, l = 0, r = n/2, m, flag = 0; 
	while(l <= r)
	{
		m = (l+r)/2;
		if(m*m <= n)
		{
			flag = m;
			l = m + 1;
		}
		else
		r = m - 1;
	}
	
	return flag;
}			
int main()
{
	int n;
	scanf("%d", &n);
	int t = sqrt1(n);
	printf("%d", t);
	return 0;
}	
