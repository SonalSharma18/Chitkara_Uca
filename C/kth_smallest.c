#include <stdio.h>
#include <math.h>

int getPivot(int l, int r)
{
    int ran = rand() % (r - l + 1);
    return l + ran;
}

int qsort(int* a, int l, int r, int k)
{
    if(l >= r)
	return;
    int piv = getPivot(l, r);
    int temp1 = a[l];
    a[l] = a[piv];
    a[piv] = temp1;
    int last = l;
    int i;
    for(i = l + 1; i <= r; i++)
    {
	if(a[i] <= a[l])
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
    if(last == k)
	return a[last];
    if(last < k)
        return qsort(a, last + 1, r, k);
    else
    	return qsort(a, l, last - 1, k);
}

int main()
{
    int arr[] = {5, 2, 2, 1, 4};
    int k;
    printf("Enter value of k: ");
    scanf("%d", &k);
    int res = qsort(arr, 0, 4, k);
    int i;
    for(i = 0; i < 5; i++)
	printf("%d ", arr[i]);
    printf("\nRes = %d\n", res);
}
