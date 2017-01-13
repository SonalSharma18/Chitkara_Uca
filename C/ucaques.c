#include<stdio.h>
#include<sys/time.h>
void cal(int []);
int main()
{
    int arr[] = {5, 4, 3};
    
    cal(arr);
    return 0;
}

void cal(int a[])
{
    int sum[3] = {1, 1, 1};
    int i , j;
    i = 0;
    j = 0;
    for( ; i < 3 && j < 3; j++ )
    {
       
        if(j < 3 && j != i )
        {
            sum[i] = sum[i] * a[j];
            //j++;
        }
       // else
        if(j == 2)
        {
        i++;
        j=-1;
        }
    }
    for(i = 0; i < 3; i++)
    {
        printf("%d \n", sum[i]);
    }
}   
