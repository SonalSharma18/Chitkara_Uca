#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char str[100][100], str1[100][100];
	int i, j, n, k, t, l, m = 0,z,flag;
	scanf("%d", &n);
	getchar();
	for(i = 0; i < n; i++)
	{
		gets(str[i]);
	}
	printf("\n");
	puts(str[0]);
	
	for(i = 0; i < n; i++)
	{
		for(j = i+1; j < n; j++)
		{	
			flag = 0;
		    l = 0;
			for(k = 0; k < 4; k++)
			{
				for(t = 0; t < 4; t++)
				{
					if(str[i][k] == str[j][t])
					{
						l++;
					}
				}
			}
			//printf("%d", l);
			
				
			if(l == 4)
			{	
				for(z = 0;z < m;z++)
				{
					if(strcmp(str[j], str1[z]) == 0)
					{
						flag = 1;
					}
				}
			}	
				if(flag ==0 && l==4)
				{
					strcpy(str1[m],str[j]);
					m++;
				}
				
			
		}
		}
		
		for(i = 0; i < n-1 ;i++)
		puts(str1[i]);
	
	return 0;
}	
					
			
