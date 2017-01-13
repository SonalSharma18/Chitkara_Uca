#include<stdio.h>
void main()
{
     int n ,i ,c = 0, sum = 0;
  	 printf("enter value");
  	 scanf("%d",&n);
  	 for(i = 1; i <= n; i++)
   	 {
     	 if(n%i == 0)
     	 {
     	   	 c++;
             sum = sum + i;
         }
     }
    if(sum == n)
    printf("%d", c);
    else 
    printf("0");

}
