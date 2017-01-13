#include <stdio.h>

void qsort(int* a, int l, int r)
{
    if(l >= r)
	return;
    int last = l;
    int i;
    for(i = l + 1; i <= r; i++)
    {
	if(a[i] < a[l])
	{
	    last++;
	    int temp = a[last];
	    a[last] = a[i];
	    a[i] = temp;
	}
    }
    int temp = a[l];
    a[l] = a[last];
    a[last] = temp;

    qsort(a, l, last - 1);
    qsort(a, last + 1, r);
}

int main()
{
    int arr[] = {5, 3, 2, 1, 4};
    qsort(arr, 0, 4);
    int i;
    for(i = 0; i < 5; i++)
	printf("%d ", arr[i]);
    printf("\n");
}
