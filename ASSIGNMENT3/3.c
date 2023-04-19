/*C program to remove characters (from a string) located at odd positions.*/
#include<stdio.h>
#include<string.h>
int main() 
{
	char s1[1000];
    int i,j=0;
	printf("Enter any string :: ");
	gets(s1);
    char s2[1000];
	for(i=0;i<strlen(s1);i++)
	{
		if(i%2==0)
			continue;
		s2[j++]=s1[i];
	}
    s2[j]='\0';
    if(strlen(s2)==0)
        printf("\n...All elements removed!!!..String is empty...");
    else
        printf("After removing characters at odd position the string is :: %s",s2);
	return 0;
}
