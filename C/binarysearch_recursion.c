#include<stdio.h>
int binary(int *arr, int num, int l, int r)
{	
	int i, j, m,flag = 0;
	
	
	    if(l > r)
			return 0;
		else
		{
			m = (l + r)/2;
			if(num == arr[m])
			{
		 	return 1;
			}
			else if(num < arr[m])
			{
				r= m - 1 ;
				binary(arr, num, l, r);
			}	
			else if(num > arr[m])
			{
				l = m + 1 ;
	        	binary(arr, num, l, r);
	    	} 
	    }  
}

int main()
{
	int a[5], n;
   int i, j, l, r;
   printf("enter no to be searched ");
   scanf("%d", &n);
   printf("enter values");
   for(i = 0; i < 5; i++)
   scanf("%d", &a[i]);
   l = 0;
   r = 4;
   if(binary(a, n, l, r))
	{
	   printf("data found %d", l);
	}
	else
		printf("not found");
		  
   return 0;
}   
   	
