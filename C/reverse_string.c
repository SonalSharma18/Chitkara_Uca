#include<stdio.h>
#include<string.h>
void reverse(char []);
void main()
{
  	char str[100] = {0};
	printf("original"); 
 	gets(str);

  	reverse(str);
}
void reverse(char str[100])
{
    int i, temp, l, j;
    l = strlen(str);
    for(i = 0; i < l-1; i++)
    {
       for(j = 0; j < l - 1 - i; j++)
          {
             temp = str[j];
             str[j] = str[j+1];
             str[j+1] = temp;
		  }
	}
  	printf("reversed\n");
  	for(i=0;i<l;i++)
  	printf("%c",str[i]);
}
