#include<stdio.h>
struct store
{
	  char a[10];
	  int b;
	  int c;
 }d;
 
struct store enter(struct store d)
 {
	   printf("enter name");
	   scanf("%s",d.a);
	   printf("enter roll");
	   scanf("%d",&d.b);
	   printf("enter marks");
	   scanf("%d",&d.c);
 }
void main()
{
    enter(d);
}

