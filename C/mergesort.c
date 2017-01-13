#include <stdio.h>

void merge(int* a, int l, int m, int r)
{
    int x = m + 1 - l;
    int y = r - m;
    int L[x], R[y];
    int i;
    for(i = 0; i < x; i++)
	L[i] = a[l + i];
    for(i = 0; i < y; i++)
	R[i] = a[m + 1 + i];
    i = 0;
    int j = 0, k = l;
    while(i < x && j < y)
    {
	if(L[i] < R[j])
	{
	    a[k++] = L[i++];
	}
	else
	{
	    a[k++] = R[j++];
	}
    }
    while(i < x)
	a[k++] = L[i++];
    while(j < y)
	a[k++] = R[j++];
}

void msort(int* a, int l, int r)
{
    if(l >= r)
	return;
    int m = (l + r) / 2;
    msort(a, l, m);
    msort(a, m + 1, r);
    merge(a, l, m, r);
}

int main()
{
    int arr[] = {5, 1, 4, 9, 7, 2};
    msort(arr, 0, 5);
    int i;
    for(i = 0; i < 5; i++)
	printf("%d ", arr[i]);
    printf("\n");
}
