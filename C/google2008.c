#include<stdio.h>
int main()
{
    int arr[100][100];
    int i, j, n, m, zrows = 0, zcols = 0;
    scanf("%d %d", &n, &m);
    for(i = 0; i < m; i++)
    {
    	for(j = 0; j < n; j++)
    	{
    		scanf("%d", &arr[i][j]);
        }
    }
    for(i = 0; i < m; i++)
    {
    	for(j = 0; j < n; j++)
    	{
    		if(arr[i][j] == 0)
    		{
    			zrows = zrows | (1 << i);
    			zcols = zcols | (1 << j);
    		}
    	}
    }
    for(i = 0; i < 32; i++)
    {
    	if((zrows & (1 << i)) != 0)
    	{
    		for(j = 0; j < n; j++)
    		{
    		    arr[i][j] = 0;
    		}		
    	}	
    }
    for(i = 0; i < 32; i++)
    {
    	if((zcols & (1 << i)) != 0)
    	{
    		for(j = 0; j < n; j++)
    		{
    		    arr[j][i] = 0;
    		}		
    	}	
    }
     for(i = 0; i < m; i++)
    {
    	for(j = 0; j < n; j++)
    	{
    		printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
 }   	
