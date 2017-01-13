#include <stdio.h>

int partition(int* a, int l, int r)
{
    int j = l;
    int i = j - 1;
    int piv = a[r];
    for(j = l; j < r; j++)
    {
	if(a[j] < piv)
	{
	    i++;
	    int temp = a[i];
	    a[i] = a[j];
	    a[j] = temp;
	}
    }
    i++;
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    return i;
}

void qsort(int* a, int l, int r)
{
    if(l < r)
    {
	int q = partition(a, l, r);
	qsort(a, l, q - 1);
	qsort(a, q + 1, r);
    }
}

int main()
{
    int arr[] = {5, 4, 1, 3, 7, 2};
    qsort(arr, 0, 5);
    int i;
    for(i = 0; i < 6; i++)
	printf("%d ", arr[i]);
    printf("\n");
}
