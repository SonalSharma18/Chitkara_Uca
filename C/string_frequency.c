#include<stdio.h>
#include<string.h>
void main()
{
    char a[100] = {0};
    int i, j, k, l, c;
  
     //  getchar();

  	printf("enter string");
   	gets(a);
	l = strlen(a);
	for(k = 1; k <= l; k++)
	{
		  c = 0;
 
 		for(j = k+1;j <= l; j++)
     	{
      		if(a[k] == a[j])
        	{
          		c++;
            	for(i = j+1;j <= l;j++)
         		{
        			a[i-1] = a[i];
      				l--;
         
     			}

			}
		}	  
	printf("count of %c is %d \n",a[i],c);

	}

}

      
