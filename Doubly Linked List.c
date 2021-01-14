#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;	
}*head=NULL;

void createList()
{
	int ch=0,ele=0;
	struct node *temp2=NULL,*temp3=NULL;
	while(1)
	{
		printf("\nChoose among the following: \n");
		printf("1. Value\n");
		printf("2. Stop\n");
		printf("\n");
		ch=0;
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("\nEnter Value: \n");
			printf("\n");
			ele=0;
			scanf("%d",&ele);
			struct node *temp=(struct node*)malloc(sizeof(struct node));
			temp->data=ele;
			temp->next=NULL;
			temp->prev=NULL;
			if(!head)
			{
				head=temp;
				temp2=head;
			}
			else
			{
				temp2->next=temp;
				temp3=temp2;
				temp2=temp;
				temp2->prev=temp3;
			}
		}
		else
		{
			return;
		}
	}
}

void displayList()
{
	struct node *temp=head;
	while(temp)
	{
		printf("%d ",temp->data);
		temp=temp->next;	
	}
	printf("\n");	
}

bool searchList(int element)
{
	struct node *temp=head;
	int f=0;
	while(temp)
	{
		if(temp->data==element)
		{
			f=1;
			break;
		}
		temp=temp->next;
	}
	if(f==1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void insertList(int pos,int value)
{
	int count=0,to=0;
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=value;
	temp->next=NULL;
	temp->prev=NULL;
	if(head)
	{
		struct node *x=head;
		while(x)
		{
			++count;
			x=x->next;
		}
		if(pos==1)
		{
			temp->next=head;
			head=temp;
		}
		else if(pos==(count+1))
		{
			struct node *y=head;
			struct node *z=NULL;
			while(y->next)
			{
				y=y->next;
			}
			y->next=temp;
			z=y;
			y=y->next;
			y->prev=z;
		}
		else if(pos>(count+1) || pos<1)
		{
			printf("\nError! Position is incorrect\n");
			return;
		}
		else
		{
			struct node *y=head;
			while(to!=(pos-1))
			{
				++to;
				y=y->next;
			}
			struct node *extra=y->next;
			y->next=temp;
			temp->next=extra;
			temp->prev=y;
			extra->prev=temp;
		}
	}
	else
	{
		head=temp;
	}
}

bool deleteList(int value)
{
	struct node *temp=head;
	struct node *x=NULL;
	int f=0;
	while(temp)
	{
		if(temp->data==value)
		{
			f=1;
			break;
		}	
		else
		{
			x=temp;
			temp=temp->next;
		}
	}
	if(f==1)
	{
		if(x)
		{
			struct node *y=temp->next;
			y->prev=x;
			x->next=y;
			temp->next=NULL;
			temp->prev=NULL;
			free(temp);
		}
		else
		{
			struct node *y=temp->next;
			temp->next=NULL;
			head=y;
			free(temp);
		}
		return true;
	}
	else
	{
		return false;	
	}	
}

void main()
{
	int ch,ele=0,pos=0,val=0;
	printf("Doubly Linked List\n");
	while(1)
	{
		printf("\nYour Menu: \n");
		printf("1. Create\n");
		printf("2. Insert\n");
		printf("3. Delete\n");
		printf("4. Search\n");
		printf("5. Display\n");
		printf("6. Exit\n");
		printf("\n");
		ch=0;
		scanf("%d",&ch);
		if(ch==1)
		{
			if(head)
			{
				printf("\nError! Your List is created already\n");
			}
			else
			{
				createList();
				printf("\nYour List is created successfully \n");
			}
		}
		else if(ch==2)
		{
			printf("\nEnter Position where element is to be inserted..\n");
			pos=0;
			scanf("%d",&pos);
			if(head || pos==1)
			{
				printf("\nEnter Element to be inserted..\n");
				val=0;
				scanf("%d",&val);
				insertList(pos,val);
				printf("\nElement is inserted successfully in the list\n");
			}
			else
			{
				printf("\nError! Your List is empty\n");
			}
		}
		else if(ch==3)
		{
			if(head)
			{
				printf("\nEnter Element to be deleted: \n");
				ele=0;
				scanf("%d",&ele);
				bool isPresent=deleteList(ele);
				if(isPresent)
				{
					printf("\nElement is successfully deleted from list\n");
				}
				else
				{
					printf("\nOops! Element is not present\n");
				}
			}
			else
			{
				printf("\nError! Your List is empty\n");
			}
		}
		else if(ch==4)
		{
			if(head)
			{
				printf("\nEnter Element to be searched: \n");
				ele=0;
				scanf("%d",&ele);
				bool isPresent=searchList(ele);
				if(isPresent)
				{
					printf("\nYes! Element is present in your linked list\n");
				}
				else
				{
					printf("\nOops! Element is not present\n");
				}
			}
			else
			{
				printf("\nError! Your List is empty\n");
			}
		}
		else if(ch==5)
		{
			if(head)
			{
				printf("\nYour Linked List is...\n");
				printf("\n");
				displayList();
			}
			else
			{
				printf("\nError! Your List is empty\n");
			}
		}
		else
		{
			exit(0);
		}
	}
	getch();
}
