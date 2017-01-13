#include <stdio.h>

int search(int* a, int l, int r, int elem)
{
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(a[m] == elem)
            return m;

        if(a[m] < a[r])
        {
            if(elem > a[r])
                r = m - 1;
            else if(elem <= a[r] && elem > a[m])
                l = m + 1;
            else if(elem <= a[r] && elem < a[m])
                r = m - 1;
        }
        else
        {
            if(elem > a[m])
                l = m + 1;
            else if(elem < a[m] && elem >= a[l])
                r = m - 1;
            else if(elem < a[m] && elem < a[l])
                l = m + 1;
        }
    }

}

int main()
{
    int arr[] = {13, 18, 5, 7, 9};
    int res = search(arr, 0, 4, 5);
    printf("%d\n", res);
}
