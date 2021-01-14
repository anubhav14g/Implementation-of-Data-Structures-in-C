#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>

bool push(int stack[],int *top,int ele,int size)
{
	if((*top)==(size-1))
	{
		return false;
	}
	else
	{
		++(*top);
		stack[*top]=ele;
		return true;
	}
}

bool pop(int stack[],int *top)
{
	if(*top==-1)
	{
		return false;
	}
	else
	{
		--(*top);
		return true;
	}
}

void main()
{
	int stack[10],ele,ch,i;
	int top=-1;
	printf("Stack Data Structure\n");
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
			bool isPushed=push(stack,&top,ele,10);
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
			bool isPopped=pop(stack,&top);
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
			printf("\nYour Stack: \n");
			for(i=0;i<=top;i++)
			{
				printf("%d ",stack[i]);
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
