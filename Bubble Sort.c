#include <stdio.h>
#include <conio.h>
void main()
{
	int n,ar[10],i,j,temp;
	printf("Enter No of elements of array: \n");
	scanf("%d",&n);
	printf("\nNow Enter your array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	printf("\nYour Sorted array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	getch();
}
