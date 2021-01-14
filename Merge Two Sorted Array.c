#include <stdio.h>
#include <conio.h>
void Merge(int ar[],int br[],int cr[],int n1,int n2)
{
	int i=0,j=0,k=0;
	while(i<n1 && j<n2)
	{
		if(ar[i]<=ar[j])
		{
			cr[k++]=ar[i];
			++i;
		}
		else
		{
			cr[k++]=br[j];
			++j;
		}
	}
	while(i<n1)
	{
		cr[k++]=ar[i];
		++i;
	}
	while(j<n2)
	{
		cr[k++]=br[j];
		++j;
	}
}
void main()
{
	int n1,n2,ar[10],br[10],cr[20],i,j;
	printf("Enter No of elements of array1: \n");
	scanf("%d",&n1);
	printf("\nNow Enter your Sorted array1: \n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\nEnter No of elements of array2: \n");
	scanf("%d",&n2);
	printf("\nNow Enter your Sorted array2: \n");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&br[i]);
	}
	Merge(ar,br,cr,n1,n2);
	printf("\nYour Merge Sorted array is: \n");
	for(i=0;i<(n1+n2);i++)
	{
		printf("%d ",cr[i]);
	}
	getch();
}
