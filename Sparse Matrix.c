#include <stdio.h>
#include <conio.h>
void main()
{
	char ch;
	int n,m,i,j;
	printf("Enter no of rows and columns of matrix: \n");
	scanf("%d%d",&n,&m);
	int ar[n][m],count=0;
	printf("Now Enter Your Matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&ar[i][j]);
			if(ar[i][j]!=0)
			{
				++count;
			}
		}
	}
	int sparse[count][3],k=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(ar[i][j]!=0)
			{
				sparse[k][0]=i;
				sparse[k][1]=j;
				sparse[k][2]=ar[i][j];
				++k;
			}
		}
	}
	printf("Your Sparse Matrix is here: \n");
	for(i=0;i<count;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",sparse[i][j]);
		}
		printf("\n");
	}
	getch();
}
