/*C program to delete an integer at nth position and
also display the number of shifting operations.*/
#include<stdio.h>
int main()
{
    int a[100],r,i,n,count=0;
    printf("Enter no. of elements in the array :: ");
    scanf("%d",&n);
    printf("Enter %d elements :: ",n);
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
    printf("Enter the position to delete element :: ");
    scanf("%d",&r);
    if(r>=n+1 || r<1)
       printf("\n\t\tDeletion not possible.\n");
    else
    {
        for(i=r-1;i<n-1;i++)
        {
		    a[i]=a[i+1];
            ++count;
		}
        printf("The resultant array is :: ");
        for(i=0;i<n-1;i++)
           printf("%4d",a[i]);
        printf("\nNumber of shifting :: %d",count);
    } 
    return 0;
}
