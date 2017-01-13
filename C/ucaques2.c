#include<stdio.h>
int main()
{
	
	int n, i, j, k;
	scanf("%d", &n);
	int a[1000][1000] = {0}, b[1000][1000] = {0};
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
			b[i][j]=1;
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(a[i][j] == 0)
			{
				for(k=0;k<n;k++)
				{
					b[i][k] =  0;
					//i++;
					b[k][j] =  0;
					//j++;
				}
			}
			
		}
	}
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			printf("%d", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}	
