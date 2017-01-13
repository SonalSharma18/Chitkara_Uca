#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n, k, temp = 0;
	
	scanf("%d %d", &n, &k);
	char str[n+k-1];
	int arr[n + k -1], arr1[n+k-1];
	int i,l = n+k-1;
	scanf("%c", &str[0]);
	for(i = 0; i < l; i++)
	{
		scanf("%c", &str[i]);
		arr[i] = str[i] - 48;
		arr1[i] = 0;
	}
	
	for(i = 0; i < n; i++)
	
	{
		arr1[i + k - 1] = temp ^ arr[i];
		temp = temp ^ arr1[i] ^ arr1[i + k - 1];
		printf("%d ", arr1[i+k-1]);
	}
	return 0;
}			
