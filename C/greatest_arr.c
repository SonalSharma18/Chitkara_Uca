// to print the greatest number out of all the elements in the array

#include<stdio.h>
void main()
{
	int a[10], i, s, l;
	for(i = 0; i < 10; i++)
	scanf("%d", &a[i]);
	s = a[0];
    for(i = 1; i < 10; i++)
	{
 		if(s < a[i])
		s = a[i];
	}
	printf("%d\n",s);
}
