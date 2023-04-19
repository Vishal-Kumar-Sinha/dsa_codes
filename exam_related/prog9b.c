#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int  i,j,k,c=0,n;
    printf("ENTER THE STRING:  ");
    gets(s);//accepting the string
    for(j=0;s[j];j++);
		n=j;
	printf("THE FREQUENCY OF CHARACTERS IN THE STRING ARE: \n");
    for(i=0;i<n;i++)
    {
     	c=1;
    	if(s[i])
    	{
 		  for(j=i+1;j<n;j++)//loop to check for repetition
	      {
	        if(s[i]==s[j])
    	    {
                 c++;
                 s[j]='\0';
	     	}
	      }
	      printf("%c : %d \n",s[i],c);
       }
 	}  
return 0;
}
