#include<stdio.h>
void main()
{
 	int m,a,b,r,i,j,k,n,sum=0,avg;
 	printf("enter no of jars\n");
 	scanf("%d",&n);
 	int arr[10] = {0};

  	printf("enter no of operations\n");
	scanf("%d",&m);
 
   	for(i=1;i<=m;i++)
    {
       	printf("enter values of a and b\n");
		scanf("%d%d",&a,&b);

		printf("enter value to be inserted\n");
		scanf("%d",&k);

		for(r=a;r<=b;r++)
		{
	  		arr[r]=arr[r]+k;
		}
    }
    for(r=0;r<=n;r++)
    {
		sum=sum+arr[r];
    }
    avg=sum/m;
	printf("sum of all the jars is %d\n",sum);
	printf("avg of jars is %d\n",avg);

}
  
