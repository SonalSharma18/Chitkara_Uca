#include<stdio.h>
void array(int b[]);
int main()
{
 	int a[10] = {0};
	int i = 0;
	array(a);
	for(i = 0; i < 10; i++)
  	printf("%d", a[i]);
}

void array(int b[])
{
	int i = 0;
	for(i = 0;i < 10; i++)
	b[i] = i;
}

