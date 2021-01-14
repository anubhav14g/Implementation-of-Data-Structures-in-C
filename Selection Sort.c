#include <stdio.h>
#include <conio.h>
void main()
{
	int n,ar[10],i,j,temp,mini,loc;
	printf("Enter No of elements of array: \n");
	scanf("%d",&n);
	printf("\nNow Enter your array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n-1;i++)
	{
		mini=ar[i];
		loc=i;
		for(j=i;j<n;j++)
		{
			if(ar[j]<mini)
			{
				mini=ar[j];
				loc=j;
			}
		}
		temp=ar[i];
		ar[i]=ar[loc];
		ar[loc]=temp;
	}
	printf("\nYour Sorted array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	getch();
}
