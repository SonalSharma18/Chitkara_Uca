#include<stdio.h>
void main()
{
  int a[5] = {0}, *p, i;
  printf("enter elements");
  for(i = 1; i <= 5; i++)
   {
        scanf("%d", &a[i]);
 		p = &a[i];
 
   }
  
   //p=&a[i-1];
   printf("ans is \n");
 
   //printf("%p\n",p);
   for(i = 1; i <= 5; i++)
   printf("%d\n", ++*p);



}


