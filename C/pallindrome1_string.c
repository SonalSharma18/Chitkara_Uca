#include<stdio.h>
#include<string.h>
char * palcheck(char [], int);
void main()
{
 	char a[100][100], res[100][100]={0};
 	int n, i, j, k = 0, l;
 	printf("enter range");
 	scanf("%d", &n);
 	getchar();
    printf("enter strings");
 	for(i = 0; i < n; i++)
 	{
  		gets(a[i]);
  		l = strlen(a[i]);
   		strcpy(res[k], palcheck(a[i],l));
    	k++;
    	//m++;

    }
    for(i = 0; i < n; i++)
	{
		if((strcmp(res[i] ,"") != 0))
    	 printf("%s \n", res[i]);
	}
}
char * palcheck(char a[],int l)
{
  // char b[100]={0};
   int i,j,t,k,g,c=0;
 	for(i = 0, j = l - 1; i < l && j >= 0; i++, j--)
     
 
  	{
    	if(a[i]!=a[j])
       	c++;
  	}
	if(c==0)
       
	//if(strcmp(a,b)==0)
   	return a;
	else 
	return "";
}
  
 
