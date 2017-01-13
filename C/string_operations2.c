#include<stdio.h>
#include<stdlib.h>

void cpy(char *s, char *t, int n)
{
	while((*s = *t)!=t[n])
	{
	 s++;
	 t++;
	}
}

int main()
{
	char str[] = "hello";
	int n = 3;
	char str1[3];
	
	cpy(str1, str, n);
	puts(str1);
	return 0;
	
}	
