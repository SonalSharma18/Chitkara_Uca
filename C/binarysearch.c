#include<stdio.h>
void binary(int *arr, int num)
{
	int l, r, i, j, m,flag = 0;
	l = 0;
	r = 4;
	while(l <= r)
	{
		m = (l + r)/2;
		if(num == arr[m])
		{
		printf("data found at %d", m);
		flag = 1;
		break;
		}
		else
		if(num < arr[m])
		
			r= m - 1 ;
			else
			if(num > arr[m])
				l = m + 1 ;
	}
	if(flag == 0)
	printf("data not found");
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
   
   binary(a, n);
   return 0;
}   
   
