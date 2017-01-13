#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int arr[1000], i, j, n;
	scanf("%d", &n);
	for( i = 0; i < n ; i++)
	{
		scanf("%d", &arr[i]);
	}
	
	for( i = 0; i < n; i++)
	{
		
		 if(arr[abs(arr[i])] < 0)
		{
			printf("%d ",abs(arr[i]));
		}
		
		else
		arr[abs(arr[i])] = -arr[abs(arr[i])];
		
			
}	
	
	return 0;
}		
			
