#include<stdio.h>
int a[10]={0},n;

void delete(int);

void main()
{
 	int i,k,j,c,d;
	printf("enter range");
	scanf("%d",&n);
	printf("enter values\n");
	for(i=0;i<n;i++)
	{
  
	   scanf("%d",&a[i]);
	}
 
	for(j=0;j<n;j++)
	{
	  for(k=j+1;k<n;k++)
	  {
            if(a[j]==a[k])
			{
				c=k;
				delete(c);
				k--;
			}
	  }
	}
	printf("array\n");
	for(i=0;i<n;i++)
	{
 
	  	printf("%d\n",a[i]);
	}
	
}

void delete(int c)
{
    int l,i;
    for(l=c+1;l<n;l++)
    {
        a[l-1]=a[l];
    }
    n=n-1;
 
}
