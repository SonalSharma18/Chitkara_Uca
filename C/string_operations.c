//strcpy() - copies one string to the other
#include<stdio.h>
#include<stdlib.h>

void cpy(char *s, char *t)
{
	int i = 0;
	while((s[i] = t[i]) != '\0')
	i++;
}

int main()
{
	char str[100], str1[100];
	gets(str);
	//puts(str);
	cpy(str1,str);
	
	puts(str);
	puts(str1);
	return 0;
}	
		
	
