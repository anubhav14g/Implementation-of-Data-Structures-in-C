#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node
{
	int val;
	struct node *next;
}*front=NULL,*rear=NULL;

bool push(int element)
{
	if(rear)
	{
		struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->val=element;
		temp->next=NULL;
		rear->next=temp;
		rear=temp;
	}
	else
	{
		struct node *temp=(struct node*)malloc(sizeof(struct node));
		temp->val=element;
		temp->next=NULL;
		front=temp;
		rear=temp;
	}
	return true;
}

bool pop()
{
	if(front)
	{
		struct node *ptr=front;
		front=front->next;
		ptr->next=NULL;
		free(ptr);
		return true;
	}
	else
	{
		return false;
	}
}

void Display()
{
	struct node *temp=front;
	while(temp)
	{
		printf("%d ",temp->val);
		temp=temp->next;
	}
}

void main()
{
	int ele,ch,i;
	printf("Queue Data Structure Using Linked List\n");
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
				printf("\nQueue is full\n");
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
				printf("\nQueue is empty\n");
			}
		}
		else if(ch==3)
		{
			if(front)
			{
				printf("\nYour Queue: \n");
				Display();
				printf("\n");
			}
			else
			{
				printf("\nError! Queue is empty\n");
			}
		}
		else
		{
			exit(0);
		}
	}
	getch();
}
