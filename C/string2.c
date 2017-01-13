#include<stdio.h>
#include<string.h>
void main()
{
  	int i,j,t;
    char str[100];
  	printf("enter string");
   	gets(str);
   	j = strlen(str);
  	for(i = j; i >= 0; i--)
	{
  		t = i;
  		{
  
    		str[t] = str[i];
 		}
	}
	for(i=0;i<j;i++)
  	printf("%c",str[i]);
}
