#include<stdio.h>

int main()
{
    int a[] = {5, 2, 3};
    int i, j, k, f1 = 1, f2 = 1;
    int b[3] = {1}, c[3] = {1, 1, 1}, ans[3];
    for(i = 1; i <= 2; i++)
    {
        f1 = f1 * a[i-1];
        b[i] = f1;
        //printf("%d ",b[i]);
        
    }
    //printf("\n");
    
     for(i = 1; i >= 0; i--)
    {
        f2 = f2 * a[i+1];
        c[i] = f2;
     //printf("%d ",b[i]);
       
    }
    
    for(j = 0; j < 3; j++)
    {
        ans[j] = b[j] * c[j];
        printf("%d \n", ans[j]);
    }
    return 0;
}                
        
        
