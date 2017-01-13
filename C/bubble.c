#include<stdio.h>
#include<stdbool.h>

void bubble_sort(int*arr,int size)
{
	int i,j;
	bool is_sorted=true;
	for(i=0;i<size-1;i++)
	{
		is_sorted=true;
		for(j=0;j<size-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				is_sorted=false;
				// Swapping the two numbers
				int temp=arr[j+1];
				arr[j+1]=arr[j];		
				arr[j]=temp;
			}
		}
		// break if the array is already sorted
		if(is_sorted==true)
			break;
	}
}

int main()
{
	int size;
	printf("Enter size of array: ");
	scanf("%d",&size);
	int i;
	int arr[size];
	printf("Enter elements of array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,size);
	printf("Sorted array:\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
