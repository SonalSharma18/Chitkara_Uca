#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};
struct node * start = NULL;
struct node * new;


void insertion_at_beg()
{
	new = (struct node*)malloc(sizeof(struct node));
	int v;
	printf("enter the value of v");
	scanf("%d", &v);
    new->data = v;
	new->next = NULL;
	if(start == NULL)
	{
		start = new;
	}
    else
	{
		new->next = start;
		start = new;
	}
}


//attached at the end

void insertion_at_end()
{
	new=(struct node*)malloc(sizeof(struct node));
	int v;
	printf("enter the value of v");
	scanf("%d",&v);
	new->data=v;
	new->next=NULL;
	if(start==NULL)
	{
		start=new;
	}
	else
	{
		struct node * ptr;
		ptr=start;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
			ptr->next=new;
	}
}


//insertion after a given value

void insertion_after_value()
{
	new=(struct node*)malloc(sizeof(struct node));
	int v,item;
	printf("enter the value of v");
	scanf("%d",&v);
	new->data=v;
	new->next=NULL;
	printf("enter the value after which yu would like to insert");
	scanf("%d",&item);
	if(start==NULL)
	{
		start=new;
	}
	else
	{
		struct node * ptr;
		ptr=start;
		while(ptr->data!=item && ptr!=NULL)
		{		
			ptr=ptr->next;
		}
			new->next=ptr->next;
			ptr->next=new;
	}
}


//display the values
void display()
{

	struct node * ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);

		ptr=ptr->next;
	}
}

//insertion after a given node
void insertion_after_node()
{
	struct node * ptr;
	ptr=start;
	int n,i;
	new=(struct node*)malloc(sizeof(struct node));
	int v,item;
	printf("enter the value of v");
	scanf("%d",&v);
	new->data=v;
	new->next=NULL;
	printf("enter the node value after you want to insert");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		ptr=ptr->next;
	}
	new->next=ptr->next;
	ptr->next=new;
}
 //deletion of 1st value
void delete_1st()
{
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		struct node * ptr;
		ptr=start;
		start=ptr->next;
		free (ptr);
	}
}
//delete last value
void delete_last()
{
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		struct node * ptr,* ptr1;
		ptr=start;
		ptr1=ptr->next;
		while(ptr1->next!=NULL)
	{
		ptr=ptr->next;
		ptr1=ptr1->next;
	}
		ptr->next=ptr1->next;
		free (ptr1);
	}
}
// delete at given value
void delete_at_given()
{
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		int n;
		struct node * ptr,* ptr1;
		ptr=start;
		ptr1=ptr->next;
		printf("enter the value you want to delete");
		scanf("%d",&n);
		while(ptr1->data!=n && ptr1!=NULL)
		{
			ptr=ptr->next;
			ptr1=ptr1->next;
		}
		if(ptr1==NULL)
		{
			printf("value not present");
		}
		ptr->next=ptr1->next;
		free (ptr1);
	}
}

//searching a value
void search()
{
	if(start==NULL)
	{
		printf("list is empty");
	}
	else
	{
		int n;
		struct node * ptr;
		ptr=start;
		printf("enter the value you want to search");
		scanf("%d",&n);
		while(ptr->data!=n && ptr!=NULL)
		{
			ptr=ptr->next;
		}
		if(ptr==NULL)
		{
			printf("data not found");
		}
	else
		printf("data found");
	}
}







void main()
{
printf("enter 1. for insertion at beg,enter 2. for insertion at end,enter 3. for insertion after value,enter 4. for display,enter 5. for insertion after node,enter 6. for delete 1st node,enter 7. for delete last node,enter 8. for delete after given value,enter 9. for search,enter 10) for exit");
int data,n;
printf("enter your choice");
while(1)
{

scanf("%d",&n);
switch(n)
{
case 1: insertion_at_beg();
break;
case 2: insertion_at_end();
break;
case 3: insertion_after_value();
break;
case 4: display();
break;
case 5 : insertion_after_node();
break;
case 6: delete_1st();
break;
case 7: delete_last();
break;
case 8: delete_at_given();
break;
case 9:search();
break;
case 10:
exit(0);
default : printf("enter valid choice");
break;
}
}
}
