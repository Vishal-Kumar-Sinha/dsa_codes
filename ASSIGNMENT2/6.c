#include<stdio.h>
int main()
{
 	int m,n,i,j,a[10][10],Total=0;  
 	printf("\nPlease Enter Number of rows and columns :: ");
 	scanf("%d %d",&m,&n);
 	printf("\nPlease Enter the Matrix Elements \n");
 	for(i=0;i<m;i++)
  	{
   		for(j=0;j<n;j++)
      		scanf("%d",&a[i][j]);
  	}
 	for(i=0;i<m;i++)
  	{
   		for(j=0;j<n;j++)
    	{
    		if(a[i][j]==0)
    			Total++;    		
   	 	}
  	}
  	if(Total>(i*j)/2)
  		printf("\n The Matrix that you entered is a Sparse Matrix ");
	else
		printf("\n The Matrix that you entered is Not a Sparse Matrix ");
 	return 0;
}
