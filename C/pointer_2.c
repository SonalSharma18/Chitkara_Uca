#include<stdio.h>
void main()
{
 	char n;
 	int c = 0, a = 0;
    char *p;
	char * *f;
	p = &n;
	f = &p;

	scanf("%c",&n);
	while(**f!='*')
	{


 		if(65 <= **f && **f <= 90)
		{
 			c++;
			**f=**f+32;
		}
		else if(97<=**f && **f<=122)
		{
 			a++;
			**f =**f-32;

		}
		printf("%c \n",**f);

		scanf("%c",&n);
		fflush(stdin);
	}

printf("%d character in upper case \n",c);
printf("%dcharacter in lower case \n",a);
}
