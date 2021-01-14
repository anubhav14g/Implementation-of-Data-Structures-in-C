#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node
{
	struct TreeNode *val;
	struct node *next;
}*front=NULL,*rear=NULL;

bool checkEmpty()
{
	if(front) return true;
	return false;
}

void enqueue(struct TreeNode* element)
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
}

struct TreeNode* dequeue()
{
	struct node *ptr=front;
	front=front->next;
	ptr->next=NULL;
	struct TreeNode *data=ptr->val;
	free(ptr);
	if(!front)
	{
		front=NULL;
		rear=NULL;
	}
	return data;
}

void displayQueue()
{
	struct node *temp=front;
	int count=0;
	while(temp)
	{
		++count;
		temp=temp->next;
	}
	printf("%d",count);
}

