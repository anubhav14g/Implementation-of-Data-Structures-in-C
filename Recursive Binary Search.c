#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

bool RBinarySearch(int beg,int end,int ar[],int ele)
{
	int mid;
	if(beg<=end)
	{
		mid=(beg+end)/2;
		if(ar[mid]==ele)
			return true;
		else if(ele<ar[mid])
			return RBinarySearch(beg,mid-1,ar,ele);
		else
			return RBinarySearch(mid+1,end,ar,ele);
	}
	return false;
}

void main()
{
	int n,ar[10],i,ele;
	bool f;
	printf("Enter No of elements in array: \n");
	scanf("%d",&n);
	printf("\nNow enter your sorted array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\nEnter the element which is to be searched in array: \n");
	scanf("%d",&ele);
	f=RBinarySearch(0,n-1,ar,ele);
	if(f)
	{
		printf("\nElement is present in array\n");
	}
	else
	{
		printf("\nElement is not present in array\n");
	}
	getch();
}
