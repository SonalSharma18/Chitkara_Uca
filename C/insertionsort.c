#include<stdio.h>
void insert(int [],int);
void main()
{
    int a[100] = {0}, n, i;
    printf("enter range");
    scanf("%d", &n);
    printf("enter values");
    for(i = 0; i < n; i++)
    {
       scanf("%d", &a[i]);
    }
    insert(a,n);
 
}

void insert(int a[], int n)
{
    int i, temp, ptr;
    for(i = 1; i < n; i++)
    {
        temp = a[i];
        ptr = i-1;
        while(temp < a[ptr] && ptr >= 0)
      	{
        	a[ptr+1] = a[ptr];
        	ptr --;
        }
        a[ptr+1] = temp;
       
    }
    for(i = 0; i < n; i++)
    {
         printf("%d\t", a[i]);
    }
}  
   

