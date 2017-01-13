#include<stdio.h>

int main()
{
	int arr[3] = {5, 4,3};
	int arr1[3] = {1}, arr2[3] ={1, 1, 1}, f = 1, p = 1,i;
	for(i = 1; i < 3; i++)
	{
	    f = f * arr[i-1];
		arr1[i] = f;
	}
	
	for(i = 1; i >= 0; i--)
	{
		p = p * arr[i+1];
		arr2[i] = p;
	}
	for( i = 0; i < 3; i++)
	{
		printf("%d \n", (arr1[i] * arr2[i]));
	}
	
	return 0;
}			
