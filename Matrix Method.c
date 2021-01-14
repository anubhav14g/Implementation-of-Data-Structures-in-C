#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
void main()
{
	int r1,r2,c1,c2,i,j,k,f=0,ch,al,g=0;
	bool start=true;
	int ar[3][3],br[3][3],ans[3][3];
	do
	{
		ch=0;
		printf("\nYour Menu: \n");
		printf("1. Input\n");
		printf("2. Operations\n");
		printf("3. Display\n");
		printf("4. Exit\n");
		printf("Enter any of above number: \n");
		scanf("%d",&ch);
		if(ch==1)		
		{
			f=1;
			printf("\nEnter no of rows and columns of matrix 1: \n");
			scanf("%d%d",&r1,&c1);
			printf("Enter your matrix 1: \n");
			for(i=0;i<r1;i++)
			{
				for(j=0;j<c1;j++)
				{
					scanf("%d",&ar[i][j]);
				}
			}
			printf("\nEnter no of rows and columns of matrix 2: \n");
			scanf("%d%d",&r2,&c2);
			printf("Enter your matrix 2: \n");
			for(i=0;i<r2;i++)
			{
				for(j=0;j<c2;j++)
				{
					scanf("%d",&br[i][j]);
				}
			}
			printf("\nYour Input has been taken\n");
		}
		else if(ch==2)
		{
			if(f==1)
			{
				al=0;
				printf("\nYour Menu of Operations: \n");
				printf("1. Addition\n");
				printf("2. Subtraction\n");
				printf("3. Multiplication\n");
				printf("Press any of above number: \n");
				scanf("%d",&al);
				switch(al)
				{
					case 1: 
					g=1;
					if(r1==r2 && c1==c2)
					{
					 	for(i=0;i<r1;i++)
					 	{
					 		for(j=0;j<c1;j++)
					 		{
					 			ans[i][j]=ar[i][j]+br[i][j];
							}
						}
						printf("Your Operation has been successfully performed\n\n");
					}
					else
					{
						printf("Error! Additon not possible\n\n");
					}
					break;
					case 2: 
					g=1;
					if(r1==r2 && c1==c2)
					{
					 	printf("Subtracting Matrix 1 and Matrix 2: \n");
						for(i=0;i<r1;i++)
					 	{
					 		for(j=0;j<c1;j++)
					 		{
					 			ans[i][j]=ar[i][j]-br[i][j];
							}
						}
						printf("Your Operation has been successfully performed\n\n");
					}
					else
					{
						printf("\nError! Subtraction not possible\n");
					}
					break;
					case 3: 
					g=1;
					if(c1==r2)
					{
					 	for(i=0;i<r1;i++)
					 	{
						 	for(j=0;j<c2;j++)
							{
								ans[i][j]=0;
							}	
						}
						for(i=0;i<r1;i++)
					 	{
						 	for(j=0;j<c2;j++)
							{
								for(k=0;k<c1;k++)
								{
									ans[i][j]+=ar[i][k]*br[k][j];
								}
							}	
						}
						printf("Your Operation has been successfully performed\n\n");
					}
					else
					{
						printf("\nError! Multiplication not possible\n");
					}
					break;
					default: printf("\nError! Invalid alphabet entered\n");
				}
			}
			else
			{
				printf("\nError! First input the matrix\n");
			}
		}
		else if(ch==3)
		{
			if(f==1)
			{
				if(g==1)
				{
					printf("\nYour final changed matrix is: \n");
					for(i=0;i<r1;i++)
					{
						for(j=0;j<c2;j++)
						{	
							printf("%d ",ans[i][j]);
						}
						printf("\n");
					}
				}
				else
				{
					printf("\nSorry! No Operation is performed to display the matrix \n");
				}
			}
			else
			{
				printf("\nError! First input the matrix\n");
			}
		}
		else
		{
			printf("\nThanks for entering in Matrix World !!!\n");
			start=false;
		}
	}while(start);
	getch();
}
