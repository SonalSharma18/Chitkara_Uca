#include<stdio.h>

int main(int argc, char *argv[])
{
	int sum = 0, i;
	
	for(i = 1; i < argc; i++)
	{
		int store;
	//sscanf(argv[i], "%d", &store);    means it takes from the string and then converts it to integer
    store = atoi(argv[i]);
		sum = sum + store;
	}
	
	printf("%d", sum);
}		 
