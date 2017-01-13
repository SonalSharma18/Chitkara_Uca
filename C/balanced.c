#include <stdlib.h>
#include <math.h>
#include <stdio.h>
struct node {
    int data;
    struct node *next;
};

struct node * head = NULL;
void push(struct node * head, int data)
{
    struct node * new1 = (struct node*)malloc(sizeof(struct node));
    new1->data = data;
    new1->next = NULL;
    
    if(head == NULL)
    {
        head = new1;
    }
    else
    {
        head->next = new1->next;
        head = new1;
    }
}

int pop(struct node * head)
{
    char res;
    struct node * ptr = head;
    if(head == NULL)
    return 0;
    
    else
    {
        res = ptr->data;
        head = ptr->next;
        free(ptr);
    }
    
    return res;
}


int check(char a, char b)
{
    if(a == '(' && b == ')')
    return 1;
    else
    if(a == '{' && b == '}')
    return 1;
    else
    if(a == '[' && b == ']')
    return 1;
    else
    return 0;
}


int bal(char exp[])
{
    int i = 0;
    while(exp[i])
    {
    if(exp[i] == '{' || exp[i] == '[' || exp[i] =='(')
    push(head,exp[i]);
    
    if(exp[i] == '}' || exp[i] == ']' || exp[i] == ')')
    {
        if(head == NULL)
        return 0;
        
        else
        {
            if(!(check(pop(head), exp[i] )))
            return 0;
        }
    }
    i++;
    }
    
    if(head == NULL)
    return 1;
    else
    return 0;
}


int main(){
	char exp[30];
	gets(exp);
	if(bal)
	printf("true");
	else
	printf("false");
return 0;
	
	
}
