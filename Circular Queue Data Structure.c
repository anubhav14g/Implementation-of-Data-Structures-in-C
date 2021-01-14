#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>

bool enqueue(int queue[],int *front,int *rear,int ele,int size)
{
	if((((*rear)==(size-1)) && (*front==0)) || (*rear==(*front-1)))
	{
		return false;
	}
	else
	{
		if(*front==-1)
		{
			*front=0;
		}
		if((*rear==(size-1)) && (*front!=0))
		{
			*rear=0;
			queue[*rear]=ele;
			return true;
		}
		else
		{
			++(*rear);
			queue[*rear]=ele;
			return true;
		}
	}
}

bool dequeue(int queue[],int *front,int *rear,int size)
{
	if(*front==-1)
	{
		return false;
	}
	else
	{
		if(*front==*rear)
		{
			*front=-1;
			*rear=-1;
			return true;
		}
		else
		{
			if(*front==(size-1))
			{
				*front=0;
				return true;
			}
			else
			{
				++(*front);
				return true;
			}
		}
	}
}

void main()
{
	int queue[10],ele,ch,i;
	int front=-1,rear=-1;
	printf("Circular Queue Data Structure\n");
	while(1)
	{
		printf("\nEnter Operation No to be performed\n");
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
			bool isPushed=enqueue(queue,&front,&rear,ele,10);
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
			bool isPopped=dequeue(queue,&front,&rear,10);
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
			printf("\nYour Queue: \n");
			if(front==-1)
			{
				printf("\nQueue is empty!!\n");
			}
			if(front<=rear)
			{
				for(i=front;i<=rear;i++)
				{
					printf("%d ",queue[i]);
				}
			}
			else
			{
				for(i=front;i<=9;i++)
				{
					printf("%d ",queue[i]);
				}
				for(i=0;i<=rear;i++)
				{
					printf("%d ",queue[i]);
				}
			}
			printf("\n");
		}
		else
		{
			exit(0);
		}
	}
	getch();
}
