#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
void main()
{
	clrscr();
	int n,i,ar[10],f=0,ch,ele,pos;
	bool start=true;
	do
	{
		ch=0;
		printf("\nYour Menu: \n");
		printf("1. Input\n");
		printf("2. Display\n");
		printf("3. Insertion\n");
		printf("4. Deletion\n");
		printf("5. Exit\n");
		printf("Enter any of above number: \n");
		scanf("%d",&ch);
		if(ch==1)
		{
			f=1;
			printf("\nEnter no of elements of array upto 5\n");
			scanf("%d",&n);
			printf("\nNow Enter Your array:\n");
			for(i=0;i<n;i++)
			{
				scanf("%d",&ar[i]);
			}
			printf("\nYour Input has been taken Successfully!!\n");
		}
		else if(ch==2)
		{
			if(f==1)
			{
				printf("\nYour array:\n");
				for(i=0;i<n;i++)
				{
					printf("%d ",ar[i]);
				}
				printf("\n");
			}
			else
			{
				printf("\nError! First input the array\n");
			}
		}
		else if(ch==3)
		{
			if(f==1)
			{
				ele=0;
				pos=0;
				printf("\nEnter your element and postion where element is to be inserted\n");
				scanf("%d%d",&ele,&pos);
				for(i=n-1;i>=(pos-1);i--)
				{
					ar[i+1]=ar[i];
				}
				ar[pos-1]=ele;
				++n;
				printf("\nSuccessfully inserted the element!!\n");
			}
			else
			{
				printf("\nError! First input the array\n");
			}
		}
		else if(ch==4)
		{
			if(f==1)
			{
				pos=0;
				printf("\nEnter the postion of element which is to deleted\n");
				scanf("%d",&pos);
				for(i=pos-1;i<n;i++)
				{
					ar[i]=ar[i+1];
				}
				--n;
				printf("\nSuccessfully deleted the element!!\n");
			}
			else
			{
				printf("\nError! First input the array\n");
			}
		}
		else
		{
			start=false;
		}
	}while(start);
	getch();
}
