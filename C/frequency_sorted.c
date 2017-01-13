#include<stdio.h>
static int c= 0;
static int d = 0;
void search(int a[], int l , int r, int num)
{
        int m, m1; 
        
        while(l<=r)

        {
        	    m = (l+r)/2;

		        if(a[m]==num)
		{
			
			c++;
			search(a,m+1,r,num);
			search(a,l,m-1,num);
			
			break;
		}
		else{ 
		if(a[m] < num)
		{
			l = m + 1;
			}
			else
			{
			if(a[m] > num)
			r = m - 1;
		}
}		
     // printf("%d",c);
}
//printf("%d",c);
}			
			
		

int main()
{
	int arr[10] = {1, 1 , 1 , 2 , 2 ,3 ,4 ,4 ,4 , 5};
	int l , r, m, n;
	scanf("%d", &n);
	l = 0;
	r = 9;
	search(arr,l,r,n);
	printf("%d", c);
	return 0;
}	
		
			 
