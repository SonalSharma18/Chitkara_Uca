#include <stdio.h>
#include <sys/time.h>
#include <stdbool.h>
#include <stdlib.h>

long long int bubble_sort(int*arr, int size)
{
    int i, j;
    struct timeval t;
    gettimeofday(&t, NULL);
    long long int t1 = t.tv_sec * 1000000 + t.tv_usec;
    for(i = 0; i < size - 1; i++)
    {
        bool is_sorted=true;
        for(j = 0; j < size - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                is_sorted=false;
            }
        }
        if(is_sorted == true)
            break;
    }
    gettimeofday(&t, NULL);
    long long int t2 = t.tv_sec * 1000000 + t.tv_usec;
    return (t2 - t1);
}

int main()
{
    int* a = (int*)malloc(sizeof(int) * 8000);
    int* b = (int*)malloc(sizeof(int) * 16000);
    int i;
    for(i = 0; i < 8000; i++)
        a[i] = 8000 - i;
    for(i = 0; i < 16000; i++)
    	b[i] = 16000 - i;
    long long int t1 = bubble_sort(a, 8000);
    long long int t2 = bubble_sort(b, 16000);
    printf("%lf\n", (double)t2 / t1);
}
