/*C program to show highest and second highest
element from a set of integers.*/
#include<stdio.h>
int main()
{
    int n,i,temp;
    printf("Enter no. of elements in the array :: ");
    scanf("%d",&n);
    int arr[100];
    printf("\nEnter %d elements :: ",n);
    for(i=0;i<n;++i)
       scanf("%d",&arr[i]);
    for(i=1;i<n;++i)
	{	
        if(arr[0]<arr[i])
		{
    	    temp=arr[0];
            arr[0]=arr[i];
            arr[i]=temp;
        }
    }
    printf("\nLargest element = %d\n",arr[0]);
    for (i=1;i<n;++i)
	{
        if(arr[1]<arr[i])
          arr[1]=arr[i];
    }
    printf("\nSecond largest element = %d",arr[1]);
    return 0;
}
