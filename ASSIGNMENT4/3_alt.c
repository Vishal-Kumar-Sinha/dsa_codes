#include<stdio.h>
int main()
{
	int i,j,c1=0,c2=0,c3=0;
	char a[100];
	printf("Enter expression :: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='(')
			c1++;
		else if(a[i]==')')
			c1--;
		else if(a[i]=='{')
			c2++;
		else if(a[i]=='}')
			c2--;
		else if(a[i]=='[')
			c3++;
		else if(a[i]==']')
			c3--;
	}
	if(c1==0&&c2==0&&c3==0)
	    printf("\nexpression is valid\n");  
	else
	    printf("\nexpression is invalid\n");

}
