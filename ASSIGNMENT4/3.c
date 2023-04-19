#include<stdio.h>
#include<stdlib.h>
int top=-1;
char stack[100];
void push(char a)
{
	stack[top]=a;
	top++;
}
void pop()
{
	if(top==-1)
	{
		printf("expression is invalid\n");
		exit(0);
	}	
	else		
		top--;
}
void find_top()
{
	if(top==-1)
		printf("\nexpression is valid\n");
	else
		printf("\nexpression is invalid\n");
}
int main()
{
	int i;
	char a[100];
	printf("Enter expression :: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='(')
			push(a[i]);
		else if(a[i]==')')
			pop();
	}
	find_top();
}
