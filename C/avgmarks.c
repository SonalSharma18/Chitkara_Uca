#include<stdio.h>
void main()
 {
   	int marks[100][100] = {0}, roll[100] = {0};
   	int i, j, k, n, m, x, y, sum, avg, t;
  	printf("enter no of students");
  	scanf("%d",&n);
  	printf("enter no of subjects");
  	scanf("%d",&m);
  	for(i = 0; i < n; i++)
   	{ 
    	printf("enter roll");
     	scanf("%d",&roll[i]);
   // printf("%d",roll[i]);
     	printf("enter marks");
     	for(j=0;j<m;j++)
       	{
         	scanf("%d", &marks[i][j]);
       	}
  	}
 
    for(j = 0; j < n; j++)
    {
     	for(i = 0; i < m-1; i++)
        {
            for(k = 0; k < m-1-i; k++)
            {
                 if(marks[i][k]<marks[i][k+1])
                  {
                     t = marks[i][k];
                     marks[i][k] = marks[i][k+1];
                     marks[i][k+1] = t;
                  }
             }
        }
   }
 
   for(x = 0; x < n; x++)
   {
       sum = 0;
       avg = 0;
       for(k = 0; k < m-1; k++)
      {
          sum = sum + marks[x][k];
      }
      avg = sum/(m-1);
      printf("%d ",roll[x]);
      for(y = 0; y < m-1; y++)
      {
           printf("%d ",marks[x][y]);
      }
      printf("%d %d",sum,avg);
      printf("\n");
   }
}

  
   
       


   


 
   
