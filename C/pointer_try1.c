#include<stdio.h>
void main()
 {
   int a[] = {0, 1, 2, 3, 4};
   int *p,i;
   for(p = a, i = 0; p+i <= a+4; p++, i++)
   printf("%d\n", *(p+i));
 }
