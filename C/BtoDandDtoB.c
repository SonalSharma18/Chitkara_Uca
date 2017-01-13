#include<stdio.h>
#include<math.h>
void main()
{
	int n, i = 0, r, s = 0, arr[10], j, ans = 0;
 	n = 2;
 	while(n!=0)
  	{
    	r = n%2;
    	arr[i] = r;
    	n = n/2;
    	i++;
 	}
 	printf("Decimal to binary \n");
 	for(j = i - 1; j >= 0; j--)
 	
 	{
 		
 		printf("%d", arr[j]);
 	}	
 	
 	printf("\n");
	for(j = 0; j < i; j++)  
    {
   	     s = arr[j] * pow(2, j);
         ans = ans + s;
  	}
  	printf("Binary to Decimal \n");
	printf("%d",ans);
}
    
