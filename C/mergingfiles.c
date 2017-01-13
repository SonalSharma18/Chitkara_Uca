#include<stdio.h>
void main()
{
  	FILE *f;
  	FILE *f1;
  	FILE *f2;
  	char ch,ch1;
 	f = fopen("armstrong.c","r");
 	f1 = fopen("factorial.c","r");
  	f2 = fopen("file1","a");
  	ch = fgetc(f);
  	while(ch!=EOF)
  	{
   		fputc(ch,f2);
   		ch=fgetc(f);
  	}
  	fclose(f);
 	ch1 = fgetc(f1);
   	while(ch1 != EOF)
    {
       	fputc(ch1, f2);
       	ch1 = fgetc(f1);
    }
   fclose(f1);
}
 
  
