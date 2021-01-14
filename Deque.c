#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>

bool insertFront(int queue[],int *front,int *rear,int ele,int size)
{
	if ((*front==0 && *rear==size-1)|| (*front==*rear+1)) 
    { 
        return false;
    } 
    if(*front==-1) 
    { 
        *front=0; 
        *rear=0; 
    } 
    else if (*front == 0) 
        *front=size-1 ; 
  
    else  
        *front=*front-1; 
  
    queue[*front] = key ; 
}

bool insertLast(int queue[],int *front,int *rear,int ele,int size)
{
	if(*rear==-1)
	{
		++(*rear);
		queue[*rear]=ele;
	}
}

bool dequeue(int queue[],int *front,int *rear,int size)
{
	
}

void main()
{
	int queue[10],ele,ch,i;
	int front=-1,rear=-1;
	printf("Deque Data Structure\n");
	while(1)
	{
		printf("\nEnter Operation No to be performed\n");
		printf("1. InsertFront()\n");
		printf("2. InsertLast()\n");
		printf("3. DeleteFront()\n");
		printf("4. DeleteLast()\n");
		printf("5. Display\n");
		printf("6. Exit\n");
		ch=0;
		printf("\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("\nEnter element to be pushed\n");
			ele=0;
			printf("\n");
			scanf("%d",&ele);
			bool isPushed=insertFront(queue,&front,&rear,ele,10);
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
			printf("\nEnter element to be pushed\n");
			ele=0;
			printf("\n");
			scanf("%d",&ele);
			bool isPushed=insertLast(queue,&front,&rear,ele,10);
			if(isPushed)
			{
				printf("\nElement is pushed successfully\n");
			}
			else
			{
				printf("\nQueue is full\n");
			}
		}
		else if(ch==3)
		{
			bool isPopped=deleteFront(queue,&front,&rear,10);
			if(isPopped)
			{
				printf("\nElement is popped successfully\n");
			}
			else
			{
				printf("\nQueue is empty\n");
			}
		}
		else if(ch==4)
		{
			bool isPopped=deleteLast(queue,&front,&rear,10);
			if(isPopped)
			{
				printf("\nElement is popped successfully\n");
			}
			else
			{
				printf("\nQueue is empty\n");
			}
		}
		else if(ch==5)
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
