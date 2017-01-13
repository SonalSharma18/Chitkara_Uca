#include<stdio.h>
int main()
{
	int arr[5] = {-16, -8, 2, 4, 5};
	int i;
	for(i = 0; i < 5; i++)
	{
		if( arr[i] < 0)
		{
			arr[i] = -arr[i];
		}
		if((arr[i] & (arr[i] - 1)) == 0)
		printf("%d \n", arr[i]);
	}
	return 0;


}			
