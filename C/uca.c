#include<stdio.h>
main()
{
  int num[]={24,34,12,44,56,17};
  display(num,6);
 }
 
 display(int *j,int n)
 {
   int i;
    for(i=0;i<n;i++)
    {
         printf("%d",*j);
         j++;
       }
     }    
