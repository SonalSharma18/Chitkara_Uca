#include<stdio.h>
void main()
{
	int n, a[100], i, s, l, poss = 0, posl = 0, temp;
    printf("enter range");
    scanf("%d",&n);
    printf("enter the elements in the array");
	for(i = 0; i < n; i++)
	{
	     scanf("%d",&a[i]);
    }
    s = a[0];
    for(i = 0; i < n; i++)
    {
	     if(a[i]< s)
	     {
	           s=a[i];
               poss=i;
	     }
    }
    l = a[0];
    for(i = 0; i < n; i++)
    {
	      if(a[i]> l)
	      {
	            l = a[i];
	            posl = i;
	      }
    }
		
 	temp = a[poss];
	a[poss] = a[posl];
    a[posl] = temp;

    for(i = 0;i < n; i++)
	{
	   printf("%d\n",a[i]);
	}
}
