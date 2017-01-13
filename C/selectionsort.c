#include<stdio.h>
void main()
{
  	int a[100] = {0}, i, n, p, j, t;
  	printf("enter limit");
  	scanf("%d", &n);
  	printf("enter values");
  	for(i = 0; i < n; i++)
  	scanf("%d", &a[i]);
  	for(i = 0; i < n-1; i++)
  	{
    	p = i;
   		for(j = i+1; j < n; j++)
    	{
      		if(a[p] > a[j])
         	p = j;
 		}
   
 		t = a[i];
 		a[i] = a[p];
 		a[p] = t;
	}

 	for(i = 0; i < n; i++)
 	{
		printf("%d ",a[i]);

		printf("\n");

	}
}
  
