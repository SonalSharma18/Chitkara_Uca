#include <stdio.h>

void sort(int* a, int n)
{
    int i, j, ind;
    for(i = 0; i < n - 1; i++)
    {
	ind = i;
	for(j = i + 1; j < n; j++)
	{
	    if(a[j] < a[ind])
		ind = j;
	}
	int t = a[ind];
	a[ind] = a[i];
	a[i] = t;
    }
}

int main()
{
    int arr[] = {9, 2, 5, 6, 1, 3};
    sort(arr, 6);
    int i;
    for(i = 0; i < 6; i++)
	printf("%d ", arr[i]);
    printf("\n");
}
