#include<stdio.h>
void main()
{
int n, i,c = 0, m;
  printf("enter value");
  scanf("%d",&n);
  for(i = 0; i <= 31; i++)
  { 	
 	m = n>>i;
	if((m&1) == 0)
         {
 	    c++;
	 }
	else
         {
	    break;
        
         }
 
  }
printf("%d",c);
}
  
