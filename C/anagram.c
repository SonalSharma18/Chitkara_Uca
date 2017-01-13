#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[100][100], str1[100][100], str2[100][100];
	int flag[100];
	int i, j,k, n, t;
	char temp;
	scanf("%d", &n);
	getchar();
	for(i = 0; i < n; i++)
	{
		gets(str[i]);
		strcpy(str1[i], str[i]);
		flag[i]= 0;
	}
	
	for(i = 0; i < n ; i++)
	{
 	 	for(j = 0; j < strlen(str[i]) - 1; j++)
 	 	{
 	 		for(k = 0; k <strlen(str[i])-j-1; k++)
 	 		{
 	 			if(str[i][k] > str[i][k+1])
 	 			{
 	 					
					temp = str[i][k];
					str[i][k] = str[i][k+1];
					str[i][k+1] = temp;
				}
			}
		
	}
}	
	
	for( i = 0; i < n; i++)
	{
		if(flag[i] != 1)
		{
			strcpy(str2[k++],str1[i]);
			for(j = i+1; j < n; j++)
			{
				if(strcmp(str[i], str[j]) == 0)
				{
					strcpy(str2[k++], str1[j]);
					flag[j] = 1;
				}
			}
		}
		
		else
		{
			continue;
		}
	}
	printf("-------------------------------------------------");
	for(i = 0; i < n ; i++)
	{
		puts(str[i]);
	}
	return 0;
}		
	
	
					
					
						
