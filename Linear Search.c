#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

void main()
{
	int n,ar[10],i,ele,pos;
	bool f=false;
	printf("Enter No of elements in array: \n");
	scanf("%d",&n);
	printf("\nNow enter your array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\nEnter the element which is to be searched in array: \n");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(ar[i]==ele)
		{
			f=true;
			pos=i+1;
			break;
		}
	}
	if(f)
	{
		printf("\nElement is present in array at postion: %d\n",pos);
	}
	else
	{
		printf("\nElement is not present in array\n");
	}
	getch();
}
