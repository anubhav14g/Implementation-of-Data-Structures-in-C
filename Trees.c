#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "Queue for trees.h"

struct TreeNode
{
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
}*root=NULL;

void createTree()
{
	int rt,data,x,total;
	printf("\nEnter root value of tree\n");
	scanf("%d",&rt);
	root=(struct TreeNode*)malloc(sizeof(struct TreeNode));
	root->val=rt;
	root->left=NULL;
	root->right=NULL;
	enqueue(root);
	while(checkEmpty())
	{
		struct TreeNode *poppedAdd=dequeue();
		data=poppedAdd->val;
		printf("\nEnter left child of %d\n",data);
		x=0;
		scanf("%d",&x);
		if(x!=-1)
		{
			struct TreeNode *temp1=(struct TreeNode*)malloc(sizeof(struct TreeNode));
			temp1->val=x;
			temp1->left=NULL;
			temp1->right=NULL;
			poppedAdd->left=temp1;
			enqueue(temp1);
		}
		printf("\nEnter right child of %d\n",data);
		x=0;
		scanf("%d",&x);
		if(x!=-1)
		{
			struct TreeNode *temp=(struct TreeNode*)malloc(sizeof(struct TreeNode));
			temp->val=x;
			temp->left=NULL;
			temp->right=NULL;
			poppedAdd->right=temp;
			enqueue(temp);
		}
	}
}

void inorder(struct TreeNode *start)
{
	if(start)
	{
		inorder(start->left);
		printf("%d ",start->val);
		inorder(start->right);
	}
}

void preorder(struct TreeNode *start)
{
	if(start)
	{
		printf("%d ",start->val);
		inorder(start->left);
		inorder(start->right);
	}
}

void postorder(struct TreeNode *start)
{
	if(start)
	{
		inorder(start->left);
		inorder(start->right);
		printf("%d ",start->val);
	}
}

void main()
{
	int ele,ch,i;
	printf("Trees Data Structure Using Linked List\n");
	while(1)
	{
		printf("\nEnter Operation to be performed\n");
		printf("1. Create Tree\n");
		printf("2. Inorder Traversal\n");
		printf("3. Preorder Traversal\n");
		printf("4. Postorder Traversal\n");
		printf("5. Exit\n");
		ch=0;
		printf("\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			if(root)
			{
				printf("\nError! Tree is already created\n");
			}
			else
			{
				createTree();
				printf("\nYour Tree has been created successfully\n");
			}
		}
		else if(ch==2)
		{
			if(root)
			{
				printf("\nYour Inorder Traversal of tree is: \n");
				inorder(root);
				printf("\n");
			}
			else
			{
				printf("\nError! Create Tree first\n");
			}
		}
		else if(ch==3)
		{
			if(root)
			{
				printf("\nYour Preorder Traversal of tree is: \n");
				preorder(root);
				printf("\n");
			}
			else
			{
				printf("\nError! Create Tree first\n");
			}
		}
		else if(ch==4)
		{
			if(root)
			{
				printf("\nYour Postorder Traversal of tree is: \n");
				postorder(root);
				printf("\n");
			}
			else
			{
				printf("\nError! Create Tree first\n");
			}
		}
		else
		{
			exit(0);
		}
	}
	getch();
}
