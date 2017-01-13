#include<stdio.h>
int game(int);
void main()
{
	 int n;
	scanf("%d",&n);

}
void game(int a)
{
	int i;
	for(i = 1; i <= a; i++)
	{
	     printf("game(%d),game(%d)", game(i),game(a-1)); 
	}
}
 

