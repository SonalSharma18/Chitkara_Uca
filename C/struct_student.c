#include<stdio.h>
 struct student
{
   char name[5];
   int roll;
   int marks;
 }c[5];
 
void enter(struct student c[5])
{
	  int i;
	  for(i = 0; i < 5; i++)
	   {
		   printf("enter name");
			scanf("%s",c[i].name);
		   printf("enter roll");
			scanf("%d",&c[i].roll);
			printf("enter marks");
			scanf("%d",&c[i].marks);
       }
}
struct student search(struct student c[5],int n)
 {
    int i;
	struct student t;
	  for(i = 0; i < 10; i++)
	   {
			if(c[i].roll == n)
			 {
				   strcpy(t.name,c[i].name);
					t.marks = c[i].marks;
					t.roll = c[i].roll;
					break;
			 }
		}
   return t;

}

void main()
{
	  int i,n;
	  struct student t;
	  enter(c); 
	  printf("enter roll");
	  scanf("%d",&n);
	  t= search(c,n);
	  printf("name and marks of roll %d is %s and %d\n",t.roll,t.name,t.marks);
}
