//Program to enter the age and names...and then use them to make an emailid.


#include<stdio.h>
void main()
{
  	int age[10] = {0};
  	char name[10][100] = {0};
    int i,j,k;
  	printf("enter age");
  	for(i = 0; i < 10; i++)
  	scanf("%d", &age[i]);
  	getchar();
  	printf("enter names");
  	for(k = 0; k < 10; k++)
   	{
     	gets(name[k]);
   	}
	for(j=0;j<10;j++)
 	{
   		printf("%s_%d@gmail.com \n",name[j],age[j]);
  	}
}
