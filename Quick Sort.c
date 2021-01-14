#include <stdio.h>
#include <conio.h>

int PartitionOperation(int ar[],int beg,int end)
{
	int i=beg+1;
	int j=end;
	int pivot=ar[beg];
	while(i<=j){
		while(ar[i]<=pivot){
			++i;
		}
		while(ar[j]>pivot){
			--j;
		}
		if(i<=j)
		{
			int temp=ar[i];
			ar[i]=ar[j];
			ar[j]=temp;
			++i;
			--j;
		}
	}
	int temp=ar[j];
	ar[j]=ar[beg];
	ar[beg]=temp;
	return j;
}

void QuickSort(int ar[],int beg,int end)
{
	if(beg<end)
	{
		int partitionIndex=PartitionOperation(ar,beg,end);
		QuickSort(ar,beg,partitionIndex-1);
		QuickSort(ar,partitionIndex+1,end);
	}
}

void main()
{
	int n,ar[10],i,j;
	printf("Enter No of elements of array: \n");
	scanf("%d",&n);
	printf("\nNow Enter your array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	QuickSort(ar,0,n-1);
	printf("\nYour Sorted array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	getch();
}
