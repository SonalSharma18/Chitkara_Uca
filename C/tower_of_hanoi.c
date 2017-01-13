#include<stdio.h>
void tower (int n,char s,char d,char t)
{
  if(n==1)
  {
    printf("move from %c to %c\n",s,d);
}
else
  {
    tower(n-1,s,t,d);
    tower(1,s,d,t);
    tower(n-1,t,d,s);
  }
}
void main()
{
 int n;
printf("enter no of discs");
scanf("%d",&n);
tower(n,'A','C','B');
}
