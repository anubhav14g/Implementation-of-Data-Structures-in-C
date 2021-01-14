#include <stdio.h>
#inlcude <conio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

void push(char stack[],int *top,char ch)
{
	++(*top);
	stack[*top]=ch;
}

void pop(char stack[],int *top)
{
	--(*top);
}

void main()
{
	char inf[10],stack[10],post[10],ch;
	int i,l,top=-1,topp=-1;
//	Assuming String contains only *,/,+,-,^,(,),operands
	printf("Infix to Postfix expression\n");
	printf("\nInput Your balanced paranthesised string\n");
	scanf("%s",&inf);
	l=strlen(inf);
	for(i=0;i<l;i++)
	{
		if(inf[i]=='(')
		{
			ch=inf[i];
			push(stack,&top,ch);
			continue;
		}
		if(inf[i]>='a' && inf[i]<='z')
		{
			ch=inf[i];
			push(post,&topp,ch);
			continue;
		}
	}
	getch();
}

