#include <stdio.h>
#include <conio.h>
void main() {
    int n,i,j;
    printf("Enter a number: \n");
	scanf("%d",&n);
	printf("Your Output: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}
