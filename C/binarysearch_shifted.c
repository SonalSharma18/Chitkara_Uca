#include<stdio.h>

int search(int a[], int num, int l, int r)
{	
	int m;
	while(l <= r)
    {
    	m = (l + r)/2;
    	if(a[m] == num)
    	{
    		return 1;
    		break;
    	}
    	else
    	{	
    	if(num < a[m])
    	{
    		r = m-1;
    	}
    	else
    	 if(num > a[m])
    	 {
    	 	l = m+1;
    	 }
    	 }
    }
    return 0;
  }  	 	
int main()
{
	int a[100];;
	int i, j, k, n, l1, l2, r1, r2, num;
	int m, l, r, m1, m2;
	scanf("%d", &n);
	scanf("%d", &num);
	for(i = 0; i < n ;i++)
	scanf("%d", &a[i]);
	l = 0;
	r = n - 1;
	
    // finding the position where we should divide
    
	m = (l+r)/2;
	while((a[m] < a[m-1]) || (a[m] < a[m+1]))
	{
		//m = (l +r)/2;
		if(a[m] < a[0])
		{
			r = m;
		}
		else
		if(a[m] > a[0])
		{
			l = m;
		}
		m = (l + r)/2;
	}
	
	printf("%d \n", m);
	
    l1 = 0;
    r1 = m;
    l2 = m+1;
    r2 = n-1;
    
   int d = search(a, num, l1, r1);
   int f = search(a, num, l2, r2);
   
   if( (d == 1) || (f == 1))
   printf("no found \n");
   else
   printf("no not found \n"); 
   
   return 0;
  } 
    
    	 	
    	
			
