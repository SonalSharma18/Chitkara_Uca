#include<stdio.h>
#include<string.h>
void main()
{
	  int i,j,n,m;
	  char a[100][100],str[10];
	  for(i=1;i<=5;i++)
	  {
		  gets(str);
		  if(strcmp(str,"*")==0)
		  break;
		  strcpy(a[i],str);
	  }
	  for(i=1;i<=5;i++)
	  {	
		   puts(a[i]);
	  }
            
       
}
