#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[100];
	int i, j, l, k, t, temp;
	gets(str);
	l = strlen(str);
	for(i = l-1; i >= 0; i--)
	{	
		if(str[i] < str[i-1])
		{
			j = i-1;
			for(k = i ; k < l ; k++)
			{
			  	for(t = i ; t < l-i;t++)
			  	{
			  		if(str[t] < str[t+1])
			  		{
			  			temp=str[t];
			  			str[t] = str[t+1];
			  			str[t+1] = temp;
			  		}
			  	}
			  }
			 }
		}	  
			  for(t = j+1; t < l;t++)
			  {
			  	if(str[t] < str[j])
			  	{
			  		temp = str[t];
			  		str[t]= str[j];
			  		str[j] = temp;
			  		break;
			  	}
			  
			  }
		
		

	puts(str);
	return 0;
}		 
			  		
			  		
			  				
			     
