#include<stdio.h>
void main()
{
  	char n;
  	int c = 0, a = 0;
	char *p;
	p = &n;


	scanf("%c",&n);
	while(*p != '*')
	{


 		if(65 <= *p && *p <= 90)
		{
 			c++;
			*p = *p+32;
		}
		else if(97 <= *p && *p <= 122)
		{
 			a++;
			*p = *p-32;

		}
		printf("%c \n",*p);

		scanf("%c",&n);
		fflush(stdin);
	}

	printf("%d character in upper case \n",c);
	printf("%dcharacter in lower case \n",a);
}
