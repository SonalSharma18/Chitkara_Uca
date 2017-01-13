#include <stdio.h>
#include <stdlib.h>

int* multiply(int* a, int size)
{
    int* b = (int*)malloc(sizeof(int) * size);
    b[0] = 1;
    int i;
    for(i = 1; i < size; i++)
    {
        b[i] = b[i - 1] * a[i - 1];
    }
    int temp = 1;
    for(i = size - 2; i >= 0; i--)
    {
    	temp *= a[i + 1];
    	b[i] = b[i] * temp;
    }
    return b;
}

int main()
{
    int a[] = {5, 2, 3, 6};
    int* ans = multiply(a, 4);
    int i;
    for(i = 0; i < 4; i++)
    {
        printf("%d\n",ans[i]);
    }
}
