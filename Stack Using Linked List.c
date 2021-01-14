#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node
{
	int val;
	struct node *next;
}*top=NULL;

bool push(int element)
{
	if(top)
	{
		struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->val=element;
		temp->next=top;
		top=temp;
	}
	else
	{
		struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->val=element;
		temp->next=NULL;
		top=temp;
	}
	return true;
}

bool pop()
{
	if(top)
	{
		struct node *ptr=top;
		top=top->next;
		ptr->next=NULL;
		free(ptr);
		return true;
	}
	else
	{
		return false;
	}
}

void Display(struct node *ptr)
{
	if(!ptr)
	{
		return;
	}
	Display(ptr->next);
	printf("%d ",ptr->val);
}

void main()
{
	int ele,ch,i;
	printf("Stack Data Structure Using Linked List\n");
	while(1)
	{
		printf("\nEnter Operation to be performed\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		ch=0;
		printf("\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("\nEnter element to be pushed\n");
			ele=0;
			printf("\n");
			scanf("%d",&ele);
			bool isPushed=push(ele);
			if(isPushed)
			{
				printf("\nElement is pushed successfully\n");
			}
			else
			{
				printf("\nStack is full\n");
			}
		}
		else if(ch==2)
		{
			bool isPopped=pop();
			if(isPopped)
			{
				printf("\nElement is popped successfully\n");
			}
			else
			{
				printf("\nStack is empty\n");
			}
		}
		else if(ch==3)
		{
			if(top)
			{
				printf("\nYour Stack: \n");
				struct node *ptr=top;
				Display(ptr);
				printf("\n");
			}
			else
			{
				printf("\nError! Stack is empty\n");
			}
		}
		else
		{
			exit(0);
		}
	}
	getch();
}
