#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int arr[1000], i, j, n, sum = 0, x, t, a1, a2, b1, b2, min;
	scanf("%d", &n);
	scanf("%d", &x);
	for(i = 1;i <= n; i++)
	{
		scanf("%d", &arr[i]);
	}
	min = arr[n];
	for(i = 1,j = n; i != j; )
	{
		sum = arr[i] + arr[j];
		if((abs(sum - x)) < min)
		min = sum;
			
		if( sum > x)
		j--;
		else 
		if(sum < x)
		i++;
		
		
		
		
	
		
		
	}
	
	printf("%d", min);
	return 0;
}
	
		
