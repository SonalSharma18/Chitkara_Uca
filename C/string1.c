#include<stdio.h>
void main()
{
 	char str[100];
 	int i = 0;
 	printf("enter string");
	gets(str);
 	while(str[i]!='\0')
	{
  		if(str[i] >= 90&& str[i] <= 122)
        str[i] = str[i]-32;
        i++;
    }
    puts(str);
}
