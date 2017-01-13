#include<stdio.h>
void main()
  {
		char a[10][10] = {0}, b[10][10] = {0};


		int i ,j ,k , c = 0, m = 0, e = 0;


		for(i = 0; i < 10; i++)
		{
		  	gets(a[i]);
		}
		for(j = 0; j < 10; j++)
		  {
		     for(k = 0; k < 5; k++)
		       {
		         b[j][k] = a[j][k];
		        }
		    //b[j][k]='\0';
		   }
	    for(i = 0; i < 10; i++)
		{
		   if(strcmp(b[i], "CUCSE")==0)
		      c++;
		   else 
		      if(strcmp(b[i], "CUECE")==0)
		       e++;
		   else 
		      if(strcmp(b[i], "CUMEC")==0)
		       m++;
		 }
		printf("cse is %d\n",c);
		printf("ece is %d\n",e);
		printf("mec is %d\n",m);
}

             

 
  

  
