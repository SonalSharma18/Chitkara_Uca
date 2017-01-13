#include<stdio.h>
void main()
{
	char str[100];
	int ch = 0, u = 0, l = 0, w = 0, i;
	printf("enter string");
	gets(str);
	i = 0;
	while(str[i]!='\0')
	{
  		ch++;
  		if(str[i]>=65 && str[i]<=90)
     	u++;
  		else if(str[i]>=97 && str[i]<=122)
     	l++; 
  		else if(str[i]=' ')
    	w++;
        i++;
    }
	printf("%d\n", ch);
	printf("%d lowercase\n", l);
	printf("%d uppercase\n", u);
	printf("%d spaces\n", w);
	printf("%d words\n", w+1);
}

