#include <stdio.h>
#include <conio.h>
void MergeArray(int ar[],int beg,int mid,int end)
{
	int br[10],k=0;
	int i=beg,j=mid+1,z;
	while(i<=mid && j<=end)
	{
		if(ar[i]<=ar[j])
		{
			br[k++]=ar[i];
			++i;
		}
		else if(ar[i]>ar[j])
		{
			br[k++]=ar[j];
			++j;
		}
	}
	while(i<=mid)
	{
		br[k++]=ar[i];
		++i;
	}
	while(j<=end)
	{
		br[k++]=ar[j];
		++j;
	}
	k=0;
	for(z=beg;z<=end;z++)
	{
		ar[z]=br[k];
		++k;
	}
}
void MergeSort(int ar[],int beg,int end)
{
	if(beg<end)
	{
		int mid=(beg+end)/2;
		MergeSort(ar,beg,mid);
		MergeSort(ar,mid+1,end);
		MergeArray(ar,beg,mid,end);
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
	MergeSort(ar,0,n-1);
	printf("\nYour Sorted array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",ar[i]);
	}
	getch();
}
