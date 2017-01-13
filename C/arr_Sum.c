#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[5];
    printf("Enter 5 numbers: ");
    int i;
    for(i = 0; i < 5; i++)
    {
	scanf("%d",&arr[i]);
    }
    int j;
    int max = INT_MIN;
    for(i = 0; i < 5; i++)
    {
	int sum = arr[i];
	if(max < sum)
	    max = sum;
	for(j = i+1; j < 5; j++)
	{
	    sum += arr[j];
	    if(max < sum)
		max = sum;
	}
    }
    printf("%d\n",max);
}
