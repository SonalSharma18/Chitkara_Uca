#include<stdio.h>
void main()
 {
	   char a[100]={0},b[100]={0},c[100]={0},d[100]={0};
	   int i,j,k,l1,l2,l3,l4;
	   gets(a);
	   gets(b);
	   gets(c);
	   l1 = strlen(a);
	   l2 = strlen(b);
	   l3 = strlen(c);
	   l4 = l1+l2+l3+2;
	   for(i = 0; i <= l4;)
	   {
		    for(j = 0; j < l1; j++)
		    {
		     	d[i] = a[j];
		        i++;
	        }
	        d[i] = ' ';
	        i++;
		    for(j = 0; j < l2; j++)
		    {
		         d[i] = b[j];
		         i++;
	        }
	       d[i] = ' ';
	       i++;
	      for(j = 0; j < l3; j++)
		  {
		       d[i] = c[j];
				i++;
	      }
	   }
	   for(i = 0; i < l4; i++)
	   {
	   		printf("%c", d[i]);
	  
	  
	   
	   }
}
