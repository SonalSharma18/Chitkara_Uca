#include<stdio.h>
#include<string.h>
void main()
{
  	FILE *f;
  	FILE *f1;
 	char ch;
 	f1 = fopen("/home/sonal/Desktop/ prime1.c", "a");
 	f = fopen("factorial", "r");
 	ch = fgetc(f);
 	while(ch != EOF)
 	{
  		fputc(ch, f1);
		//putchar(ch);
  		ch=fgetc(f);
	}
	fcloseall();
}
  
  
