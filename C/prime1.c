#include<stdio.h>
void main()
{
  int n = 2, count = 0, flag = 1, i;
  printf("first 100 prime numbers are: \n");
  while(count != 100)
  {
    for(i = 2; i <= n/2; i++)
     {
       if(n%i == 0)
         {
           flag = 0; 
           break;
         }
       else
         {
           flag = 1;
         } 
       
     }
      if(flag == 1)
         {
          printf("%d ", n);
          count++;
         } 
       n++;
             
  }
      printf("\n"); 
}
34512