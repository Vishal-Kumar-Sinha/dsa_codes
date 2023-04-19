/*C program to implement linear
search (in both of successful and
unsuccessful modes) and also show the
number of comparisons.*/
#include<stdio.h>
int main()
{
    int i,x,n,count=0;
    printf("Enter no. of elements in the array :: ");
    scanf("%d",&n); 
    int a[n];
    printf("\nEnter %d elements :: ",n);
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    printf("\nEnter element to search :: ");
    scanf("%d",&x);
    for(i=0;i<n;++i)
    {
    	++count;
    	if(a[i]==x)
            break;
	}
    if(i<n)
        printf("\nElement %d is found at position %d\n",x,i+1);
    else
        printf("\n\n\tElement not found.");
    printf("\nThe no. of comparison(s) :: %d",count);
    return 0;
}
