#include<stdio.h>
void sum(int,int);
void main()
{
  int a[100][100]={0},c[100][100]={0},d[100][100],n,m,i,j,k,l;
  printf("enter no of rows");
  scanf("%d",&n);
  printf("enter no of columns");
  scanf("%d",&m);
  printf("enter values of array 1");
 for(i=1;i<=n;i++)
   {
     for(j=1;j<=m;j++)
      scanf("%d",a[i][j]);
   }
  printf("enter values of array 2");
 for(k=1;k<=n;k++)
   {
     for(l=1;l<=m;l++)
      scanf("%d",a[k][l]);
   }
sum(a,c);
}

void sum(int a,int c)
{ int k,l
  int d=[100][100]
  
  for(k=1;k<=n;k++)
   {
     for(l=1;l<=m;l++)
      d[k][l]=a[k][l]+c[k][l];
   
   }
for(i=1;i<=n;i++)
   {
     for(j=1;j<=m;j++)
      printf("%d",d[i][j]);
   }
}
  

