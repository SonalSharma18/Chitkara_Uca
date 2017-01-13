// program to print the digits of a number in a cyclic manner(eg - I - 123  O - 321, 231, 123)


#include<stdio.h>
#include<math.h>
void main()
{
 	int n, m, r, l = 0, j, num, k;
 	printf("enter value");
 	scanf("%d", &n);
 	m = n;
 	while(m != 0)
  	{
   		r = m%10;
        l++;
   		m = m/10;
   	}
 
  	for(j = 1; j <= l; j++)
    
    {
   		k = n%10;
        n = n/10;
   		num = k*pow(10,l-1) + n;
   		n = num;
   		printf("%d\n", num);
  }
}
     
     
 
