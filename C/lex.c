#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 int main()
 {
 	char str[1000], temp;
 	int i, j, l, p;
 	gets(str);
 	
 	l = strlen(str);
 	for(i = l-1; i >= 0; i--)
 	{
 		if(str[i-1] > str[i])
 		{
 			p = i-1;
 			break;
 		}
 	}
 	
 	for(i = p+1; i < l; i++)
 	{
 		for(j = p+1; j < l; j++)
 		{
 			if(str[j] < str[j+1])
 			{
 					temp = str[j];
 					str[j] = str[j+1];
 					str[j+1] = temp;
 			}
 		}
 	}
 	
 	for(i = p+1; i < l; i++)
 	{
 		if(str[p] > str[i])
 		{
 			temp = str[p];
 			str[p] = str[i];
 			str[i] = temp;
 		    break;
 		}
 	}
 	
 	puts(str);
 	return 0;
 }		    					 		
 	
