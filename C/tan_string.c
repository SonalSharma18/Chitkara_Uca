#include<stdio.h>
void main()
 {
	   char a[100] = {0}, b[100] = {0};
	   int i, j ,k ,l ,l1 ,c = 0, flag;
	   printf("enter string");
	   gets(a);
	   l = strlen(a);
	   printf("enter 2 string");
	   gets(b);
	   l1 = strlen(b);
	   i = 0;
	   j = l1-1;
	   while(a[i]!='\0')
	   {
		   if(b[j] == a[i])
		   {
		        k = i;
		        while(b[j] != 0)
		        {
		           if(b[j] == a[k])
		              {
		                k++;
		                j--;
		                flag = 1;
		              }    
		           else
		           {
					 flag=0;
					 break;
	               }
	            }
	      }
	      if(flag == 1)
	      break;
	      else
	      i++;
	      }
	      if(flag==1)
	      printf("2");
	      else
	      printf("0");
}



          
  
