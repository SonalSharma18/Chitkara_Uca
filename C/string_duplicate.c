#include<stdio.h>
void main()
 {
	   char a[100] = {0};
	   int i, j, l, k;
	   gets(a);
	   l = strlen(a);
	  for(i = 0; i < l; i++)
		 {
		   for(j = i+1; j<l; j++)
		      {
		        if(a[i] == a[j])
		          {
		            for(k = j+1; k<l; k++)
		              {
		                a[k-1] = a[k];
		                
		              }
		             l = l-1;
		           }
		      }
		 }
	 for(i = 0; i < l; i++)
	   {
	   printf("%c", a[i]);
	   }
}
