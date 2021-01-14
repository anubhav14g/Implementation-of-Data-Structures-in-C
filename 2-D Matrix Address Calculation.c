#include <stdio.h>
#include <conio.h>
void main()
{
	int n,m,ar[10][10],i,j,ele,f=0;
	int *r,*c;
	printf("Enter No of rows and columns of your matrix: \n");
	scanf("%d%d",&n,&m);
	printf("\nNow Enter Your Matrix: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&ar[i][j]);
		}
	}
	printf("\nEnter Element to find address of it: \n");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(ar[i][j]==ele)
			{
				f=1;
				r=&ar[0][0]+sizeof(int)*((n-1)*m+(m-1));
				c=&ar[0][0]+sizeof(int)*((m-1)*n+(n-1));
				break;
			}
		}
		if(f==1)
			break;
	}
	printf("\nMemory Address of %d stored in row major order is %p:\n",ele,r);
	printf("\nMemory Address of %d stored in column major order is %p:\n",ele,c);
	getch();
}
