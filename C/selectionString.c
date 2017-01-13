#include <stdio.h>
#include <string.h>

void sort(char* s[], int n)
{
    int i, j;
    for(i = 0; i < n - 1; i++)
    {
	int min = i;
	for(j = i+1; j < n; j++)
	{
	    if(strcmp(s[min], s[j]) > 0)
		min = j;
	}
	char* t = s[i];
        s[i] = s[min];
        s[min] = t;
    }
}

int main()
{
    char* str[] = {"xyz", "pqr", "abc","wxy"};
    sort(str, 4);
    int i;
    for(i = 0; i < 4; i++)
	printf("%s ", str[i]);
    printf("\n");
}
