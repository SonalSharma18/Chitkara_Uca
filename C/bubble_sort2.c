#include<stdio.h>
#include<sys/time.h>
void bubsort(int [], int);
int main()
{
    int arr1[16000];
    int arr2[8000];
    long int i, j, at_beg1, at_end1, at_beg2, at_end2, m, n, diff1, diff2 , temp;
    double ratio;
    for(i = 16000; i > 0; i--)
    {
        arr1[16000 - i] = i;
    }
    for(j = 8000; j > 0; j--)
    {
        arr2[8000-j] = j;
    }
    struct timeval t;
    gettimeofday(&t, NULL);
    at_beg1 = t.tv_sec*1000000 + t.tv_usec; 
    //printf("%ld \n", at_beg1);
    bubsort(arr1, 16000);
    gettimeofday(&t, NULL);
    at_end1 = t.tv_sec*1000000 + t.tv_usec; 
    //printf("%ld \n", at_end1);
    gettimeofday(&t, NULL);
    at_beg2 = t.tv_sec*1000000 + t.tv_usec;
    bubsort(arr2, 8000);
    gettimeofday(&t, NULL);
    at_end2 =  t.tv_sec*1000000 + t.tv_usec;
    diff1 = at_end1 - at_beg1;
    diff2 = at_end2 - at_beg2;
    printf("%ld \n", diff1);
    printf("%ld \n", diff2);
    ratio = (double)diff1/(double)diff2;
    
    printf("%g \n", ratio);
    return 0;
}

 void bubsort(int a[], int size)
 {
     int n, m, temp;
     for(m = 0; m < size - 1; m++)
     {
         for(n = 0; n < size - 1 - m; n++)
         {
             if(a[n] > a[n+1])
             {
                 temp = a[n];
                 a[n] = a[n+1];
                 a[n+1] = temp;
             }
         }
     }
 }    
