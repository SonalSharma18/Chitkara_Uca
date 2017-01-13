#include<stdio.h>
void main()
{
 	int n, x, b;
	printf("enter number \n");
	scanf("%d", &n);
	printf("enter bit \n");
	scanf("%d", &b);
    x = n >> (32 - b) ;
    printf("ans is %d \n", x&1);
}
