//strcat - concates two strings
#include<stdio.h>
#include<stdlib.h>

void cat(char *s, char *t)
{
	int i = 0,j = 0;
	while(*s != '\0')
	{
	
		*s++;
	}
	
	
	while((*s++ = *t++) != '\0')
	;
	
}

int main()
{
	char str[]="hi ";
	char str1[] = "sonal";
	//gets(str);
	//gets(str1);
	cat(str,str1);
	
	puts(str);	
	return 0;
}	
