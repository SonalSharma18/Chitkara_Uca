//program to find gcd

#include<stdio.h>
void main()
{
 	int m, n, r , i; 
 	printf("enter the two numbers: ");
 	scanf("%d %d", &m, &n);   // m is greater than n
	r = m%n;
 	while(r != 0)
    {
     	m = n;
     	n = r;
     	r = m%n;
    }
 	printf("%d \n", n);

}
