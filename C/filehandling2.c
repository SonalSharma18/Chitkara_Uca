#include<stdio.h>
#include<string.h>
void main()
{
 FILE *f;
 FILE *f1;
 f = fopen("filehandling1.c", "r");
 f1 = fopen("file1", "w");

 char str[100];
 fgets(str, 10, f);
 fputs(str, f1);
 
 while(fgets(str, 10, f))
 {
   fputs(str, f1);
 }
 fcloseall();
}
