/*C program to insert an integer at nth position and
also display the number of shifting operations.*/
#include<stdio.h>
int main()
{
    int r,i,n,x,count=0;
    printf("Enter no. of elements in array :: ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter %d elements :: ",n);
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    printf("\nEnter the position to insert the element :: ");
    scanf("%d",&r);
    if(r>n+1 || r<1)
       printf("\n\t\tInsertion not possible.\n");
    else
    {
    	printf("\nEnter the element to insert :: ");
        scanf("%d",&x);
        for(i=n-1;i>=r-1;i--)
        {
        	a[i+1]=a[i];
    	    ++count;
	    } 
        a[r-1]= x;
        printf("\nArray after inserting the element is :: ");
        for(i=0;i<=n;i++)
           printf("%4d",a[i]);
        printf("\nThe number of shifting operations :: %d.",count);
	}
    return 0;
}
