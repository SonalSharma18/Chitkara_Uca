#include<stdio.h>

static char buffer[1000];
static char * curr = buffer;
char * allo(int x)
{
	if(curr + x > buffer + 1000)
	{
		printf("not enough space \n");
	}
	else
	{
		char * t = curr;
		curr = curr + x;
		return t;
	}
}

void fre(int n)
{
	if(curr - n < buffer)
	{
		printf("cannot delete \n");
	}
	else
	{
		curr = curr - n;
	}
}


int main()
{
	printf("%p\n", buffer);
	char i, *j;
	j = allo(20);
	printf("%p \n", j);
	j = allo(20);
	printf("%p \n", j);
	fre(20);
	printf("%p \n",curr);
	return 0;
}		
						
