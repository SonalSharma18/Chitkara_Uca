#include<stdio.h>
void main()
{
 int n,a[100],p,k,i;
 printf("enter position");
 scanf("%d",&n);
 printf("enter limit");
 scanf("%d",&k);
 for(i = 0; i < k; i++)
 {
	  scanf("%d", &a[i]);
 }
            
 for(i = n+1; i < k; i++)
 {
	 a[i-1] = a[i];
 }
 for(i = 0; i <k-1; i++)
 {
 	 printf("%d", a[i]);
 }
}
